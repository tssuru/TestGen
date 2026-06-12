#include "QuestFabric.h"
#include <iostream>

using namespace std;

QuestFabric::QuestFabric(const string &before_,const string &after_):before(before_),after(after_){}

unsigned QuestFabric::size()const {return 0;}

void QuestFabric::make2file(ostream &f){
	f<<string(*make());
}
