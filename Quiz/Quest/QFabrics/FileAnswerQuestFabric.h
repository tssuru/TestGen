#pragma once
#include "AnswerQuestFabric.h"

/*  фабрика вопросов-эссе
    в источник загружается файл с вопросами
        один вопрос на n строках
        белые строки игнорируются
    вопросы перемешиваются
*/
class FileAnswerQuestFabric:public AnswerQuestFabric{
public:
	FileAnswerQuestFabric(const std::string &fname,
                        const std::string &before="",const std::string &after="",
                        unsigned n=1);
};
