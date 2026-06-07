#include "BaseQuestion.h"

using namespace std;

BaseQuestion::BaseQuestion(const string &before_,const string &after_):before(before_),after(after_){}
BaseQuestion::operator string() const {return before +mainText()+after;}
