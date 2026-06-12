#pragma once
#include <string>

class StreamOfBracedElems{
private:
	std::string source;
	std::size_t current;
public:
	StreamOfBracedElems(const std::string &s);
	bool getNext(std::string &str);// if not exist return false and ""
};
