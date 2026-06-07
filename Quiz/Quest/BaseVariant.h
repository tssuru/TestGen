#pragma once
#include "BaseQuestion.h"
#include <string>
#include <vector>
#include <memory>

class BaseVariant{
protected:
    std::vector<std::unique_ptr<BaseQuestion> > questions; //вопросы
    std::vector<std::string> delims; //разделители вопросов в варианте
    //для pair нет конструктора перемещения, поэтому не пара
	std::string before,after;
	int firstNum=1;
public:
    explicit BaseVariant(const std::string &before_="", const std::string &after_="", int first_=1);
    void addQuestion(std::unique_ptr<BaseQuestion> &&t,const std::string &delim="\n");
    operator std::string() const;

protected:
    static const std::string BeginVariant, EndVariant, BeginItem, EndItem;
};
