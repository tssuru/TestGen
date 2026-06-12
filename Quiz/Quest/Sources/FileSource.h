#pragma once
#include "SetSource.h"

class FileSource:public SetSource{
public:
   FileSource(const std::string &fname, unsigned n=1);
};
