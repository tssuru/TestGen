#pragma once
#include "StringSource.h"
#include <vector>
#include "ShuffledContainer.h"

class SetSource:public StringSource{
public:
   SetSource()=default;
   SetSource(std::vector<std::string> &&);
   std::string operator++(int);
   unsigned size() const;
protected:
    Container<std::string> c;
};
