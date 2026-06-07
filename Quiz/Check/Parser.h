#pragma once
#include <fstream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using Variant=vector<vector<string>> ;
struct Params{
    string sDate;//дата в заголовке, сверяется с файлом
    int varshift;//позиция начала номера варианта в заголовке
    string newpage;//маркер новой страницы
    const int N;//количество вопросов
    int qLength[20];//задает количество строк, на котором размещается вопрос; ИЗМЕНИТЬ ТЕХНОЛОГИЮ!!!
    //TO DO: если 0, то читает до первой непустой строки, которая начинатеся не с белого символа
    // -1 след вопрос на этой же строке с этим; пока поддерживаются ровно 2 на одной строке
    bool qSave[20];//надо ли сохранять вопрос
    bool qSaveFirstLine[20];//надо ли сохранять первую строку вопроса
    bool qSaveLastLine[20];//надо ли сохранять последнюю строку вопроса
    unsigned nHeader=1;//кол-во строк заголовка
    int nFirst=1; //номер первого вопроса
};
struct Parser{

    Parser(const string &fname, const Params p_, bool py=false);
    bool readVariant();
    Variant variant;
    std::ifstream f;
    string s;//current string
    bool page=false;

    int num=0;
    int npp=0;
    int n=0;// index of current item
    int ntline=0;
    int indent=0;

    void header();
    void item();
    void itemFixed(); // вопрос с фиксированным количеством строк
    void itemFloat(int minn=1); // вопрос с плавающим количеством строк
    void items(); // несколько вопросов из одной строки


    bool isHeader()const;

    int findNum();
    bool readline();//skip white lines; read one line ahead

    const Params &p;
    //
    bool save, saveFirstLine, saveLastLine;
    int nline;
    bool Python=false;

};

std::ostream& operator<<(std::ostream&f, const Variant &vv);
std::ostream& operator<<(std::ostream&f, const vector<string>&v);
