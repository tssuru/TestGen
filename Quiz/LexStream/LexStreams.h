#pragma once
#include <string>
#include <vector>
#include "LexStream.h"
#include "StreamOfBracedElems.h"

//load from string with delimiters to the container
std::vector<std::string> load(const std::string &source, const std::string &delim);
