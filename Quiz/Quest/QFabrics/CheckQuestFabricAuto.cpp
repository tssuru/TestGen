#include "CheckQuestFabricAuto.h"
#include "loaders.h"
using namespace std;
#include <iostream>


CheckQuestFabricAuto::CheckQuestFabricAuto(const string &fnameGood, const string &fnameBad,
                            unsigned nCase_, unsigned nGood_,
                            const string &before_,const string &after_,
                          CheckQuestion::PrintModes mode_):
                 BaseCheckQuestFabric(nCase_, before_,after_,mode_),nGood(nGood_<=nCase?nGood_:nCase_),
                 good(load<string>(fnameGood)), bad(load<string>(fnameBad))
                 {
   if (nGood>nCase){
        cout<<"Positive cases couldn't be more than all cases!"<<endl;
        cout<<"All the cases will be positive"<<endl;
   }
}

unsigned CheckQuestFabricAuto::size() const{
    return pow(good.size(),nGood)*pow(bad.size(),nCase-nGood);
}
unique_ptr<BaseQuestion> CheckQuestFabricAuto::make(){
CheckQuestion *res=new CheckQuestion(nCase, before,after, mode);
try {
    for (unsigned i=0; i<nCase;++i)
        if (mixer++<nGood) res->addCase(good++); else res->addCase(bad++);
} catch(...){delete res; throw;}
return unique_ptr<BaseQuestion>(res);
}
