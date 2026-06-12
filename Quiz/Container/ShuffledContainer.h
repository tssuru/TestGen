#pragma once
#include <fstream>
#include "BaseContainer.h"
#include "shuffle.h"
#include <string>

//#include <iostream>
//using namespace std;
using std::to_string;
/* контейнер элементов
выдает элементы контейнера в порядке случайной перестановки
при переходе от последнего элемента к первому производится перемешивание
*/
template <class T> class Container:public BaseContainer<T>{
protected:
	Shuffle sh;
    void initShuffle();
public:
    //using BaseContainer<T>::BaseContainer;
    Container(vector<T> &&source):BaseContainer<T>(move(source)){load2();}
    Container(const vector<T> &source):BaseContainer<T>(source){load2();}
	const T& operator++(int);
    //operator Container<string>() const;

protected:
    void load2();
};

template <class T>
void Container<T>::initShuffle(){sh.init(BaseContainer<T>::size());}

template <class T>
const T& Container<T>::operator++(int){ return BaseContainer<T>::operator[](sh++);}


/*
template <class T> Container<T>::operator Container<string>()const{
   // Container<string> tmp;
   // tmp.load(vector<string>(*this));
    return Container<string>(vector<string>(*this));
}

template <> Container<string>::operator Container<string>()const{
   // Container<string> tmp;
   // tmp.load(vector<string>(*this));
    return *this;
}*/

template <class T>
 void Container<T>::load2(){
    //BaseContainer<T>::load2(std::forward<vector<T>>(source));
   // cout<<"load2"<<endl;
    initShuffle();
}


