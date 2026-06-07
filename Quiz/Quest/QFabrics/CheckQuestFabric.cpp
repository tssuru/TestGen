#include "CheckQuestFabric.h"
#include "loaders.h"
using namespace std;

CheckQuestFabric::CheckQuestFabric(const string &fname, unsigned nCase_,bool selfAfter,
                                   const string &before_, const string &after_,
                                   CheckQuestion::PrintModes mode_,
                                   const string &delimBeforeCases_,
                                   bool do_mix):
            BaseCheckQuestFabric(nCase_, before_,after_,mode_, do_mix),
            c(load<vector<string>>(fname, nCase+1+selfAfter)),
            delimBeforeCases(delimBeforeCases_) {}

unsigned CheckQuestFabric::size()const {return c.size();}

unique_ptr<BaseQuestion> CheckQuestFabric::make(){
	const vector<string> &cur=c++;//текущий элемент контейнера, контейнер с вариантами

	CheckQuestion *res=new CheckQuestion(nCase, before+cur[0]+delimBeforeCases,
        ((cur.size()==nCase+2)?cur[nCase+1]:"")+after, mode);
	try {for (unsigned i=0; i<nCase;++i) res->addCase(cur[1+mixer++]);}
	catch(...){delete res; throw;}
	return unique_ptr<BaseQuestion>(res);
}
