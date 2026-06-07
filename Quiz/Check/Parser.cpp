#include <stdexcept>
#include "Parser.h"
#include "strings.h"
#include <iostream>
using namespace std;

Parser::Parser(const string &fname, const Params p_, bool py):f(fname), p(p_), Python(py){
    if (!f) throw runtime_error("No file "+fname);
    readline();
}
bool Parser::readVariant(){
    variant.clear();
    variant.resize(p.N);
    ++npp;
    n=0;
    if (!f || !isHeader()) return false;
    header();
    for(;n<p.N;++n) item();
    return !f.fail()||f.eof();
}

void Parser::header(){
    num=atoi(s.c_str()+p.varshift);
   // cout<<s.c_str()+p.varshift<<endl;
    for(auto i=p.nHeader;i>0;--i) readline();
}
void Parser::item(){
//    cout<<n<<endl;
    save=p.qSave[n];
    saveFirstLine=p.qSaveFirstLine[n];
    saveLastLine=p.qSaveLastLine[n];
    if (n+p.nFirst!=findNum()) throw logic_error("Incorrect item number "+to_string(n) +" in variant "+to_string(num)+" text line "+to_string(ntline));
    nline=p.qLength[n];
    if (nline>0) itemFixed();
    else if (nline==0) itemFloat();
    else if (nline==-1) items();
    else itemFloat(-nline);

    //cout<<variant<<endl;

    //cout<<s<<endl;

}

void Parser::itemFixed(){
    int nl=2-(saveFirstLine+saveLastLine);
    if(save) variant[n].reserve(p.qLength[n]-nl);
    if (save && saveFirstLine) variant[n].push_back(s);
    while (readline() && --nline>0){
        if (Python) s=s.substr(indent);
        if (save && (nline!=1 || saveLastLine)) variant[n].push_back(s);
    }
}

void Parser::items(){
    if (p.qLength[n]!=-1)
        throw logic_error("Only single line (-1) can contain more the one question!");
    string snext="   "+to_string(n+p.nFirst+1)+".";
    auto i=s.find(snext);
    if (i==string::npos)
        throw logic_error("The second question is absent!");
    string s1=trim(s.substr(0,i-1));
    if (save) {
        variant[n].reserve(1);
        variant[n].push_back(s1);
    }
    ++n;
    s1=trim(s.substr(i+snext.size(),-1));
    if (save) {
        variant[n].reserve(1);
        variant[n].push_back(s1);
    }
    readline();
}

void Parser::itemFloat(int minn){
  //  cout<<s<<endl;
    if (save && saveFirstLine) variant[n].push_back(s);
    --minn;
    while (readline() && (minn>0 || !s.empty() && isspaceC(s[0]))){
        --minn;
        if (Python) s=s.substr(indent);
        if (save) variant[n].push_back(s);
    }
    if (!saveLastLine && !variant[n].empty()) variant[n].pop_back();
}

bool Parser::isHeader()const{
    return (s.find(p.sDate)==0);
}

int Parser::findNum(){
  //  cout<<s<<endl;
    auto i=s.find(".");
    if (i==string::npos) return -1;
    int num=atoi(s.substr(0,i).c_str());
    i=s.find_first_not_of(WHITES_C,i+1);
    if (i==string::npos) return -1;
    indent=i;
    s=s.substr(i);
    return num;
}

bool Parser::readline(){
    page=false;

    while(getline(f,s) && (trim(s).empty()))++ntline;
    ++ntline;
 //   cout<<s<<endl;

    if (!f) return false;
    //cout<<s.find(p.newpage)<<endl;
    if (s.find(p.newpage)==0) {
        s=s.substr(p.newpage.size());
        if (trim(s).empty()) readline();
        page=true;
    }
   // cout<<s<<endl;
    return bool(f);
}

ostream& operator<<(ostream&f, const Variant &vv){
    int n=1;
    f<<vv.size()<<endl;
    for(const auto&i:vv) f<<i.size()<<" ";
    f<<endl;
    for(const auto &i:vv){
            if(i.size()) {f<<n<<":"<<endl;for(const auto &j:i) f<<"\t"<<j<<endl; f<<endl;}
            ++n;
    }
    return f;
}
std::ostream& operator<<(std::ostream&f, const vector<string>&v){
    for(const auto&i:v) f<<i<<endl;
    return f;
}
