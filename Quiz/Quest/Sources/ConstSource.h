#pragma once
#include "StringSource.h"

class ConstSource:public StringSource{
public:
   ConstSource(const std::string &s);
   std::string operator++(int);
protected:
   std::string source;
};
