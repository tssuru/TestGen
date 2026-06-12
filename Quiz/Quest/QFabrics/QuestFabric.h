#pragma once
#include "BaseQuestion.h"
#include <string>
#include <fstream>
#include <memory>
#include "StringSource.h"


class QuestFabric{
protected:
    std::string before, after;
    QuestFabric(const std::string &before="",const std::string &after="");
public:
    virtual ~QuestFabric()=default;
    virtual std::unique_ptr<BaseQuestion> make()=0;
    virtual unsigned size() const; //количество различных вопросов, которые можно сгенерировать
    void make2file(std::ostream &f);
};
