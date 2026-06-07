#include "TemplateSource.h"
#include "Builder.h"
#include "strings2.h"
using namespace std;

TemplateSource::TemplateSource(const string &fname, const string &dir){
    Builder b;
    b.parse(nametable,result,fname,dir);
}

void TemplateSource::getValues(){
    for (auto & i:nametable) {
        if ((i.second)->arity()==1)
            values[i.first]="";//(*i.second)++;
        else{
            for(unsigned j=0;j<(i.second)->arity();++j){
                values[i.first+"["+to_string(j)+"]"]=((*i.second))++;
            }
        }
    }
}

void TemplateSource::getValue(const string &s){
    if (nametable.find(s)==nametable.end()) throw std::logic_error("no var "+s);
    values[s]=(*nametable[s])++;
}

string TemplateSource::operator++(int){
    getValues();
    return TemplateSource::substitute(result);
}

string TemplateSource::substitute(const string &what){
    string tmp=what;
    //можно заменить вызовом tmp=substitute(what,values);
    for (auto i:values) {
        if (tmp.find("#"+i.first+"#")!=string::npos ) {
            if (nametable.find(i.first)!=nametable.end() && nametable[i.first]->arity()==1)
                getValue(i.first);
            tmp=::substitute(tmp,"#"+i.first+"#", values[i.first]);
         }
        while (tmp.find("#"+i.first+" new#")!=string::npos){
            getValue(i.first);
            tmp=substituteOne(tmp,"#"+i.first+" new#", values[i.first]);
        }
    }
    return tmp;
}

unsigned TemplateSource::size() const{
    unsigned size_=1;
    for (const auto &i:nametable) size_*=(*i.second).size();
    return size_;
}
