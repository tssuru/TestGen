#include "composer.h"
#include <iostream>
#include <fstream>
#include "strings.h"
#include <map>
using namespace std;

void specific_mod1_5(std::ostream &f, const Variant&v, int item);
void specific_mod2_4(Variant&v, int item);
void specific_mod4_78(std::ostream &f, const Variant&v,int item);
string specific_mod4_9(const Variant&v,int item);

map<pair<int,int>,string> err={
{{3,6},"throw will call terminate"},
{{5,4},"B is not a base of A"},
{{10,5},"delete [5]"},
{{11,5},"delete [4]"},
{{12,4},"invalid conversion from A* to B*"},
{{13,5},"no matching function for call to A::A()"},
{{14,6},"throw will call terminate"},
{{16,5},"no matching function for call to A::A()"},
{{17,5},"delete int"},
{{18,5},"delete [4]"},
{{22,4},"B is not a base of A"},
{{23,6},"throw will call terminate"},
{{24,4},"invalid conversion from A* to B*"},
{{24,5},"delete [5]"},
{{26,5},"delete int"},
{{30,5},"delete [2]"},
{{32,4},"B is not a base of A"},
{{32,5},"delete [7]"},
{{34,4},"invalid conversion from A* to B*"},
{{34,6},"throw will call terminate"},
{{38,6},"throw will call terminate"},
{{40,5},"no matching function for call to A::A()"},
{{42,5},"delete int"},
{{44,4},"B is not a base of A"},
{{45,4},"invalid conversion from A* to B*"},
{{47,5},"delete [2]"},
{{53,4},"B is not a base of A"},
{{53,6},"throw will call terminate"},
{{57,6},"throw will call terminate"},
{{58,5},"no matching function for call to A::A()"},
{{59,4},"invalid conversion from A* to B*"},
{{60,5},"delete [4]"},
{{63,4},"invalid conversion from A* to B*"},
{{65,6},"throw will call terminate"},
{{66,4},"B is not a base of A"},
{{68,5},"delete int"},
{{74,4},"B is not a base of A"},
{{75,6},"throw will call terminate"},
{{77,4},"invalid conversion from A* to B*"},
{{77,5},"delete [7]"},
{{79,5},"no matching function for call to A::A()"},
{{80,5},"delete [3]"},
{{84,5},"delete int"},
{{89,4},"B is not a base of A"},
{{90,5},"no matching function for call to A::A()"},
{{90,6},"throw will call terminate"},
{{93,5},"delete int"},
{{95,6},"throw will call terminate"},
{{96,4},"invalid conversion from A* to B*"},
{{96,5},"delete [2]"},
{{100,4},"invalid conversion from A* to B*"},
{{100,5},"delete [7]"},
{{102,5},"no matching function for call to A::A()"},
{{104,4},"B is not a base of A"},
{{106,5},"delete [3]"},
{{108,5},"delete [6]"},
{{109,5},"delete [4]"},
{{109,6},"throw will call terminate"},
{{112,4},"invalid conversion from A* to B*"},
{{115,5},"delete int"},

{{2,6},"throw will call terminate"},
{{2,5},"dereference twice"},
{{12,5},"dereference after delete"},
{{14,5},"trash"},
{{52,5},"dereference after delete"},
{{62,5},"delete twice"},
{{72,6},"terminate throw"},
{{102,6},"B terminate throw"},
{{18,6},"B terminate throw"},
{{20,6},"B terminate throw"},
{{35,6},"B terminate throw"},
{{46,6},"B terminate throw"},
{{54,6},"B terminate throw"},
{{60,6},"B terminate throw"},
{{76,6},"B terminate throw"},
{{84,6},"B terminate throw"},
{{96,6},"B terminate throw"},
{{110,6},"B terminate throw"}

//{{17,5},"delete int"},
};

void printMain(std::ostream &f,int n){
    f<<"int main(){"<<endl;
    for(int i=1;i<=n;++i){
        f<<"A"<<i<<"::Main();"<<endl;
    }
    f<<"return 0;}";
}

void standartHeader(ostream&f){
    f<<"#include <iostream>\n#include <sstream>\n#include <fstream>\nusing namespace std;"<<endl;
    f<<"ostream& operator<<(ostream& f, char c){\
if (c==0) operator<<(f,\"X\"); else std::operator <<(f,c);return f;}"<<endl;
//    f<<"ofstream cout(\"2018_mod1_check.txt\");"<<endl;
}
void mod4Header(std::ostream &f){
    f<<
"class L{\n\
public:\n\
    L(int from, int to){for (int i=to; i>=from;--i) push(i);}\n\
    L(const L&)=delete;\n\
    L& operator=(const L&)=delete;\n\
    //~L(){while (head) pop();}\n\
    struct Node{int n;Node *next, *prev;};\n\
    Node *head=nullptr;\n\
    void push(int k){head=new Node{k,head,nullptr}; if (head->next) head->next->prev=head;}\n\
    void pop(){Node *tmp=head; head=head->next; head->prev=nullptr; delete tmp;}\n\
    Node* find(int num){Node*tmp=head; while (tmp && tmp->n!=num) tmp=tmp->next; return tmp;}\n\
};\n";
}
void printVariant1(std::ostream &f,const Variant&v,int num){
    begin(f,num);
    specific_mod1_5(f, v,4);
    simpleLine(f,v,6);
    simpleLine(f,v,7);
    complexLine(f,v,8,"main");

    f<<"void Main(){cout<<endl<<\"Variant: "<<num<<"\"<<endl;C5();C7();C8();C9();}"<<endl;
    end(f);
}


void specific_mod2_4(Variant&v, int item){
    string &s=v[item-1][(v[item-1]).size()-1];
    size_t i=s.size()-1;
    while (s[i]!=';') --i;
    ++i;
    s.erase(i);
}
void printVariant2(std::ostream &f, Variant&v,int num){
    begin(f,num);
    specific_mod2_4(v,4);
    for(int i=1;i<7;++i) simpleLine(f,v,i);
    complexLine(f,v,7,"main");
    f<<"void Main(){cout<<endl<<\"Variant: "<<num<<"\"<<endl;C2();C3();C4();C5();C6();C7();C8();cout<<endl;}"<<endl;
    end(f);
    f.flush();
}

void printVariant4(std::ostream &f, Variant&v,int num){
    begin(f,num);
    string s;
    for(int i=0;i<7;++i) {
            if (i==5) continue;
        if (err.find({num,i})!=err.end())
            f<<"\nvoid C"<<i<<"(){cout<<"<<i<<"<<\":"<<err[{num,i}]<<"\";}\n";
        else
            complexLine(f,v,i,"test",0);
        s+="C"+to_string(i)+"();cout<<endl;";
    }
    specific_mod4_78(f,v,7); s+="\nC7();";
    f<<"void Main(){cout<<endl<<\"Variant: "<<num
    <<" "<<specific_mod4_9(v,9)
    <<"\"<<endl;"+s+"cout<<endl;}"<<endl;
    end(f);
    f.flush();
}

void printMain_mod4(std::ostream &f,int n){
    f<<"int main(){"<<endl;

    for(int k=2;k<12;++k)
    for(int i=k;i<=116;i+=10){
    //for(int i=2;i<=116;i+=1){
    //        if (i%10!=2) continue;
        f<<"A"<<i<<"::Main();"<<endl;
    }
    f<<"system(\"pause\");\n return 0;}";
}

void printPass(std::ostream &f, const Variant&v,int num){
    begin(f,num);
    specific_mod1_5(f, v,1);
    simpleLine(f,v,2);
    simpleLine(f,v,3);
    complexLine(f,v,4,"main");
    for(int i=5;i<10;++i) simpleLine(f,v,i);
    f<<"void Main(){cout<<endl<<\"Variant: "<<num<<"\"<<endl;C2();C3();C4();C5();C6();C7();C8();C9();C10();}"<<endl;
    end(f);
}

void begin(std::ostream &f, int num){
    f<<"namespace A"<<num<<"{"<<endl;
}
void end(std::ostream &f){
    f<<"}"<<endl;
}
void simpleLine(std::ostream &f, const Variant&v, int item, int nfirst){
    f<<"void C"<<item+nfirst<<"(){ cout<<\""<<item+nfirst<<":\";";
    f<<v[item];
    f<<"cout<<endl;";
    f<<"}"<<endl;
}
void complexLine(std::ostream &f, const Variant&v, int item,const string &main, int nfirst){
    f<<"\nnamespace B"<<item+nfirst<<"{"<<endl;
    f<<v[item];
    f<<"}"<<endl;
    f<<"void C"<<item+nfirst<<"(){ cout<<\""<<item+nfirst<<":\";";
    f<<"B"<<item+nfirst<<"::"<<main<<"();}";
}

/*
 Коли за виконання коду int a=1,b=2; cout<<f(a,b); cout<<a<<b; буде виведено 314
(_) int f(int a, int &b){ b+=2; return a+b;}
(_) int f(int a, int b){ int t; t=a+b; b=b+2; return t;}
(_) int f(int a, int &b){ int t=a+b; b+=2; return t;}
(_) int f(int &a, int &b){ return a+b; b+=2;}

*/
void specific_mod1_5(std::ostream &f, const Variant&v, int item){
    //--item;
    auto i=v[item][0].find("буде");
    auto j=v[item][0].find_last_of(" ");
    string s1=v[item][0].substr(24,i-24),s2=v[item][0].substr(j);
    s1=trim(s1); decltype(i) ii=0; while ((ii=s1.find("cout",ii+1))!=string::npos) s1[ii]='f';
    s1="void g(ostream &fout){"+s1+"}";
    s2=trim(s2);
    for( int k=1; k<=4;++k){
        f<<"\nnamespace B"<<item+1<<k<<"{"<<endl;
        f<<v[item][k].substr(4)<<endl;//f function
        f<<s1<<endl;//g function which calls f
        f<<"void h(){ostringstream foo; g(foo); if(foo.str()==\""<<s2<<"\") cout<<\"+\"; else cout<<\"x\";}";
        f<<"}"<<endl;
    }
    f<<"void C"<<item+1<<"(){cout<<\""<<item+1<<":\"; B"<<item+1<<"1::h();B"<<item+1<<"2::h();B"<<item+1<<"3::h();B"
                      <<item+1<<"4::h();cout<<endl;}"<<endl;
}

void specific_mod4_78(std::ostream &f, const Variant&v,int item){
    //cout<<v[item][1]<<endl;
    auto i=v[item][1].find_last_of(".");
    auto j=v[item][1].find_last_of(" ", i);
    string s1=v[item][1].substr(j+1,i-j-1);
    //cout<<"["+s1+"]"<<endl;
    //int num=atoi(s1.c_str());
    string s2=v[item][2].substr(23);
    //cout<<"["+s2+"]"<<endl;
    s2.erase(s2.size()-2);
    //cout<<"["+s2+"]"<<endl;
    ++item;
    string s3=v[item][0].substr(43);
    //cout<<"["+s3+"]"<<endl;
    string s4=v[item][1].substr(23);
    //cout<<"["+s4+"]"<<endl;
    s4.erase(s4.size()-2);
    //cout<<"["+s4+"]"<<endl;
    f<<"\nvoid C"<<(item-1)<<"(){\n\
L li(-16, 16); L::Node *p=li.find("<<s1<<");\n\
cout<<\"7:\"<<"+s2+"<<\"  \";\n"+s3+"cout<<"+s4+"<<endl;\n}"<<endl;
}

string specific_mod4_9(const Variant&v,int item){
    string sam[6]={"+"s,"*"s,"&&"s,"||"s,"/"s,"%"s};
    string res="A";
    int i;
    for (i=0;i<6 && (v[item][5].find(sam[i])==string::npos);++i);
    if (i<6) res[0]+=i; else res="X";
    return res;
}

///Python
void standartHeaderPy(ostream&f){
    f<<"#Build key to mkr. Python."<<endl;
    f<<"import testpatch"<<endl;
}

void simpleLinePy(std::ostream &f, const Variant&v, int item, int nfirst){
    f<<"print("<<item+nfirst<<", end=\": \")"<<endl;
    f<<"try:"<<endl;
    f<<string(4,' ')<<"res="<<v[item];
    f<<string(4,' ')<<"print(type(res).__name__, res, sep=\" : \")"<<endl;
    f<<"except BaseException as e: print('ERROR')"<<endl<<endl;
}

void complexLinePy(std::ostream &f, const Variant&v, int item,int nfirst){
    isolatePy(f);
    f<<"print("<<item+nfirst<<", end=\": \"); "<<endl;
    f<<"try:"<<endl;
    for (const auto&i :v[item])
        f<<string(4,' ')<<i<<endl;
    //f<<v[item]<<endl;
    f<<"except BaseException as e: print('ERROR')"<<endl;
    f<<endl<<endl;
}

void beginPy(std::ostream &f, int num){
    f<<"print('Var"<<num<<"')"<<endl;
/*    f<<"a=b=c=d=e=f=g=h=1"<<endl;
    for(char c='a';c<='h';++c)
        f<<"del "<<c<<endl;*/
    //f<<"del a;del b; del c; del d; del e; del f; del g; del h"<<endl;
    //f<<"try: del a;del b; del c; del d; del e; del f; del g; del h"<<endl;
    //f<<"except: pass"<<endl;
}

void isolatePy(std::ostream &f){
    for(char c='a';c<='z';++c)
        f<<c<<'=';
    f<<'1'<<endl;
    f<<"del ";
    for(char c='a';c<'z';++c)
        f<<c<<',';
    f<<"z"<<endl;
}

void endPy(std::ostream &f){
    f<<"print();#print()\n# end of variant"<<endl<<endl;
}

void printVariant1Py(std::ostream &f,const Variant&v,int num){
    int i;
    beginPy(f,num);
    for(i=1;i<6;++i) simpleLinePy(f,v,i);
    for(;i<12;++i) complexLinePy(f,v,i);
    endPy(f);
}

void printVariant2Py(std::ostream &f,const Variant&v,int num){
    int i;
    beginPy(f,num);
//    for(i=1;i<6;++i) simpleLinePy(f,v,i);
    for(i=0;i<7;++i) complexLinePy(f,v,i);
    endPy(f);
}
void printPassPy(std::ostream &f,const Variant&v,int num){
    int i;
    beginPy(f,num);
    simpleLinePy(f,v,0);
    for(i=1;i<6;++i) {
        complexLinePy(f,v,i);
        if (i==3)
            f<<"print()"<<endl;
    }
    endPy(f);
}
