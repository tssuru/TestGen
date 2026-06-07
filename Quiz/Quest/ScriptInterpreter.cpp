#include "ScriptInterpreter.h"
#include <fstream>
#include <stdexcept>
#include "VarBuilder.h"
//#include <iostream>
using namespace std;

void ScriptInterpreter::doScript(const string &dest, const string &script, const string &workdir){
    VarBuilder vb(*this);
    vb.build(script,workdir);

    if (!vf) throw runtime_error("VariantFabric was not initialized: script is missing a valid <variant> section");
    vf->setFirstNum(from);
    int num=to-from+1;
    if (from2<=to2){
        vf->addGap(to+1, from2);
//        std::cout<<"gaps!"<<endl;
        num+=(to2-from2+1);
  //      std::cout<<num<<" "<<to2<<" "<<from2<<endl;
    }
    ofstream f(dest);
    if (!f) throw runtime_error("Unable open file "+ dest + " for writing!");
    f<<header;
    for (int i=1;i<=num;++i){
        vf->make2file(f);
        //cout<<"1"<<onNextPage<<"1"<<endl;
        //cout<<"2"<<onNextVariant<<"2"<<endl;
        if (i%onPage==0) f<<onNextPage; else f<<onNextVariant;
    }
    f<<footer<<endl;
    f.close();
    if (!f) throw runtime_error("File "+ dest + " was not generated successfully!");
}
