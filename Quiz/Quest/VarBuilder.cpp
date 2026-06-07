#include "VarBuilder.h"
#include "strings2.h"
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "datas.h"
using namespace std;

VarBuilder::VarBuilder(ScriptInterpreter &si_):si(si_),v(si_.vf){
//    for (const auto &i: STANDART)
//            keywords[i.first.substr(1,i.first.size()-2)]=i.second;
}

void VarBuilder::build(const string&scriptname,const string &dir_){
    fnames=stack<string>(); files=stack<ifstream>(); lines=stack<unsigned>(); parts.clear();
    dir=expand_dir(dir_);
    open(scriptname);
    parsePart("document",&VarBuilder::setDocumentProperties);
    parsePart("variant",&VarBuilder::createVariant);
    parseItems();
}

void VarBuilder::parsePart(const string& key, void (VarBuilder::*whatToDo)()){
    enum State {First, In, Out};
    int state=First;
    parts.clear();
    while (state!=Out && getline())
        switch (state){
        case First:
            if(current=="<"+key+">") {state=In; break;}
            else throw logic_error("Waiting for <"+key+"> : " +where());
        case In:
            if(current=="<\\"+key+">") state=Out; else parseClause();
            break;
        default: throw logic_error("Revise cases in code of VarBuilder::parsePart ");
        }
    (this->*whatToDo)();
}

void VarBuilder::setDocumentProperties(){
    unsigned from=1, to=1, from2=10000, to2=9999;
    unsigned onPage=1;
    si.header=getValue("header", true);
    si.footer=getValue("footer", true);
    si.onNextVariant=getValue("onNextVariant", true);
    si.onNextPage=getValue("onNextPage", true);
    try {from=convert_u(getValue("from",true));} catch(...){}
    try {to=convert_u(getValue("to",true));} catch(...){}
    if (to<from) throw logic_error("should be: variant number [to] <= variant number [from] ");
    try {from2=convert_u(getValue("from2",true));} catch(...){}
    try {to2=convert_u(getValue("to2",true));} catch(...){}
    //if (to2<from2) throw logic_error("should be: variant number [to2] <= variant number [from2] ");
    try {onPage=convert_u(getValue("onPage",true));} catch(...){}
    si.from=from; si.to=to;si.onPage=onPage;
    si.from2=from2; si.to2=to2;
    if (!parts.empty()) throw logic_error("Too much params in section <document> in file " +fnames.top());
}

void VarBuilder::createVariant(){
    string after=getValue("after", true), before=getValue("before", true);
    int first=1;
    try {first=convert_u(getValue("first",true));} catch(...){}
    if (!parts.empty()) throw logic_error("Too much params in header in file " +fnames.top());
    v=unique_ptr<VariantFabric> (new VariantFabric(before,after,first));
}
//parse one clause
void VarBuilder::parseClause(){
    findName();
    parseNameValue();
    addNameValue();
}
void VarBuilder::findName(){
    name.clear(); waitname.clear();
    if (current.size()<=2 && (current[0]!='<') && (current[current.size()-2]!='>'))
        throw logic_error("Waiting for <smth>: " +where());
    name=current.substr(1,current.size()-2);
    waitname="<\\"+name+">";
}
void VarBuilder::parseNameValue(){
    value.clear();
    while (getline() && current!=waitname) value+=current;
    if (current!=waitname) throw logic_error("Waiting for " +waitname + " : "+ where());
}
void VarBuilder::addNameValue(){
    auto tmp=parts.find(name);
    if (tmp!=parts.end()) throw logic_error("Section " +name + " is defined twice: "+ where());
    parts[name]=value;
}
//
void VarBuilder::parseItems(){
    while (parseItem());
}
bool VarBuilder::parseItem(){
    parts.clear();
    if (!getline()) return false;
    if (current!="<item>") throw logic_error("Waiting for <item>: " +where());
    fabr=parseFabric();
    while (getline() && current!="<\\item>") parseClause();
    if (current!="<\\item>") throw logic_error("Waiting for <\\item>: " +where());
    createItem();
    return true;
}

 void VarBuilder::createItem(){
    string delim=getValue("delim",true);
    if (!parts.empty()) throw logic_error("Too much keys: "+where());
    if (delim.empty()) (*v).addFabric((unique_ptr<QuestFabric> &&)fabr);
    else (*v).addFabric((unique_ptr<QuestFabric> &&)fabr, delim);
 }

 unique_ptr<QuestFabric> VarBuilder::parseFabric(){
    parts.clear();
    if (!getline() ) throw logic_error("Unexpected end of file: " +where());
    //cout<<current<<"!!!"<<endl;
    if (current.substr(0,7)=="include") {current=trim(current.substr(8)); return parseFile(current);}
    if (current!="<fabric>") throw logic_error("Waiting for <fabric>: " +where());
    if (!getline() ) throw logic_error("Waiting for fabric type: " +where());
    if (current=="collate") return parseCollateFabric();
    parts["type"]=current;
    while (getline() && current!="<\\fabric>") parseClause();
    if (current!="<\\fabric>") throw logic_error("Waiting for <\\fabric>: " +where());
    return createFabric();
 }

 unique_ptr<QuestFabric> VarBuilder::parseFile(const string &fname){
    open(fname);
    auto tmp=parseFabric();
    close();
    return (unique_ptr<QuestFabric>&&)tmp;
}

unique_ptr<QuestFabric> VarBuilder::parseCollateFabric(){
//source1, source2, n1, n2
    unique_ptr<QuestFabric> f1=parseFabric(),f2=parseFabric();
    while (getline() && current!="<\\fabric>") parseClause();
    unsigned n1=0,n2=0;
    try {n1=convert_u(getValue("n1"));} catch(...){}
    try {n2=convert_u(getValue("n2"));} catch(...){}
    return unique_ptr<QuestFabric>(new Collate2QuestFabric((unique_ptr<QuestFabric>&&)f1,n1,(unique_ptr<QuestFabric>&&)f2,n2));
}

unique_ptr<QuestFabric> VarBuilder::createFabric(){
    string type=getValue("type");
    if (type=="file answer") return createFileAnswerFabric();
    if (type=="template answer") return createTemplateAnswerFabric();
    if (type=="check") return createCheckFabric();
    if (type=="check auto") return createCheckFabricAuto();
    //cout<<type<<endl;
    throw logic_error("Unknown fabric type in section : " +where());
 }
unique_ptr<QuestFabric> VarBuilder::createFileAnswerFabric(){
 //FileAnswer fname, before, after
 string fname=getValue("fname"),
        before=getValue("before",true),
        after=getValue("after",true);
unsigned n=1;
 try {n=convert_u(getValue("num",true));} catch(...){}
 if (!parts.empty()) throw logic_error("Too much keys: "+where());
 return unique_ptr<QuestFabric>(new FileAnswerQuestFabric(makefname(fname), before,after,n));
}
unique_ptr<QuestFabric> VarBuilder::createTemplateAnswerFabric(){
 //TemplateAnswer fname, before, after
 string fname=getValue("fname"),
        before=getValue("before",true),
        after=getValue("after",true);
//        dir=getValue("dir",true);
cout<<"fname="<<fname<<endl;
 if (!parts.empty()) throw logic_error("Too much keys: "+where());
 return unique_ptr<QuestFabric>(new TemplateAnswerQuestFabric(fname, dir, before,after));
}
unique_ptr<QuestFabric> VarBuilder::createCheckFabric(){
//Check   fname, nCase, AfterForEachInFile, before, after, mode
string fname, nCase_,selfAfter_,before,after,mode_, mix_;
unsigned nCase;
bool mix;
fname=getValue("fname");
nCase_=getValue("ncase"); nCase=convert_u(nCase_);
selfAfter_=getValue("AfterForEachInFile",true);
bool selfAfter=(selfAfter_=="true");
before=getValue("before", true);
after=getValue("after", true);
mode_=getValue("mode",true);
mix_=getValue("mix","true");
mix=(mix_=="true");
CheckQuestion::PrintModes mode=CheckQuestion::PrintModes::OneOnLine;
if (mode_=="TabBetween") mode=CheckQuestion::PrintModes::TabBetween;
else if (mode_=="TwoOnLine") mode=CheckQuestion::PrintModes::TwoOnLine;
else if (mode_=="SpaceBetween") mode=CheckQuestion::PrintModes::SpaceBetween;
string delimBeforeCases=getValue("delimBeforeCases", string("\n"));
return unique_ptr<QuestFabric>(new CheckQuestFabric(
    makefname(fname),nCase,selfAfter,before,after,mode,delimBeforeCases, mix));
}
unique_ptr<QuestFabric> VarBuilder::createCheckFabricAuto(){
//CheckAuto fnameGood, fnameBad, nCase, nGood, before, after, mode

string fnameGood=getValue("good"), fnameBad=getValue("bad");
string nCase_, nGood_;
unsigned nCase,nGood;
nCase_=getValue("ncase"); nCase=convert_u(nCase_);
nGood_=getValue("nGood"); nGood=convert_u(nGood_);
string before,after,mode_;
before=getValue("before", true);
after=getValue("after", true);
mode_=getValue("mode",true);
CheckQuestion::PrintModes mode=CheckQuestion::PrintModes::OneOnLine;
if (mode_=="TabBetween") mode=CheckQuestion::PrintModes::TabBetween;
else if (mode_=="TwoOnLine") mode=CheckQuestion::PrintModes::TwoOnLine;
else if (mode_=="SpaceBetween") mode=CheckQuestion::PrintModes::SpaceBetween;

return unique_ptr<QuestFabric>(new CheckQuestFabricAuto(makefname(fnameGood), makefname(fnameBad),nCase,nGood,before,after,mode));
}

//file processing
void VarBuilder::open(const string &fname_){
    string fname=makefname(fname_);
    fnames.push(fname);lines.push(0);files.push(ifstream(fname));
    if (!files.top()) throw ios_base::failure("Unable to open input file "+fname);
}
void VarBuilder::close(){fnames.pop();lines.pop();files.pop();}
bool VarBuilder::getline(){
    ifstream &f=files.top();
    while (std::getline(f,current) && ((current=trim(current)).empty() || current.substr(0,2)=="//"))
        ++lines.top();
    if (!f) {if (!f.eof())throw ios_base::failure("Unable to read input file "+fnames.top());
            else return false;}
    current=substituteT(current,STANDART);
    ++lines.top();
    //cout<<"current="<<current<<endl;
    //cout<<lines.top()<<endl;
    return true;
}
string VarBuilder::makefname(const string &s) const{return dir+s;}

//diagnostics
string VarBuilder::where()const {return "at line " + to_string(lines.top()) + " in file "+ fnames.top();}

//getting info from parts-table
string VarBuilder::getValue(const string &key){
    if (parts.find(key)==parts.end()) throw logic_error("No key "+key+" : "+where());
    string tmp=parts[key]; parts.erase(key);
    return tmp;
}
string VarBuilder::getValue(const string &key,bool){
    string tmp=parts[key]; parts.erase(key);
    return tmp;
}
string VarBuilder::getValue(const string &key,const string &default_val){
    if (parts.find(key)==parts.end()) return default_val;
    string tmp=parts[key]; parts.erase(key);
    return tmp;
}

