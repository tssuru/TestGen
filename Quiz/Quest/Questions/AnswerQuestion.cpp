#include "AnswerQuestion.h"
#include <stdexcept>

using namespace std;

AnswerQuestion::AnswerQuestion(const string &s,const string &before_,const string &after_):
    BaseQuestion(before_,after_),task(s){
    if (task.empty()) throw logic_error("Task can not be empty!");
}

string AnswerQuestion::mainText() const { return task;}
