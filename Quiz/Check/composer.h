#include <fstream>
#include <string>
#include "Parser.h"
using std::string;
/*
Фукции генерации кода, который строит проверочный ключ.
Каждый вариант берется в отдельный namespace

*/

void printVariant1(std::ostream &f,const Variant&v,int num);
void printVariant2(std::ostream &f,Variant&v,int num);
void printVariant4(std::ostream &f,Variant&v,int num);
void printPass(std::ostream &f,const Variant&v,int num);
void printMain(std::ostream &f,int n);
void printMain_mod4(std::ostream &f,int n);

void standartHeader(std::ostream &f);
void mod4Header(std::ostream &f);
void begin(std::ostream &f, int num);
void end(std::ostream &f);
void simpleLine(std::ostream &f, const Variant&v, int item, int nfirst=1);
void complexLine(std::ostream &f, const Variant&v, int item, const string &main,int nfirst=1);


void standartHeaderPy(std::ostream &f);
void simpleLinePy(std::ostream &f, const Variant&v, int item, int nfirst=1);
void complexLinePy(std::ostream &f, const Variant&v, int item, int nfirst=1);
void beginPy(std::ostream &f, int num);
void endPy(std::ostream &f);
void isolatePy(std::ostream &f);//isolate small latin variables

void printVariant1Py(std::ostream &f,const Variant&v,int num);
void printVariant2Py(std::ostream &f,const Variant&v,int num);
void printPassPy(std::ostream &f,const Variant&v,int num);

//void printvar(std::ofstream&f, string &sVar, string &s, string &sf, string &smain);


