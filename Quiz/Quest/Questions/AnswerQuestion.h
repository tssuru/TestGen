#pragma once
#include "BaseQuestion.h"
#include <string>

class AnswerQuestion: public BaseQuestion{//вопрос-эссе
public:
	AnswerQuestion(const std::string &task_,const std::string &before_="",const std::string &after_="");
protected:
    std::string task;
    std::string mainText()const;
};
