#include "CheckQuestion.h"
#include <stdexcept>
using namespace std;

CheckQuestion::Case::operator string()const{ return text+delim;}

CheckQuestion::CheckQuestion(unsigned nCases, const string& before_, const string& after_, PrintModes mode):
        BaseQuestion(before_,after_), cases(nCases){
    if (nCases<2) throw invalid_argument("Check question should have at least 2 cases");
    cases[nCases-1].delim="";
	switch(mode){
        case TabBetween:for(unsigned i=0;i<nCases-1;++i) cases[i].delim="\t";break;
        case TwoOnLine:for(unsigned i=0;i<nCases-1;i+=2) cases[i].delim="\t";break;
        case SpaceBetween:for(unsigned i=0;i<nCases-1;++i) cases[i].delim="  ";break;
    default:;
	}
}

string CheckQuestion::mainText()const{
    if (n!=cases.size()) throw logic_error("CheckQuestion is not full with cases!");
    string res;
    if (ENUM){
        int num=1;
        for (auto i=cases.begin();i!=cases.end(); ++i, ++num)
                res+="( " +to_string(num)+" ) " +string(*i)+"\n";
    } else{
        for (auto i=cases.begin();i!=cases.end(); ++i)  res+="(_) " +string(*i);
    }
	return res;
}
/*
CheckQuestion::Case& CheckQuestion::operator[](unsigned k){
    if (k<n-1) throw out_of_range("Case "+to_string(k) + " is absent now!");
    return cases.at(k);
}
*/
void CheckQuestion::addCase(const string &text,bool answer, const string &delim){
    if (n==cases.size()) throw logic_error("CheckQuestion is full/ Could not add anything!");
    cases[n].text=text;
    if (!delim.empty()) cases[n].delim=delim;
    if (answer!=DEFAULT_ANSWER) cases[n].answer=answer;
    ++n;
}
