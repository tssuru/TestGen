#include "SetSource.h"
using namespace std;

SetSource::SetSource(vector<string> &&c_):c(move(c_)){}
string SetSource::operator++(int){return c++;}
unsigned SetSource::size() const{return c.size();}
