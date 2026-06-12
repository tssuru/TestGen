#include "LexStream.h"
using namespace std;

#include <iostream>
LexStream::LexStream(const string &s, const string &delimiter):source(s), delim(delimiter),current(0){}

bool LexStream::getNext(string &str){
	if (current==string::npos) {str=""; return false;}
	size_t pos=source.find(delim, current);
	if (pos!=string::npos) {
		str=source.substr(current,pos-current); current=pos+delim.size();
	} else {str=source.substr(current); current=pos;}
	return true;
}


void load(vector<string> &con, const string &source, const string &delim){
	LexStream ls(source, delim);
	string s;
	while (ls.getNext(s)) con.push_back(s);
}
