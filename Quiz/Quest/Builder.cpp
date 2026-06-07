#include "Builder.h"
#include "strings2.h"
#include<cstring>
#include <utility>
#include <iostream>
#include "LexStreams.h"
#include "loaders.h"
#include "datas.h"
using namespace std;
Builder::Builder(){
//    for (const auto &i: STANDART)
//            keywords[i.first]=i.second;
//            keywords[i.first.substr(1,i.first.size()-2)]=i.second;
   /*keywords["ENDL"]="\n";
    keywords["TAB"]="\t";
    keywords["SPACE"]=" ";
    keywords["SPACE1"]=" ";
    keywords["SPACE2"]="  ";
    keywords["SPACE3"]="   ";
    keywords["SPACE4"]="    ";*/
}
void Builder::parse(NameTable& tn_, string &text, const string fname_,const string dir_){
    tn=&tn_;
    cs.clear(); out.clear(); state=Empty;
    fname=trim(fname_);dir=trim(dir_); if (!dir.empty() && dir[dir.size()-1]!='/' && dir[dir.size()-1]!='\\') dir+='/';
    line=0;
    cout<<fname<<endl;
    fname=makefname(fname);
    cout<<fname<<endl;
    f.open(fname);
    if (!f) throw ios_base::failure("Unable to open input file "+fname);
    while (std::getline(f,current)) parseLine();
    if (!f.eof() )throw ios_base::failure("Unable to read input file "+fname);
    if (state!=Empty) throw logic_error("Unexpected end in input file " + fname);
    text=out;
}

string Builder::makefname(const string &s) const{
    return dir+s;
}

void Builder::parseLine(){
    ++line;pos=0;name.clear();def.clear();
    if ((current=trim(current)).empty()) return;
    if (current.substr(0,2)=="//") return;
    switch (state){
    case Empty:
        if(current=="<declarations>") {state=Declarations; return;}
        if(current=="<template>") {
            if (!out.empty()) throw logic_error("template string is defined yet! " +where());
            state=Template; return;
        }
        if(current=="<restrictions>") {state=Restrictions; return;}
        if(current=="<sample>") {state=Sample; return;}
        throw logic_error("Waiting for section header: " +where());
    case Declarations: return parseDeclaration();
    case Template: return parseTemplate();
    case Restrictions: return parseRestriction();
    case Sample: return parseSample();
    default: throw logic_error("Check code of Builder::parseLine switch (unknown case)!");
    }
}
void Builder::parseDeclaration(){
    if(current=="<\\declarations>") {state=Empty; return;}
    if (current.substr(0,strlen("const"))=="const") {pos=6; parseConstDeclaration();}
    else parseVarDeclaration();
}
void Builder::parseRestriction(){
    if(current=="<\\restrictions>") {state=Empty; return;}
}
void Builder::parseSample(){
    if(current=="<\\sample>") {state=Empty; return;}
}
void Builder::parseTemplate(){
    if(current=="<\\template>") {state=Empty; return;}
    current=substituteT(current,STANDART);
    out+=current;
}
void Builder::parseConstDeclaration(){
    readName();
    readDefinition();
    buildConstant();
}
void Builder::parseVarDeclaration(){
    readName();
    readDefinition();
    if (def.size()>1 && def[0]=='#') {
        auto localname=def.substr(1);
        auto tmp=cs.find(localname);
        if (tmp==cs.end()) throw logic_error("Name "+ localname+" not defined yet: " + where());
        def=(*tmp).second.def;
    }
    buildVar();
}

void Builder::readName(){
    auto i=current.find(string("="),pos);
    if (i==string::npos) throw logic_error("Waiting for = : "+where());
    name=trim(current.substr(pos,i-pos));
    if (name.empty()) throw logic_error("Name should not be empty : " + where());
    pos=i+1;
    auto tmp=cs.find(name);
    if (tmp!=cs.end()) throw logic_error("Redeclaration of the name " + name+": "+ where());
}

void Builder::readDefinition(){
    def=trim(current.substr(pos));
    if (def.size()==0) throw logic_error("Too short definition : "+where());
    def=substituteT(def,STANDART);
}

string Builder::where()const {return "at line " + to_string(line) + " in file "+ fname;}

#ifdef DEBUG
void Builder::debug(){
    cout<<"out-string:\n"<<out<<endl;
    cout<<"name count:"<<cs.size()<<endl;
    auto tmp=cs.begin();
    while (tmp!=cs.end()) {
        cout<<(*tmp).first<<"="<<(*tmp).second.def<<endl;
        ++tmp;
    }
    auto tmp1=tn->begin();
    StringSource *p;
    while (tmp1!=tn->end()) {
        p=(*tmp1).second.get();
        cout<<(*tmp1).first<<"="<<(*p).size()<<" elems:";
        (*p)>>cout;
        ++tmp1;
    }
}
#endif // DEBUG

void Builder::buildConstant(){
    (*tn)[name]=unique_ptr<StringSource>(new ConstSource(def));
    cs.insert(make_pair(name,Definition{def,Definition::Const}));
}

void Builder::buildVar(){
    if (def.size()>1 && def[0]=='#') {
        auto localname=def.substr(1);
        auto tmp=cs.find(localname);
        if (tmp==cs.end()) throw logic_error("Name "+ localname+" not defined yet: " + where());
        def=(*tmp).second.def;
    }
    //cout<<def<<endl;
    if (def[0]=='{') buildBracedList();
    else if (def[0]=='[') buildBracketList();
    else buildSimpleList();
    cs.insert(make_pair(name,Definition{def,Definition::Set}));
}

void Builder::buildSimpleList(){
    (*tn)[name]=unique_ptr<StringSource>(new SetSource(load(def,";")));
}
void Builder::buildBracketList(){
    unsigned long n; char *pend;
    n=strtoul(def.c_str()+1,&pend,10);
    if (errno) throw logic_error("Improper arity: " + where());
    string sname=def.substr(pend-def.c_str()+1);
    //cout<<sname<<endl;
    sname.erase(sname.find_last_of(']'));
    sname=trim(sname);
    if (sname.size()<1) throw logic_error("Improper source-name : " + where());
    if (sname[0]=='"') {
       if (sname.size()<3) throw logic_error("Improper source-name : " + where());
       if (sname[sname.size()-2]!='"') throw logic_error("No end \" : " + where());
       sname=sname.substr(1,sname.size()-2);
    }
    if (sname.empty()) throw logic_error("Improper filename: " + where());
    //cout<<"xxx"<<endl;
    (*tn)[name]=unique_ptr<StringSource>(new FileTupleSource(makefname(sname),n));
    //cout<<"yyy"<<endl;
}
void Builder::buildBracedList(){
    container.clear();
    StreamOfBracedElems ls(def);
    string elem;
    while (ls.getNext(elem)) processListElem(elem);
    (*tn)[name]=unique_ptr<StringSource>(new SetSource(move(container)));
}

 void Builder::processListElem(const string&elem){
     if (elem.empty()) return;
     if (elem[0]!='<') {container.push_back(elem); return;}
     istringstream is(elem);
     string type;
     is>>type;
     if (is.fail()) throw logic_error("Improper interval-elem : " + where());
     //cout<<type<<endl;
     if (type=="<char>") addChars(is);
     else if (type=="<int>") addInts(is);
     else if (type=="<double>") addDoubles(is);
     else if (type=="<file>") addFile(is);
     else if (type.find("<file:")==0) {
            unsigned n= convert_u(type.substr(6,type.size()-7));
            addFile(is,n);
     } else throw logic_error("Improper type for interval-elem : " + where());

 }
  void Builder::addChars(istringstream &is){
     char from, to;
     is>>from;
     is>>to;
     if (is.fail()) throw logic_error("Improper interval-elem : " + where());
     if (from>to) throw logic_error("Empty char interval-elem : " + where());
     string tmp;
     while(from<=to) {
        tmp=from;
        container.push_back(tmp);
        ++from;
     }
 }
  void Builder::addInts(istringstream &is){
     int from, to;
     is>>from;
     is>>to;
     if (is.fail()) throw logic_error("Improper interval-elem : " + where());
     if (from>to) throw logic_error("Empty int interval-elem : " + where());
     string tmp;
     while(from<=to) {
        tmp=to_string(from);
        container.push_back(tmp);
        ++from;
     }
 }

void Builder::addDoubles(istringstream &is){
    //cout<<"doubles"<<endl;
    double from, to, step;
     is>>from;
     is>>to;
     is>>step;
    int precision;
     is>>precision;
     if (is.fail()) throw logic_error("Improper interval-elem : " + where());
     if (from>to) throw logic_error("Empty double interval-elem : " + where());
     if (precision<0) throw logic_error("Improper precision: " + where());
     if (step<=0) throw logic_error("Improper step: " + where());
     string tmp;
     while(from<=to) {
        tmp=d2string(from,precision);
        //cout<<tmp<<endl;
        container.push_back(tmp);
        from+=step;
     }
     if (tmp!=d2string(to,precision)) container.push_back(d2string(to,precision));
 }

 void Builder::addFile(istringstream &is,unsigned n){
     string sname;
     std::getline(is,sname);
     sname=trim(sname);
     if (sname.size()<1) throw logic_error("Improper source-name : " + where());
     if (sname[0]=='"') {
        if (sname.size()<3) throw logic_error("Improper source-name : " + where());
        if (sname[sname.size()-2]!='"') throw logic_error("No end \" : " + where());
        sname=sname.substr(1,sname.size()-2);
     }
     for (auto &&el: load<string>(makefname(sname),n))
        container.push_back(move(el));
 }

/*
  void Builder::addFileTuple(istringstream &is,unsigned n){
     string sname;
     std::getline(is,sname);
     sname=trim(sname);
     if (sname.size()<1) throw logic_error("Improper source-name : " + where());
     if (sname[0]=='"') {
        if (sname.size()<3) throw logic_error("Improper source-name : " + where());
        if (sname[sname.size()-2]!='"') throw logic_error("No end \" : " + where());
        sname=sname.substr(1,sname.size()-2);
     }
    for (auto &&el: load<string>(makefname(sname),n))
        container.push_back(move(el));
}
*/
