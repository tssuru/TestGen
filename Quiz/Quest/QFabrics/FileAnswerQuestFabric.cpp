#include "FileAnswerQuestFabric.h"
#include "FileSource.h"
using namespace std;

FileAnswerQuestFabric::FileAnswerQuestFabric(const string &fname, const string &before_,const string &after_,unsigned n):
					AnswerQuestFabric(before_,after_){
    c=unique_ptr<StringSource>(new FileSource(fname,n));
}
