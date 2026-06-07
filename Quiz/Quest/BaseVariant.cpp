#include "BaseVariant.h"
using namespace std;

const std::string BaseVariant::BeginVariant="%begin\n";

const std::string BaseVariant::EndVariant="%end\n";

const std::string BaseVariant::BeginItem="%beginitem\n";

const std::string BaseVariant::EndItem="%enditem\n";

BaseVariant::BaseVariant(const string &before_, const string &after_, int first_):
    before(before_),after(after_), firstNum(first_){}

BaseVariant::operator string()const{
	string res=BeginVariant+before;
	if (questions.size()>1){
        for (unsigned i=0;i<questions.size()-1;++i)
            res+=BeginItem+to_string(i+firstNum)+". "+ string(*questions[i])+EndItem+delims[i];
        res+=BeginItem+to_string(questions.size()+firstNum-1)+". "+ string(*questions[questions.size()-1])
        +EndItem;
    } else
            res+=string(*questions[0])+delims[0];
	res+=after+EndVariant;
	return res;
}

void BaseVariant::addQuestion(unique_ptr<BaseQuestion> &&t,const string &delim){
    questions.push_back((unique_ptr<BaseQuestion> &&)t);
    //questions.push_back(t);//try with MSVC
    delims.push_back(delim);
}

