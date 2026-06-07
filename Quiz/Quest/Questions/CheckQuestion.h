#pragma once
#include "BaseQuestion.h"
#include <string>
#include <vector>

class CheckQuestion: public BaseQuestion{//тест с nCases вариантами выбора
    static const bool DEFAULT_ANSWER=true;
    static const bool ENUM=true; // hardcoded numeration! ***
public:
    struct Case{
        std::string text;    // вариант выбора
        std::string delim="\n";   // разделитель вариантов в конце
        bool answer=DEFAULT_ANSWER;    // ответ
        //string rem4rightAnswer;
        //string rem4badAnswer;
        operator std::string() const;
    };
    enum PrintModes {OneOnLine, TabBetween, TwoOnLine, SpaceBetween};
    /*режимы печати
        OneOnLine - каждый на новой строке
        TabBetween- через табуляцию
        TwoOnLine - два на строку, между - табуляция
        SpaceBetween - через пробел
      во всех режимах в конце новая строка
	*/
	CheckQuestion(unsigned nCases, const std::string &before_, const std::string &after_, PrintModes mode=OneOnLine);
//	Case& operator[](unsigned);//а нужен ли?
	void addCase(const std::string &text,bool answer=DEFAULT_ANSWER, const std::string &delim="");
protected:
    std::vector<Case> cases; //варианты выбора с разделителями и ответами
    unsigned n=0;       //количество заполненных вариантов
    std::string mainText()const;
};
