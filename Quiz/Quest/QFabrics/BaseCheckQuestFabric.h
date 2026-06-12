#pragma once
#include "QuestFabric.h"
#include "CheckQuestion.h"
#include "shuffle.h"

/*  базовая фабрика вопросов с вариантами ответов
        можно добавить стандартный текст перед и после тела вопроса
        можно задать режим разделителей вариантов
    устанавливает количество вариантов одинаковое для всех вопросов из фабрики
*/
class BaseCheckQuestFabric:public QuestFabric{
protected:
    unsigned nCase; //should be >=2
    Shuffle mixer;
	CheckQuestion::PrintModes mode=CheckQuestion::PrintModes::OneOnLine;
public:
	BaseCheckQuestFabric(unsigned nCase_, const std::string &before_="",const std::string &after_="",
                          CheckQuestion::PrintModes mode_=CheckQuestion::PrintModes::OneOnLine,
                          bool do_mix=true);
};
