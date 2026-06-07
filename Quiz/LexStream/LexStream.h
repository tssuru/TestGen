#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

class LexStream{
private:
	std::string source;
	std::string delim;
	std::size_t current;
public:
	LexStream(const string &s, const string &delimiter=";");
	bool getNext(std::string &str);// if no return false and ""
};



//load from string with delimiters to the container
void load(vector<string> &con, const string &source, const string &delim);
