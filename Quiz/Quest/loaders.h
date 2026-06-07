#pragma once
#include <string>
#include <vector>
#include <ios>
#include <fstream>
//#include "datas.h"
//#include "strings.h"

//using namespace std;
using std::istream;
using std::string;
using std::vector;
using std::out_of_range;
using std::ios_base;

// загружает из файла одну небелую строку,
// белые строки игнорируются
// белые символы по краям строк обрезаются
// конкатенируя по n небелых строк через \n
istream& getline(istream& f, string& dest,unsigned n);

//загрузчик из файла в контейнер векторов, по n небелых строк в контейнер
istream& getline(istream& f, vector<string>& dest,unsigned n);

template <class T>	vector<T> load(const string &fname,unsigned n=1){
	std::ifstream f(fname);
	if (f.fail()) throw ios_base::failure("no such file:" + fname);
	T s;
	vector<T> res;
	while (getline(f,s,n)) res.push_back(move(s));
	if (!f.eof()) throw ios_base::failure("unable read from file " + fname);
	f.close();
	return res;
}
