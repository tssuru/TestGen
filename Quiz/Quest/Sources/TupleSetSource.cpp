#include "TupleSetSource.h"
using namespace std;

TupleSetSource::TupleSetSource(vector<vector<string>> &&c_): c(move(c_)){
    if (c.size()==0) throw out_of_range("TupleSetSource container could not be empty!");
    n=c[0].size();
    current=&(c++);
    i=current->begin(); nc=0;
}
string TupleSetSource::operator++(int){
    string tmp;
    if (i==current->end()) {
        if (nc!=n) throw out_of_range("Incorrect length in TupleSetSource container!");
        current=&(c++); i=current->begin(); nc=0;}
    tmp=*i;
    ++i;++nc;
    return tmp;
}
unsigned TupleSetSource::size() const{return c.size();}
unsigned TupleSetSource::arity() const{return n;}
