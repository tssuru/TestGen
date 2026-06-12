#pragma once
#include <sstream>
#include <string>
#include <fstream>
#include <map>
#include "ShuffledContainer.h"
#include "sources.h"
using std::map;
using std::string;
using std::istringstream;
/*
white lines are skipped
whites are skipped but not in literals
\n delimites literals in
comment lines of the form //... are skiped
declarations could not be empty
template-string could not be empty

<<source>>::=<<declarations>><<template-string>><<restrictions>>
<<declarations>>::=<declarations>\n {<<container>>|<<constant>>} \n <\declarations>
<<container>>::=<<id>> = <<literal>> \n |
                <<id>> = #<<id>> \n
<<constant>>::=const <<id>> = <<literal>> \n
<<template-string>>::= <template> \n {<<literal>>}\n <\template>
<<literal>>::= % <<any sequence of symbols>> %

0={&}{;}
1=#0
2={<int> 0..9} {<char> a..c}
const printAB={ cout<<a<<\":\"<<b<<endl;}

int f(int #0#x, int #1#y) { x=#2#; y#10#=#11#; return #3#;}\n
int main(){\n  int a=#4#, b=#5#; #printAB#\n  #6#=f(#7#,#8#); #printAB#\n
  {#9#a=5; cout<<a<<endl;}\n #printAB# return 0;}
*/
/*TemplateFabric Builder*/
class Builder{
public:
    Builder();

// now returns table of names, in future return semantic structure
    void parse(NameTable& tn_, string &result, const string fname_, const string dir_="");
#ifdef DEBUG
    void debug();
#endif
private:
    void parseLine();
    void parseDeclaration();
    void parseConstDeclaration();
    void parseVarDeclaration();
    void parseTemplate();
    void parseRestriction();
    void parseSample();
    void readDefinition();
    void readName();
//auxiliaries for parse...
    void buildConstant();//by current name and def
    void buildVar();//by current name and def
    void buildSimpleList();//by current name and def
    void buildBracketList();//by current name and def
    void buildBracedList();//by current name and def
    void processListElem(const string&elem);//добавляет порцию в текущий контейнер

struct Definition{
    string def;
    enum Type {None, Const, Set}type=None;
};

//map<string, string> keywords;// ENDL, SPACE, TAB

NameTable *tn; // name -> StringSource
map<string, Definition> cs;//table of names  name -> definition
string out; // template string (to build tree in next release)

string fname,dir;
std::ifstream f;     // input stream
string current; // string to parse
unsigned line=0;

enum State {Empty, End, Error, Declarations, Template, Restrictions, Sample}; // states of parser
State state=Empty;

unsigned pos=0;
string name,def;
vector<string> container;
void addChars(istringstream &is);
void addInts(istringstream &is);
void addDoubles(istringstream &is);
void addFile(istringstream &is, unsigned n=1);
//void addFileTuple(istringstream &is, unsigned n=1);

string where()const;
string makefname(const string &s) const;

};
