#pragma once
#include "QuestFabric.h"
#include "BaseQuestion.h"
#include "ShuffledContainer.h"

#include <memory>

/*
    фабрика смешивает вопросы двух фабрик
*/
class Collate2QuestFabric:public QuestFabric{  //избавиться от указателей!!!
	//QuestFabric &f1,&f2;
    unsigned nn[2];
	unsigned n;
	std::unique_ptr<QuestFabric> ff[2];
	Container<int> sh;
public:
	Collate2QuestFabric(std::unique_ptr<QuestFabric> &&ff1, unsigned n1_,
                        std::unique_ptr<QuestFabric>  &&ff2, unsigned  n2_);
	std::unique_ptr<BaseQuestion> make();
	unsigned size() const;
};
