#include "VariantFabric.h"
#include <iostream>
#include "strings2.h"

using namespace std;

#include <algorithm>

/*Numerator::Numerator(int num){
    setFirstNum(num);
}*/

void Numerator::setFirstNum(int num){
    last=num-1;
}

void Numerator::addGap(int from_, int to_){
    if (from_>=to_ or to_<=last) return;
    if (!gaps.empty() and (gaps[gaps.size()-1].second>=from_)){
        gaps[gaps.size()-1].second=to_;
        return;
    }
    gaps.push_back({from_, to_});
//    for (const auto &el:gaps)
//        cout<<el.first<<" "<<el.second<<endl;
//    sort(gaps.begin(), gaps.end());
}

int Numerator::operator()(){
    //cout<<last<<" "<< cur_gap<<endl;
    ++last;
    if (!gaps.empty() and cur_gap<gaps.size() and last>=gaps[cur_gap].first){
        last=gaps[cur_gap].second;
        ++cur_gap;
    }
    return last;
}

VariantFabric::VariantFabric(const string &before_, const string& after_, int first_):
		before(before_), after(after_), first(first_){}

void VariantFabric::addFabric(unique_ptr<QuestFabric> &&f, const string &delim){
	fabrics.push_back((unique_ptr<QuestFabric> &&)f);
	delims.push_back(delim);
}

void VariantFabric::setFirstNum(int first){num.setFirstNum(first);}
void VariantFabric::addGap(int from_, int to_){num.addGap(from_, to_);}

unique_ptr<BaseVariant> VariantFabric::make(){
	auto no=num();
	//cout<<no<<endl;
	unique_ptr<BaseVariant> v(unique_ptr<BaseVariant>(new BaseVariant(substitute(before,"#No#",to_string(no)),after,first)));
	for (unsigned i=0;i<fabrics.size();++i)
		v->addQuestion(unique_ptr<BaseQuestion>(fabrics[i]->make()), delims[i]);
	return v;
}

void VariantFabric::make2file(ostream &f){
	auto v=make();
	f<<string(*v);
}
