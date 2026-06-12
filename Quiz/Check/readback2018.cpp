#include <iostream>
#include <fstream>
#include <string>
#include "helpful.h"
#include "helpful.h"

using namespace std;

void printvar(ofstream&f, string &sVar, string &s, string &sf, string &smain);

void readback2018_01(){
ifstream f("2018_mod1.txt");
ofstream fo("mod.cpp");
fo<<"//#include <iostream>\n#include <fstream>\nusing namespace std;\n\
ofstream cout(\"2018_mod1_check.txt\");\n";
fo<<"ostream& operator<<(ostream& f, char c){\
if (c==0) operator<<(f,\"X\"); else std::operator <<(f,c);return f;}\n";

string date="01.11.2018";
int nVar=120;

string sVar;
int state=0;

string tmp;
string s="", sf,smain;
int nline=0;

while (state>=0 && getline(f,tmp) ) {
	++nline;
	if (state==0) {
		if (isHeader(tmp,date)) {
			state=1;nline=1;
			sVar=findNumVar(tmp);
			if (sVar=="") state=-1;
		}
	} else if (state==1) {
		if (nline==4) s="{ cout<<\"2:\";" + tmp.substr(2)+"}; cout<<endl;\n";
		else if (nline==5) s+="{ cout<<\"3:\";" + tmp.substr(2);
		else if (nline==6) s+=tmp.substr(2) +"};cout<<endl; \n";
		else if (nline==9) s+="{ cout<<\"5:\";" + tmp.substr(2)+"}; cout<<endl;\n";
		else if (nline==10) s+="{ cout<<\"6:\";" + tmp.substr(2)+"}; cout<<endl;\n";
		else if (nline==11) s+="{ cout<<\"7:\";" + tmp.substr(2);
		else if (nline==12) s+=tmp.substr(2) +"};cout<<endl; \n";
		else if (nline==13) {sf=tmp.substr(2); }
		else if (nline==14) {smain=tmp; printvar(fo,sVar,s,sf,smain); state=0;}
	}
}

fo<<"int main(){\n ";
for (int i=1;i<=nVar;++i) {
    fo<<"A"<<to_string(i)<<"::main(); ";
    if (i%8==0) fo<<"cout<<\"ENDL\";\n"; else fo<<"cout<<endl<<endl;\n";
}
fo<< "return 0;}";
fo.close();
}

void printvar(ofstream &f, string &sVar, string &s, string &sf, string &smain){
	f<<"namespace A"<<sVar<<"{"<<endl;
	f<<"void B(){\ncout<<" + doublequote("nVariant "+ sVar)+ "<<endl;"<<s<<"}"<<endl;
	f<<sf<<endl;
	smain.insert(15,"B(); cout<<\"8: \";\n");
	f<<smain<<"\n}"<<endl;
//			s+="main"+sVar+"();\n";
}
