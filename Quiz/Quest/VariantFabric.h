#pragma once
#include "QuestFabric.h"
#include "BaseVariant.h"
#include <string>
#include <vector>
#include <memory>
#include <fstream>

class Numerator{
protected:
    int last=0;                    //последний сгенерированный номер варианта
    using T=std::vector<std::pair<int, int>>;
    T gaps;
    T::size_type cur_gap=0;
public:
    //Numerator(int num);
    void setFirstNum(int num);
    void addGap(int from_, int to_);//добавлять до начала использования и в отсортированном порядке!
    int operator()();
};

/*  фабрика вариантов
*/
class VariantFabric{
protected:
    std::vector<std::unique_ptr<QuestFabric> > fabrics; //фабрики вопросов
    std::vector<std::string> delims;
 	std::string before,after;
 	Numerator num;
 	int first=1;
	//int count=0;                    //текущий номер варианта
public:
	VariantFabric(const std::string &before_="",const std::string &after_="", int first_=1);
	void setFirstNum(int num);
	void addGap(int from_, int to_);
	void addFabric(std::unique_ptr<QuestFabric> &&f, const std::string& delim="\n");
	std::unique_ptr<BaseVariant> make();
	void make2file(std::ostream &f);
};

