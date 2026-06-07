#include "TemplateAnswerQuestFabric.h"
#include "TemplateSource.h"
using namespace std;

TemplateAnswerQuestFabric::TemplateAnswerQuestFabric(const string &fname, const string &dir,
                                                     const string &before_,const string &after_):
					AnswerQuestFabric(before_,after_){
    c=unique_ptr<StringSource>(new TemplateSource(fname, dir));
}
