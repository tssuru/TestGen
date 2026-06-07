#pragma once
#include <string>

class BaseQuestion{
public:
    BaseQuestion(const std::string &before_="",const std::string &after_="");
	virtual operator std::string() const;
	virtual ~BaseQuestion()=default;
protected:
    std::string before, after;
    virtual std::string mainText()const=0;
};
