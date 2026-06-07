#pragma once
#include "AnswerQuestFabric.h"

/*  фабрика вопросов-эссе
    в источник загружается файл с шаблоном, по которому генеруруются вопросы
*/
class TemplateAnswerQuestFabric:public AnswerQuestFabric{
public:
	TemplateAnswerQuestFabric(const std::string &fname, const std::string &workdir="",
                           const std::string &before="", const std::string &after="");
};
