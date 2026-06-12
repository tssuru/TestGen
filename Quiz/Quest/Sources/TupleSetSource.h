#pragma once
#include "StringSource.h"
#include <vector>
#include "ShuffledContainer.h"

class TupleSetSource:public StringSource{
public:
   TupleSetSource()=default;
   TupleSetSource(vector<vector<string>> &&);
   string operator++(int);
   unsigned size() const;
   unsigned arity() const;
protected:
    unsigned n=1;
    unsigned nc=0;
    vector<string>::const_iterator i;
    const vector<string> *current=nullptr;
    Container<vector<string>> c;
};
