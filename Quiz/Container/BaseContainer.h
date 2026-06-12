#pragma once
#include <string>
#include <vector>
#include <ios>
#include <fstream>

using std::ostream;
using std::string;
using std::vector;
using std::out_of_range;
using std::ios_base;
/* контейнер элементов
с постфиксной операцией ++(взять очередной элемент и перейти к следующему)
следующим после последнего элемента будет первый,
т.е. операция зациклена
*/
template <class T> class BaseContainer:public vector<T>{
protected:

	unsigned last=0; // index of elem for output
	template <class T1> BaseContainer(T1 &&source, int):vectorT(std::forward<T1>(source)){}
public:
    using vectorT=vector<T>;
    BaseContainer()=default;
    virtual ~BaseContainer()=default;
    BaseContainer(vector<T> &&source):BaseContainer(std::move(source),1){}
    BaseContainer(const vector<T> &source):BaseContainer(source,1){}
    unsigned size() const noexcept{ return vectorT::size();}
    bool empty() const noexcept{ return vectorT::empty();}
    void clear(){ vectorT::clear(); last=0;}
	const T& operator[](unsigned k) const;// throw if not exist
	T& operator[](unsigned k) {return vectorT::operator[](k);}
virtual	const T& operator++(int);
	auto begin() const {return vector<T>::begin();}
	auto end() const {return vector<T>::end();}
	operator vector<string>()const;

//protected:
//    template<class T1> void load2(T1&& source);
};

template <class T>
const T& BaseContainer<T>::operator[](unsigned k) const{
    if (k<0 || k>=vectorT::size()) throw out_of_range("BaseContainer: there are no element with index "+std::to_string(k));
	return vectorT::operator[](k);
}

template <class T>
const T& BaseContainer<T>::operator++(int){
   	if (vectorT::empty()) throw out_of_range("BaseContainer is empty");
   	const T& res=operator[](last);
	++last; if (last==vectorT::size()) last=0;
	return res;
}



//string to_string(const string &s);



template <class T> BaseContainer<T>::operator vector<string>()const{
    vector<string> dest;
    for (const auto& el: *this)
        dest.push_back(to_string(el));
 //   for (unsigned i=0; i<BaseContainer<T>::size();++i)
 //       dest.push_back(to_string((*this)[i]));
    return dest;
}

template <class T> std::ostream& operator<<(std::ostream& f, const vector<T>& c){
    for (const auto &el: c) f<<el<<" ";
    f<<std::endl;
    return f;
}

template <class T> void write(const string &fname,const vector<T>& c){
	std::ofstream f(fname);
	if (!f) throw ios_base::failure("Unable to open file "+fname);
	if (!(f<<c)) throw ios_base::failure("Unable to write to file "+fname);
	f.close();
    if (!f) throw ios_base::failure("Unable to end writing to file "+fname);
}



