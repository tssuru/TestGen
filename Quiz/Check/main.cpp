#include <iostream>
#include "Parser.h"
#include "composer.h"
using namespace std;

void main_2018_mod1();//mod 1 2018 1 semestr
void main_2018_mod2();//mod 2 2018 1 semestr
void main_2018_mod4();//mod 4 2018/19 2 semestr
void pass2018();//pass 2018
void main_2019_mod1();//mod 1 2019 1 semestr
void main_2019_mod2();//mod 2 2019 1 semestr
void pass2019();//pass 2019
void pass2019_re();//pass 2019

int main(){
/*main_2019_mod2();
system("pause");
    return 0;*/

try{
    system("chcp 1251");

    Params p1{"12.2019", 31, "NEWPAGE",8,
                                           {2,0,0,0,0,  0,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {0,1,1,1,1,  0,0,0}, 2,1};
    //Parser pars("..\\Scripts\\Pass2018\\pass.txt",p1);
    Parser pars("F:\\Projects\\Quiz\\Scripts\\Pass2019_Re\\res.txt",p1, true);
    int N=24;
    ofstream foo("mod.py");
    //ostream &foo=cout;
    //ofstream foo("..\\Mod\\mod.cpp");
    standartHeaderPy(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
        printPassPy(foo,pars.variant, pars.npp);
        //cout<<pars.variant<<endl;
    }
}
catch (const exception &e){cout<<e.what()<<endl;}
    system("pause");
    return 0;
}

void pass2018(){

    Params p1{"12.2018", 24, "NEWPAGE",12, {2,6,1,1,6,   1,2,1,1,2, 1,1},
                                           {0,1,1,1,1,   1,1,1,1,1, 0,0},
                                           {0,1,1,1,1,   1,1,1,1,1, 0,0},
                                           {0,0,1,1,1,   1,1,1,1,1, 0,0},2 };
    Parser pars("..\\Scripts\\Pass2018\\pass.txt",p1);
    int N=500;
    ofstream foo("mod.cpp");
    standartHeader(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<endl;
        printPass(foo,pars.variant, pars.num);
        //cout<<pars.variant<<endl;
    }
    printMain(foo,N);
}

void main_2018_mod1(){
    Params p1{"01.11.2018", 26, "NEWPAGE",9, {2,1,2,1,5,1,2,2,8},
                                             {0,0,0,0,1,0,1,1,1},
                                             {0,0,0,0,1,0,0,0,0},
                                             {1,1,1,1,1,1,1,1,1}};
    Parser pars("..\\Scripts\\Mod2018_1\\2018_mod1bis.txt",p1);
    int N=64;
    ofstream foo("mod.cpp");
    standartHeader(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<endl;
        printVariant1(foo,pars.variant, pars.num);
        //cout<<pars.variant<<endl;
    }
    printMain(foo,N);

}

void main_2018_mod2(){
    Params p1{"29.11.2018", 26, "NEWPAGE",10,{2,1,2,1,1,1,2,3,1,2},
                                             {0,1,1,1,1,1,1,1,0,0},
                                             {0,1,1,1,1,1,1,1,0,0},
                                             {0,1,1,1,1,1,1,0,0,0}};
    Parser pars("..\\Scripts\\Mod2018_2\\2018_mod2.txt",p1);
    int N=120;
    ofstream foo("mod.cpp");
    standartHeader(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<endl;
        printVariant2(foo,pars.variant, pars.num);
        //cout<<pars.variant<<endl;
    }
    printMain(foo,N);
}

void main_2018_mod4(){
try{
    Params p1{"22.05.2019", 25, "NEWPAGE",10, {0,4,0,3,4,   0,0,3,2,0},
                                           {1,1,1,1,1,   1,1,1,1,1},
                                           {1,1,1,1,1,   1,1,1,1,1},
                                           {1,1,1,1,1,   1,1,1,1,1},1,0 };
    //Parser pars("..\\Scripts\\Pass2018\\pass.txt",p1);
    Parser pars("mod04.txt",p1);
    int N=115;
    ofstream foo("mod.cpp");
    //ofstream foo("..\\Mod\\mod.cpp");
    standartHeader(foo);
    mod4Header(foo);
    //int k=6;     int mi=20, ma=0;
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
      /*  if (pars.variant[k].size()<mi)
            mi=pars.variant[k].size();
        else if (pars.variant[k].size()>ma)
            ma=pars.variant[k].size();*/
        printVariant4(foo,pars.variant, pars.npp+1);
        //cout<<pars.variant<<endl;
    }
    //cout<<mi<<" : "<<ma<<endl;
    printMain_mod4(foo,N);
}
catch (const exception &e){cout<<e.what()<<endl;}
    system("pause");
}

void main_2019_mod1(){
try{
    Params p1{"31.10.2019", 25, "NEWPAGE",13,
                                           {-2,-1,0,1,1,  2,0,0,0,0, 0,0,0},
                                           {0,1,1,1,1,   1,1,1,1,1, 1,1,0},
                                           {0,1,1,1,1,   1,1,1,1,1, 1,1,0},
                                           {0,1,1,1,1,   0,1,1,1,1, 1,1,0}, 1,1};
    //Parser pars("..\\Scripts\\Pass2018\\pass.txt",p1);
    Parser pars("mod1.txt",p1, true);
    int N=130;
    ofstream foo("mod.py");
    //ostream &foo=cout;
    //ofstream foo("..\\Mod\\mod.cpp");
    standartHeaderPy(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
        printVariant1Py(foo,pars.variant, pars.npp);
        //cout<<pars.variant<<endl;
    }
}
catch (const exception &e){cout<<e.what()<<endl;}

}
void main_2019_mod2(){
try{


    Params p1{"28.11.2019", 25, "NEWPAGE",10,
                                           {0,0,0,1,1,  1,1,0,0,0},
                                           {1,1,1,1,1,  1,1,0,0,0},
                                           {1,1,1,1,1,  1,1,0,0,0},
                                           {1,1,1,1,1,  0,0,0,0,0}, 2,1};
    Parser pars("mod2.txt",p1, true);
    int N=130;
    ofstream foo("mod2.py");
    //ostream &foo=cout;
    //ofstream foo("..\\Mod\\mod.cpp");
    standartHeaderPy(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
        printVariant2Py(foo,pars.variant, pars.npp);
        //cout<<pars.variant<<endl;
    }
}
catch (const exception &e){
    cout<<e.what()<<endl;
}

}
void pass2019(){
    Params p1{"12.2019", 23, " NEWPAGE",8,
                                           {2,0,0,0,0,  0,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {0,1,1,1,1,  1,0,0}, 2,1};
    //Parser pars("..\\Scripts\\Pass2018\\pass.txt",p1);
    Parser pars("res.txt",p1, true);
    int N=130;
    ofstream foo("mod.py");
    //ostream &foo=cout;
    //ofstream foo("..\\Mod\\mod.cpp");
    standartHeaderPy(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
        printPassPy(foo,pars.variant, pars.npp);
        //cout<<pars.variant<<endl;
    }
}

void pass2019_re(){
    Params p1{"12.2019", 31, "NEWPAGE",8,
                                           {2,0,0,0,0,  0,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {1,1,1,1,1,  1,0,0},
                                           {0,1,1,1,1,  0,0,0}, 2,1};
    Parser pars("F:\\Projects\\Quiz\\Scripts\\Pass2019_Re\\res.txt",p1, true);
    int N=24;
    ofstream foo("mod.py");
    standartHeaderPy(foo);
    while (pars.num<=N && pars.readVariant()){
        cout<<pars.num<<":"<<pars.npp<<endl;
        printPassPy(foo,pars.variant, pars.npp);
    }

}
