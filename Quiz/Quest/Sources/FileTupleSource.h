#pragma once
#include "TupleSetSource.h"

class FileTupleSource:public TupleSetSource{
public:
   FileTupleSource(const string &fname, unsigned n=1);
};
