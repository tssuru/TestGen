#pragma once
#include "BaseCheckQuestFabric.h"
#include "ShuffledContainer.h"

/*  фабрика вопросов c вариантами ответов
    загружаются файлы правильных и неправильных вариантов
    можно добавить стандартный текст перед и после тела вопроса
    задается количество вариантов и количество правильных среди них
    шаблон: before + варианты(из контейнера) + after
    перемешиваются варианты в контейнерах и варианты внутри вопроса
*/

class CheckQuestFabricAuto:public BaseCheckQuestFabric{
    unsigned nGood;
	Container<std::string> good, bad;

public:
    CheckQuestFabricAuto(const std::string &fnameGood, const std::string &fnameBad,
                            unsigned nCase_, unsigned nGood_,
                            const std::string &before="",const std::string &after="",
                          CheckQuestion::PrintModes mode_=CheckQuestion::PrintModes::OneOnLine);
    std::unique_ptr<BaseQuestion> make();
    unsigned size() const;
};
