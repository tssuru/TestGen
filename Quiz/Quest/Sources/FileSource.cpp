#include "FileSource.h"
#include "loaders.h"
using namespace std;

FileSource::FileSource(const string &fname, unsigned n):SetSource(load<string>(fname,n)){}
