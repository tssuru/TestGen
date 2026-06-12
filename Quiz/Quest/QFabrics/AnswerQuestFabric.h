#pragma once
#include "QuestFabric.h"
#include "BaseQuestion.h"
#include "StringSource.h"

#include <memory>

/*  фабрика вопросов-эссе
    можно добавить стандартный текст перед и после тела вопроса
    шаблон: before + question(из источника) + after
*/

// base class, the source is set only in derived classes
class AnswerQuestFabric:public QuestFabric{
public:
	AnswerQuestFabric(const std::string &before="",const std::string &after="");
	std::unique_ptr<BaseQuestion> make();
	unsigned size() const;
protected:
	std::unique_ptr<StringSource> c;
};
