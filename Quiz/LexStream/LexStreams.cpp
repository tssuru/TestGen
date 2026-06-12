#include "LexStreams.h"
using std::string;
using std::vector;

vector<string> load(const string &source, const string &delim){
    vector<string> res;
	LexStream ls(source, delim);
	string s;
	while (ls.getNext(s)) res.push_back(s);
	return res;
}
