#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
ostream& operator<<(ostream& f, char c){if (c==0) operator<<(f,"X"); else std::operator <<(f,c);return f;}
class L{
public:
    L(int from, int to){for (int i=to; i>=from;--i) push(i);}
    L(const L&)=delete;
    L& operator=(const L&)=delete;
    //~L(){while (head) pop();}
    struct Node{int n;Node *next, *prev;};
    Node *head=nullptr;
    void push(int k){head=new Node{k,head,nullptr}; if (head->next) head->next->prev=head;}
    void pop(){Node *tmp=head; head=head->next; head->prev=nullptr; delete tmp;}
    Node* find(int num){Node*tmp=head; while (tmp && tmp->n!=num) tmp=tmp->next; return tmp;}
};
namespace A2{

namespace B0{
 int z=2;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[3]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<7;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 2"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A3{

namespace B0{
 int z=6;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<4;}
   A(A&&){cout<<0;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 6;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 3"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A4{

namespace B0{
 int z=5;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[5]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<5;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} int relax(){return 3;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 5;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->prev->prev->prev->prev->next->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 4"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A5{

namespace B0{
 int z=1;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[2]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<0;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->next->next->next->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 5"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A6{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<7;}
   //1
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;}};//5
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->next->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 6"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A7{

namespace B0{
 int z=7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<8;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}};//7
   class B:public A{public: int relax(){return 0;}};
   class C:public A{public: int relax(){return 6;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->prev->next->next->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 7"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A8{

namespace B0{
 int z=-4;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<6;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->prev->prev->next->next->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 8"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A9{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<9;}
   //4
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} virtual int relax(){return 2;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->next->next->prev->prev->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 9"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A10{

namespace B0{
 int z=-7;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<8;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}int relax(){return 6;}};
   class B:public A{public: virtual int relax(){return 4;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 10"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A11{

namespace B0{
 int z=-5;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[3]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<1;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} int relax(){return 5;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 11"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A12{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[5]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<3;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->next->next->prev->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 12"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A13{

namespace B0{
 int z=4;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[2]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<2;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->prev->prev->next->prev->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 13"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A14{

namespace B0{
 int z=0;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[5]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<9;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public A{public: int relax(){return 1;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->prev->next->next->prev->prev->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 14"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A15{

namespace B0{
 int z=3;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<5;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;}};//4
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->next->prev->prev->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 15"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A16{

namespace B0{
 int z=-2;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<0;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} int relax(){return 1;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->next->prev->next->prev->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 16"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A17{

namespace B0{
 int z=3;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[4]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<1;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 4;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->prev->next->prev->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 17"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A18{

namespace B0{
 int z=-4;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<5;}
   //9
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public B{public: int relax(){return 6;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->prev->next->prev->prev->next->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 18"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A19{

namespace B0{
 int z=1;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[4]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<6;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->next->prev->next->next->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 19"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A20{

namespace B0{
 int z=0;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[5]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<3;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} int relax(){return 6;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 20"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A21{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<4;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 21"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A22{

namespace B0{
 int z=2;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[5]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<2;}
   A(A&&){cout<<0;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->prev->prev->prev->next->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 22"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A23{

namespace B0{
 int z=6;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[3]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<3;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;}int relax(){return 2;}};
   class B:public A{public: virtual int relax(){return 1;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->next->next->next->prev->next->n<<"  ";
p->next=p->next->next;cout<<p->next->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 23"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A24{

namespace B0{
 int z=7;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<0;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->prev->prev->next->prev->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 24"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A25{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<7;}
   //3
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;}};//0
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->next->prev->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 25"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A26{

namespace B0{
 int z=5;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<7;}
   //3
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<6;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}int relax(){return 2;}};
   class B:public A{public: virtual int relax(){return 4;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->prev->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 26"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A27{

namespace B0{
 int z=-7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<9;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public A{public: int relax(){return 6;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->next->next->next->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 27"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A28{

namespace B0{
 int z=-5;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[5]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<0;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 6;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->next=p->prev->prev;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 28"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A29{

namespace B0{
 int z=4;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<9;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;}};//1
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 29"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A30{

namespace B0{
 int z=-2;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[4]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<6;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public B{public: int relax(){return 2;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->prev->next->next->prev->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 30"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A31{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<7;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->next->prev->prev->next->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 31"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A32{

namespace B0{
 int z=-4;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<4;}
   //9
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 32"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A33{

namespace B0{
 int z=6;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<5;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} int relax(){return 4;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 33"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A34{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<1;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->next->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 34"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A35{

namespace B0{
 int z=7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[5]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<9;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 5;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 35"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A36{

namespace B0{
 int z=-7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[3]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}};//6
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->next->next->next->next->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 36"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A37{

namespace B0{
 int z=5;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<2;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} int relax(){return 3;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->prev->prev->prev->prev->next->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 37"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A38{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} int relax(){return 0;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 38"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A39{

namespace B0{
 int z=3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<0;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} int relax(){return 6;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 39"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A40{

namespace B0{
 int z=1;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<4;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;}};//1
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 5;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->prev->prev->prev->prev->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 40"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A41{

namespace B0{
 int z=-2;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<6;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 2;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->next->next->next->next->prev->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 41"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A42{

namespace B0{
 int z=0;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[5]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<0;}
   //6
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} virtual int relax(){return 4;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->next->next->prev->prev->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 42"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A43{

namespace B0{
 int z=-5;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<1;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}int relax(){return 5;}};
   class B:public A{public: virtual int relax(){return 2;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->prev->prev->next->next->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 43"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A44{

namespace B0{
 int z=4;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<8;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->next->next->prev->prev->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 44"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A45{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[3]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<0;}
   //2
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->prev->prev->next->next->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 45"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A46{

namespace B0{
 int z=2;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[5]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<2;}
   A(A&&){cout<<1;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->next->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 46"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A47{

namespace B0{
 int z=2;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[2]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<0;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->prev->next->next->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 47"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A48{

namespace B0{
 int z=7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[4]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<9;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;}};//0
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->next->next->next->prev->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 48"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A49{

namespace B0{
 int z=-5;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<0;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 1;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->prev->prev->prev->next->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 49"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A50{

namespace B0{
 int z=-4;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<0;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;}};//2
   class B:public A{public: int relax(){return 7;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->prev->next->prev->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 50"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A51{

namespace B0{
 int z=4;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[3]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<3;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;}};//5
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 3;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->prev->next->prev->next->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 51"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A52{

namespace B0{
 int z=3;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[5]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<5;}
   //2
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 2;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->prev->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 52"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A53{

namespace B0{
 int z=6;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[4]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<7;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->next->next->next->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 53"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A54{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[3]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<0;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->next->prev->prev->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 54"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A55{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[5]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<3;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} int relax(){return 7;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public A{public: int relax(){return 4;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->prev->next->next->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 55"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A56{

namespace B0{
 int z=-7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<4;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} virtual int relax(){return 6;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 56"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A57{

namespace B0{
 int z=1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<9;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<6;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;}int relax(){return 3;}};
   class B:public A{public: virtual int relax(){return 5;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 57"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A58{

namespace B0{
 int z=-2;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[3]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<7;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 58"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A59{

namespace B0{
 int z=5;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<0;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 59"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A60{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[4]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<5;}
   //9
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 60"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A61{

namespace B0{
 int z=0;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[5]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<6;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} int relax(){return 5;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->next->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 61"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A62{

namespace B0{
 int z=-5;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[3]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 1;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->prev->next->prev->next->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 62"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A63{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[5]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<5;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->next->prev->next->prev->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 63"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A64{

namespace B0{
 int z=2;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<6;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} int relax(){return 4;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public A{public: int relax(){return 3;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->prev->prev->next->next->prev->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 64"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A65{

namespace B0{
 int z=6;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<8;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} int relax(){return 6;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 5;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->next->next->prev->prev->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 65"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A66{

namespace B0{
 int z=4;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[4]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<2;}
   //4
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 66"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A67{

namespace B0{
 int z=-2;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[3]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<9;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;}};//7
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 5;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 67"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A68{

namespace B0{
 int z=3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<9;}
   //8
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->prev->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 68"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A69{

namespace B0{
 int z=-7;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<6;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 4;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 6;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->next->next->next->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 69"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A70{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[5]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<0;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 2;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->next=p->next->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 70"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A71{

namespace B0{
 int z=-3;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<4;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 6;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 71"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A72{

namespace B0{
 int z=1;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<0;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;}};//6
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 72"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A73{

namespace B0{
 int z=0;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<5;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;}int relax(){return 1;}};
   class B:public A{public: virtual int relax(){return 7;}};
   class C:public B{public: int relax(){return 0;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 73"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A74{

namespace B0{
 int z=5;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<8;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 74"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A75{

namespace B0{
 int z=7;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<9;}
   //3
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 2;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 1;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->next=p->next->prev;cout<<p->next->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 75"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A76{

namespace B0{
 int z=-4;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<3;}
   A(A&&){cout<<0;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<6;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->prev->prev->prev->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 76"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A77{

namespace B0{
 int z=-7;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<5;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->next->next->next->prev->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 77"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A78{

namespace B0{
 int z=4;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[4]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<1;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<6;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;}};//6
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 1;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->prev->prev->prev->next->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 78"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A79{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<5;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;}int relax(){return 2;}};
   class B:public A{public: virtual int relax(){return 5;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->next->next->next->prev->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 79"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A80{

namespace B0{
 int z=-4;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[5]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<0;}
   A(A&&){cout<<7;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<4;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 6;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->next->next->next->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 80"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A81{

namespace B0{
 int z=0;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[3]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<8;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} int relax(){return 1;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->prev->prev->prev->prev->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 81"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A82{

namespace B0{
 int z=7;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[5]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<9;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;}};//2
   class B:public A{public: int relax(){return 7;}};
   class C:public A{public: int relax(){return 1;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->prev->next->prev->next->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 82"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A83{

namespace B0{
 int z=2;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[3]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<5;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 6;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->next->prev->next->prev->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 83"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A84{

namespace B0{
 int z=3;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[2]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<6;}
   //1
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} int relax(){return 7;}};
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 6;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->prev->next->prev->next->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 84"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A85{

namespace B0{
 int z=-5;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[4]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<9;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 0;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->next->prev->next->prev->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 85"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A86{

namespace B0{
 int z=-2;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<2;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;}int relax(){return 6;}};
   class B:public A{public: virtual int relax(){return 7;}};
   class C:public B{public: int relax(){return 2;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 86"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A87{

namespace B0{
 int z=1;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[5]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;}};//1
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 87"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A88{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
  };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[4]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<5;}
   A(A&&){cout<<1;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;}};//5
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 3;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->next->next->prev->next->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 88"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A89{

namespace B0{
 int z=-6;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->prev->prev->next->prev->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 89"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A90{

namespace B0{
 int z=6;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<3;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->next->next->prev->prev->prev->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 90"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A91{

namespace B0{
 int z=5;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[5]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<4;}
   //2
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 6;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 3;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->prev->prev->next->next->next->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 91"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A92{

namespace B0{
 int z=3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<8;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} int relax(){return 0;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 92"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A93{

namespace B0{
 int z=-5;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[4]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<7;}
   //2
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} int relax(){return 4;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public A{public: int relax(){return 3;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 93"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A94{

namespace B0{
 int z=1;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[5]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<7;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} virtual int relax(){return 4;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 5;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->prev->prev->prev->prev->next->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 94"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A95{

namespace B0{
 int z=7;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[4]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<9;}
   A(const A&){cout<<1;}
   A(A&&){cout<<5;}
   A& operator=(const A&){cout<<8;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} virtual int relax(){return 2;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->next->next->next->next->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 95"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A96{

namespace B0{
 int z=4;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<5;}
   A(A&&){cout<<1;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 96"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A97{

namespace B0{
 int z=-1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[2]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<0;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 6;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(1);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 97"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A98{

namespace B0{
 int z=5;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[4]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<5;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<1;return *this;}
   A& operator=(A&&){cout<<6;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 5;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(3);
cout<<"7:"<<p->next->next->prev->next->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 98"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A99{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[3]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<7;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<0;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 0;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 3;}};
   class C:public B{public: int relax(){return 1;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-9);
cout<<"7:"<<p->prev->prev->next->prev->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 99"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A100{

namespace B0{
 int z=-2;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<6;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-2);
cout<<"7:"<<p->next->prev->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 100"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A101{

namespace B0{
 int z=-4;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<1;}
   A(A&&){cout<<0;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; virtual void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;}};//4
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 6;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a2->work()<<((B*)a1)->relax()<<((B*)a0)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-6);
cout<<"7:"<<p->prev->next->next->next->next->n<<"  ";
p->next=p->next->prev;cout<<p->next->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 101"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A102{

namespace B0{
 int z=-7;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<1;}
   A(A&&){cout<<2;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;}int relax(){return 2;}};
   class B:public A{public: virtual int relax(){return 4;}};
   class C:public B{public: int relax(){return 7;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a1->work()<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(2);
cout<<"7:"<<p->next->next->next->prev->prev->n<<"  ";
p->next=p->prev->next;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 102"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A103{

namespace B0{
 int z=2;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<7;}
   //8
   A& operator=(const A&){cout<<9;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 1;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(4);
cout<<"7:"<<p->prev->prev->prev->next->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 103"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A104{

namespace B0{
 int z=0;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<5;}
   A(const A&){cout<<0;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<3;return *this;}
   A& operator=(A&&){cout<<8;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":B is not a base of A";}

namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(0);
cout<<"7:"<<p->next->next->prev->prev->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 104"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A105{

namespace B0{
 int z=6;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[5]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<4;}
   A(A&&){cout<<1;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 3;} int relax(){return 1;}};
   class B:public A{public: int relax(){return 2;}};
   class C:public A{public: int relax(){return 5;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(7);
cout<<"7:"<<p->prev->prev->next->next->next->n<<"  ";
p->next=p->prev->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 105"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A106{

namespace B0{
 int z=-6;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a[4]; B b; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<4;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x; void d(){x/=2;}};
   class B:public A{public: int y; void d(){y/=4;}};
   void test(){B b;b.x=b.y=4;b.d();cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 7;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->next->next->next->next->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 106"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A107{

namespace B0{
 int z=1;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[5]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<8;}
   A(const A&){cout<<9;}
   //1
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; virtual void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} int relax(){return 1;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public A{public: int relax(){return 2;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<a1->relax()<<a2->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(5);
cout<<"7:"<<p->prev->prev->prev->prev->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 107"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A108{

namespace B0{
 int z=-5;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<9;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;}};//0
   class B:public A{public: int relax(){return 3;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a[2]; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(9);
cout<<"7:"<<p->next->next->prev->prev->next->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 108"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A109{

namespace B0{
 int z=6;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[3]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<0;}
   A(A&&){cout<<3;}
   A& operator=(const A&){cout<<4;return *this;}
   A& operator=(A&&){cout<<7;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 4;} virtual int relax(){return 1;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 5;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
void C6(){cout<<6<<":throw will call terminate";}

void C7(){
L li(-16, 16); L::Node *p=li.find(6);
cout<<"7:"<<p->prev->prev->next->next->prev->n<<"  ";
p->next=p->next->next;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 109"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A110{

namespace B0{
 int z=-2;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A(A &&aa){z+=4;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b[3]; A a; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<3;}
   A(const A&){cout<<4;}
   A(A&&){cout<<8;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<9;return *this;}};
   void test(){A a, b(a), c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){d();}};
   class B:public A{public: int y; void d(){y+=2;}};
   void test(){B b; b.x=b.y=4; b.g(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 7;} virtual int relax(){return 2;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->A::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A()noexcept {f(); cout<<"A";} ~A(){cout<<"~A";} void f(){throw 1;}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-5);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->prev->prev;cout<<p->prev->next->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 110"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A111{

namespace B0{
 int z=-3;
   class A{ public: A(){z++;}
   A(const A &aa){z+=2;}
   A& f(){return *this;}
   };
   void test(){ {A a,b(a),c(A().f());} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<7;}
   A(const A&){cout<<5;}
   A(A&&){cout<<1;}
   A& operator=(const A&){cout<<6;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int x; virtual void d(){x+=2;} void g(){A::d();}};
   class B:public A{public: int y; void d(){A::d();}};
   void test(){B b; b.x=b.y=4; b.d(); cout<<b.x<<b.y;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;}};//4
   class B:public A{public: int relax(){return 1;}};
   class C:public A{public: int relax(){return 0;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C()noexcept(false){cout<<"~C";throw 1;}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-8);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->next->prev;cout<<p->next->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 111"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A112{

namespace B0{
 int z=7;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{A a; B b[5]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<2;}
   A(const A&){cout<<8;}
   A(A&&){cout<<6;}
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<0;return *this;}};
   A f(){A a; return a;}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
void C4(){cout<<4<<":invalid conversion from A* to B*";}

namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-4);
cout<<"7:"<<p->prev->prev->prev->prev->prev->n<<"  ";
p->prev=p->next->prev;cout<<p->prev->prev->prev->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 112"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A113{

namespace B0{
 int z=5;
   class A{ public: A(){z++;}
   ~A(){z++;}
   A(const A &aa){z+=4;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{A a; B b[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<1;}
   A(const A&){cout<<4;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<3;return *this;}};
   void test(){A a, b(a), c(move(a));}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public: int v; A(int n):v(n){}};
   class B{public:A a; int b; B(int n):a(n+1){b=a.v;}};
   void test(){ B b(2); cout<<b.b;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 6;} virtual int relax(){return 7;}};
   class B:public A{public: int relax(){return 4;}};
   class C:public B{public: int relax(){return 3;}};
   void test(){ A *a1=new B, *a2=new C;cout<<a2->relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-7);
cout<<"7:"<<p->next->next->next->next->next->n<<"  ";
p->next=p->prev->prev;cout<<p->next->next->next->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 113"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A114{

namespace B0{
 int z=2;
   class A{ public: A(){z--;}
   A(const A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b[3]; A a; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<0;}
   A(const A&){cout<<3;}
   A(A&&){cout<<4;}
   A& operator=(const A&){cout<<5;return *this;}
   A& operator=(A&&){cout<<1;return *this;}};
   A f(){A a; return move(a);}
   void test(){A a, b=a, c; c=f();}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; void d(){x+=1;}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 2;} virtual int relax(){return 3;}};
   class B:public A{public: int relax(){return 0;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A *a1=new B, *a2=new C;cout<<((C*)a2)->B::relax()<<a1->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b[2]; A a; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){}cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-1);
cout<<"7:"<<p->prev->next->next->next->prev->n<<"  ";
p->prev=p->next->next;cout<<p->prev->prev->prev->next->n<<endl;
}
void Main(){cout<<endl<<"Variant: 114"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A115{

namespace B0{
 int z=0;
   class A{ public: A(){z+=2;}
   A(A &aa){z++;}
   ~A(){z--;}
   };
   void test(){ {A a, b(a),c(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: ~A(){cout<<"A";}};
   class B{public: ~B(){cout<<"B";}};
   class C{B b; A a[4]; public: ~C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<6;}
   A(const A&){cout<<9;}
   //8
   A& operator=(const A&){cout<<7;return *this;}
   A& operator=(A&&){cout<<2;return *this;}};
   void test(){A a, b(a), c=move(a); c=move(a);}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=1; void d(){x/=2;}};
   class B:public A{public: int x; void d(){x/=4;}};
   void test(){B b;b.x=4;b.d();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 1;} int relax(){return 6;}};
   class B:public A{public: int relax(){return 5;}};
   class C:public A{public: int relax(){return 7;}};
   void test(){ A *a0=new A, *a1=new B, *a2=new C;cout<<a0->work()<<((B*)a1)->relax()<<((C*)a2)->relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: A(){throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{A a; B b; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(8);
cout<<"7:"<<p->next->prev->prev->prev->next->n<<"  ";
p->next=p->next->next;cout<<p->next->next->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 115"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
namespace A116{

namespace B0{
 int z=-7;
   class A{ public: A(){++z;}
   A(const A &aa){z=3;}
   ~A(){z--;}
   };
   void test(){ {A a,b(a),c,d(b);} cout<<z;}
}
void C0(){ cout<<"0:";B0::test();}
namespace B1{
 class A{public: A(){cout<<"A";}};
   class B{public: B(){cout<<"B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}};
   void test(){C c;}
}
void C1(){ cout<<"1:";B1::test();}
namespace B2{
 class A{public: A(){cout<<4;}
   A(const A&){cout<<0;}
   A(A&&){cout<<9;}
   A& operator=(const A&){cout<<2;return *this;}
   A& operator=(A&&){cout<<5;return *this;}};
   void test(){A a, b=a, c=move(a); c=b;}
}
void C2(){ cout<<"2:";B2::test();}
namespace B3{
 class A{public:int x=0; virtual void d(){x+=1;} virtual void g(){d();}};
   class B:public A{public: int x=0; void d(){x+=2;}};
   void test(){B b;b.x=1;b.g();cout<<b.x<<b.A::x;}
}
void C3(){ cout<<"3:";B3::test();}
namespace B4{
 class A{public: int work(){return 5;} virtual int relax(){return 2;}};
   class B:public A{public: int relax(){return 6;}};
   class C:public B{public: int relax(){return 4;}};
   void test(){ A a; B b; C c; cout<<((B&)c).relax()<<c.B::relax();}
}
void C4(){ cout<<"4:";B4::test();}
namespace B6{
 class A{public: static int n; A(){++n; if(n>1) throw 1;cout<<"A";} ~A(){cout<<"~A";}};
   int A::n=0;
   class B{public: B(){cout<<"B";} ~B(){cout<<"~B";}};
   class C{B b; A a[2]; public: C(){cout<<"C";}~C(){cout<<"~C";}};
   void test(){try{C c;} catch(...){} cout<<".";}
}
void C6(){ cout<<"6:";B6::test();}
void C7(){
L li(-16, 16); L::Node *p=li.find(-3);
cout<<"7:"<<p->prev->next->prev->prev->next->n<<"  ";
p->prev=p->prev->next;cout<<p->prev->prev->next->prev->n<<endl;
}
void Main(){cout<<endl<<"Variant: 116"<<endl;C0();cout<<endl;C1();cout<<endl;C2();cout<<endl;C3();cout<<endl;C4();cout<<endl;C6();cout<<endl;
C7();cout<<endl;}
}
int main(){
A2::Main();
A12::Main();
A22::Main();
A32::Main();
A42::Main();
A52::Main();
A62::Main();
A72::Main();
A82::Main();
A92::Main();
A102::Main();
A112::Main();
system("pause");
 return 0;}