#pragma once
#include "BaseCheckQuestFabric.h"
#include "ShuffledContainer.h"
/*  фабрика вопросов c вариантами ответов
    загружается файл со сгруппированными по вопросам
        текст перед (обязательный), варианты ответов, текст после (наличие/отсутствие настраивается)
        один вариант на строку
        белые строки игнорируются
        количество вариантов в файле должно быть кратно количеству вариантов вопроса
    можно добавить стандартный текст перед и после тела вопроса
    шаблон: before + before из контейнера + варианты(из контейнера) + after из контейнера + after
    перемешиваются вопросы и варианты внутри вопроса
*/
class CheckQuestFabric:public BaseCheckQuestFabric{
protected:
	Container<std::vector<std::string>> c;
	std::string delimBeforeCases;
public:
    CheckQuestFabric(const std::string &fname, unsigned nCase_, bool selfAfter=false,
                     const std::string &before_="",const std::string &after_="",
                          CheckQuestion::PrintModes mode_=CheckQuestion::PrintModes::OneOnLine,
                          const std::string &delimBeforeCases_="\n",
                          bool do_mix=true);
	std::unique_ptr<BaseQuestion> make();
	unsigned size() const;
};
