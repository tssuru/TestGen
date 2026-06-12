#include "Collate2QuestFabric.h"
using namespace std;

vector<int> helper(unsigned n, unsigned n1){
 vector<int> tmp(n, 0);
    for (auto i=n1; i<n; ++i) tmp[i]=1;
return tmp;
}

Collate2QuestFabric::Collate2QuestFabric(unique_ptr<QuestFabric> &&ff1,unsigned n1_,
                                         unique_ptr<QuestFabric> &&ff2, unsigned n2_):
            nn{n1_?n1_:(*ff1).size(),n2_?n2_:(*ff2).size()}, n(nn[0]+nn[1]),
            ff{(unique_ptr<QuestFabric> &&)ff1, (unique_ptr<QuestFabric> &&)ff2},
            sh(helper(n, nn[0])){
    /*vector<int> tmp(n, 0);
    for (auto i=nn[0]; i<n; ++i) tmp[i]=1;
    sh=move(Container<int>(move(tmp)));*/
}

unique_ptr<BaseQuestion> Collate2QuestFabric::make(){
    return ff[sh++]->make();
}

unsigned Collate2QuestFabric::size()const {return n;}
