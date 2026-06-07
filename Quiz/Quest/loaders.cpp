#include "loaders.h"
#include "strings2.h"
#include "datas.h"

#include<iostream>

using namespace std;
istream& getline(istream& f, string& dest,unsigned n) {
//    std::cout<<"@"<<STANDART.size()<<std::endl;
//    for(auto &i:STANDART) std::cout<<"@"<<i.first<<i.second<<std::endl;
    dest="";
    unsigned i=0;
    string s;
    while (i<n && std::getline(f,s)) {
        s=trim(s);
        if (!s.empty()) {dest+=s+"\n";++i;}
    }
    if (i!=0 && i!=n)
         throw std::runtime_error("The number of non empty lines should divides on "+std::to_string(n));
    if (!dest.empty())
        dest.erase(dest.size()-1);
    dest=substituteT(dest,STANDART);
//    cout<<dest<<endl;
    return f;
}

istream& getline(istream& f, vector<string>& dest,unsigned n) {
//    std::cout<<"="<<STANDART.size()<<std::endl;
//    std::cout<<"=\n";
//    for(auto &i:STANDART) std::cout<<"="<<i.first<<i.second<<std::endl;
    dest.clear();dest.resize(n);
    unsigned i=0;
    string s;
    while (i<n && std::getline(f,s)) {
        s=trim(s);
        if (!s.empty()) dest[i++]=substituteT(s,STANDART);
    }
    if (i!=0 && i!=n){
        throw std::runtime_error("The number of non empty lines should divides on "+std::to_string(n));
    }
    return f;
}
