#include "AnswerQuestFabric.h"
#include "AnswerQuestion.h"
using namespace std;

AnswerQuestFabric::AnswerQuestFabric(const string &before_,const string &after_):
					QuestFabric(before_,after_){}
unique_ptr<BaseQuestion> AnswerQuestFabric::make(){
    return unique_ptr<BaseQuestion>(new AnswerQuestion((*c)++,before,after));
}
unsigned AnswerQuestFabric::size()const {return (*c).size();}
