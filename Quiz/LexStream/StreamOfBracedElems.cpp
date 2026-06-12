#include "StreamOfBracedElems.h"
using std::string;

StreamOfBracedElems::StreamOfBracedElems(const string &s):source(s),current(0){}

bool StreamOfBracedElems::getNext(string &str){
	if (current==string::npos) {str=""; return false;}
	size_t pos1=source.find("{", current);
	size_t pos2=source.find("}", pos1);
	if (pos1==string::npos || pos2==string::npos) {str=""; return false;}
    str=source.substr(pos1+1,pos2-pos1-1); current=pos2+1;
	return true;
}
