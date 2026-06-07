#pragma once
#include <string>

class StringSource{
public:
   virtual std::string operator++(int)=0;
   virtual unsigned arity() const;
   virtual unsigned size() const;
   virtual ~StringSource()=default;
};
