#pragma once
#include "StringSource.h"

#include <map>
#include <memory>

typedef std::map<std::string, std::unique_ptr<StringSource>> NameTable;
typedef std::map<std::string, std::string> NameTableValues;

class TemplateSource:public StringSource{
public:
   TemplateSource(const std::string &fname,const std::string &workdir="");
   std::string operator++(int);
   unsigned size() const;
protected:
    void getValues();
    void getValue(const std::string &name);
    std::string substitute(const std::string& what);
    NameTable nametable;
    NameTableValues values;
    std::string result;// string with template for result
};

