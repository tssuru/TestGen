#include "ConstSource.h"
using namespace std;

ConstSource::ConstSource(const string &s):source(s){}
string ConstSource::operator++(int){return source;}
