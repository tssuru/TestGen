#pragma once
#include "ScriptInterpreter.h"
#include "qfabrics.h"
#include <map>
#include <stack>


//!!!для многострочных констант \n при слиянии не добавляются
class VarBuilder{
public:
    void build(const std::string &scriptname,const std::string &workdir_="");
    VarBuilder(ScriptInterpreter &si_);
private:
    ScriptInterpreter &si;        //интерпретатор скриптов, в который читаем спецификацию
    std::unique_ptr<VariantFabric> &v; //его фабрика вариантов (можно это поле убрать, но тогда надо аккуратно менять весь код)

//    std::map<std::string, std::string> keywords;
    std::string current; //string to parse
    std::string dir;     //working dir

    std::map<std::string, std::string> parts;
    std::stack<std::string> fnames;  //names of open files
    std::stack<std::ifstream> files; //open streams
    std::stack<unsigned> lines; //line position in files


    std::string delim;

    //parse text from <key> to <\key> and call whatToDo()
    //read first line by itself
    void parsePart(const std::string& key, void (VarBuilder::*whatToDo)());
    void parseItems();

    void setDocumentProperties();//whatToDo for <document>
    void createVariant();        //whatToDo for <header>

    //parse one clause and add its value to parts
    //first line is given
    void parseClause();
    //auxiliaries
    void findName();        //find clause name
    void parseNameValue();  //parse to the end of clause, e.i. <\name>
    void addNameValue();    //add name with value to parts, if no throw exception
    std::string name, value, waitname;// <key>, its value, <\key>

    bool parseItem();   //true iff exist; read first line by itself
    void createItem();
    std::unique_ptr<QuestFabric> fabr;//the result fabric for item
    //parse and create
    std::unique_ptr<QuestFabric> parseFabric(); //read first line by itself
    //auxiliaries
    std::unique_ptr<QuestFabric> parseFile(const string &fname);//file with fabric
    std::unique_ptr<QuestFabric> parseCollateFabric();
    //auxiliaries for creation
    std::unique_ptr<QuestFabric> createFabric(); //switching to the next methods
    std::unique_ptr<QuestFabric> createFileAnswerFabric();
    std::unique_ptr<QuestFabric> createTemplateAnswerFabric();
    std::unique_ptr<QuestFabric> createCheckFabric();
    std::unique_ptr<QuestFabric> createCheckFabricAuto();



//getting info from parts-table
string getValue(const string &key);//throws if no such key; erases key
string getValue(const string &key,bool);//erases key
string getValue(const string &key,const string&defaults);//erases key

//file operations
void open(const string &fname);
void close();
bool getline();
string makefname(const string &s)const;
//diagnostics
string where()const;

//now is unused


};
