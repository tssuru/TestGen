#include "FileTupleSource.h"
#include "loaders.h"
#include <iostream>
using namespace std;

FileTupleSource::FileTupleSource(const string &fname, unsigned n_):
    TupleSetSource(load<vector<string>>(fname,n_)){
    cout<<fname<<": "<< n_<< "; arity = "<<arity()<<endl;
}
