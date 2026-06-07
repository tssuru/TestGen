#include"ScriptInterpreter.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstring>
#include <cerrno>
#include <climits>
#include <cstdlib>
#include "sources.h"
#include "qfabrics.h"
#include "shuffle.h"

using namespace std;

//генерирует документ в файл dest согласно скрипту script в рабочем каталоге dir
void doDocument(const string &dest,const string &script,const string &workdir);

void testTemplate(const string &dest, const string &fname, const string &workdir, int num);
void testFileAnswer(const string &dest, const string &fname, int num);
void testFileSource(const string &dest, const string &fname, int num);
void help();

int main(int argc, char **argv)  {
unsigned seed = (unsigned)time( NULL );
if (argc==6 && strcmp(argv[4],"-seed")==0){
    char* endptr = nullptr;
    errno = 0;
    long parsed = strtol(argv[5], &endptr, 10);
    if (endptr == argv[5] || *endptr != '\0' || errno != 0 || parsed < 0 || parsed > (long)UINT_MAX){
        cerr << "Invalid seed value: " << argv[5] << endl;
        return 1;
    }
    seed = (unsigned)parsed;
}
srand(seed);
Shuffle::set_global_seed(seed);
try{
    if (argc==4 || (argc==6 && strcmp(argv[4],"-seed")==0))
        doDocument(argv[1],argv[2],argv[3]);
    else if (argc>=5){
        if (strcmp(argv[1],"-template")==0){
            if (argc>=6)
                testTemplate(argv[2],argv[3], argv[4],atoi(argv[5]));
            else
                help();
        } else if (strcmp(argv[1],"-fileanswer")==0){
            testFileAnswer(argv[2],argv[3], atoi(argv[4]));
        } else if (strcmp(argv[1],"-filesource")==0){
           testFileSource(argv[2],argv[3], atoi(argv[4]));
        }
    } else
        help();
}
catch (exception &e){ cerr<<e.what()<<endl; return 1; }
catch (...) { cerr<<"Unknown error"<<endl; return 1; }
#if defined _MSC_VER
    system("pause");
#endif
return 0;
}

void help(){
    cout<<"dest script_file workdir"<<endl;
    cout<<"\t doDocument(dest, script_file, workdir)"<<endl<<endl;
    cout<<"dest script_file workdir -seed N"<<endl;
    cout<<"\t doDocument(dest, script_file, workdir) with deterministic seed"<<endl<<endl;

    cout<<"-template dest fname workdir num"<<endl;
    cout<<"testTemplate(dest, fname, workdir, num)"<<endl<<endl;

     cout<<"-fileanswer dest fname num"<<endl;
    cout<<"testFileAnswer(dest, fname, num)"<<endl<<endl;

     cout<<"-filesource dest fname num"<<endl;
    cout<<"testFileSource(dest, fname, num)"<<endl;

}

void doDocument(const string &dest,const string &script,const string &dir){
    ScriptInterpreter si;
    si.doScript(dest,script,dir);
    cout<<"doDocument done\n";
}

void testFileSource(const string &dest, const string &fname, int num){
    FileSource c(fname);
    ofstream f(dest);
    for (int i=0;i<num;i++){
        f<<c++<<endl;
    }
    cout<<"testFileSource done\n";
}

ostream& operator<<(ostream&f, const vector<string>&d){
for(const auto &i:d) f<<i<<" ";
return f;
}

void testTemplate(const string &dest, const string &fname, const string &dir,  int num){
    TemplateAnswerQuestFabric f1(fname, dir);
    cout<<f1.size()<<endl;
    ofstream f(dest);

    for (int i=0;i<num;i++){
        f1.make2file(f);
        f<<endl<<endl;
    }
    cout<<"test done\n";
}
void testFileAnswer(const string &dest, const string &fname, int num){
    FileAnswerQuestFabric f1(fname);
    cout<<f1.size()<<endl;
    ofstream f(dest);

    for (int i=0;i<num;i++){
        f1.make2file(f);
        f<<endl;
    }
    cout<<"test done\n";
}



