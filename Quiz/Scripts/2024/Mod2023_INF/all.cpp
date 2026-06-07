    #include <iostream>
    using namespace std;    
    
namespace A1_1{
int z=-3;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A1_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A1_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<6;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A1_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A1_5{
struct A{
  int work(){return 1;}
  int relax(){return 6;}};
struct B:public A{virtual int relax(){return 5;}};
struct C:public B{int relax(){return 2;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A1_6{
void test(){cout<<"undefined behaviour";}
}

namespace A1_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A1_8{
void test(){cout<<"4";}
}

namespace A2_1{
int z=-5;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A2_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A2_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<1;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A2_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A2_5{
void test(){cout<<"syntax";}
}

namespace A2_6{
class A{};
void test(){
  A *a=new A[6]; 
  delete [] a; cout<<"=";}
}

namespace A2_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A2_8{
void test(){cout<<"-2";}
}

namespace A3_1{
int z=-6;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A3_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A3_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<2;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A3_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A3_5{
struct A{
  int work(){return 3;}
  int relax(){return 0;}};
struct B:public A{int relax(){return 6;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A3_6{
class X{};
class Y:public X{};
class Z:public X{};
void test(){
  X x; Z z; x=z;
  cout<<(&x==&z);}
}

namespace A3_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A3_8{
void test(){cout<<"4";}
}

namespace A4_1{
int z=5;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A4_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A4_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<0;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A4_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A4_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 1;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A4_6{
void test(){cout<<"undefined behaviour";}
}

namespace A4_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A4_8{
void test(){cout<<"10";}
}

namespace A5_1{
int z=-7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A5_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[2]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A5_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<4;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A5_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A5_5{
void test(){cout<<"syntax";}
}

namespace A5_6{
void test(){cout<<"syntax";}
}

namespace A5_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A5_8{
void test(){cout<<"3";}
}

namespace A6_1{
int z=4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A6_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[4]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A6_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<1;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A6_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A6_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 0;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A6_6{
void test(){cout<<"undefined behaviour";}
}

namespace A6_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A6_8{
void test(){cout<<"-1";}
}

namespace A7_1{
int z=1;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A7_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A7_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<8;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A7_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A7_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 3;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A7_6{
void test(){cout<<"syntax";}
}

namespace A7_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A7_8{
void test(){cout<<"-11";}
}

namespace A8_1{
int z=2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A8_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A8_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<2;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A8_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A8_5{
struct A{
  int work(){return 5;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 6;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A8_6{
void test(){cout<<"syntax";}
}

namespace A8_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A8_8{
void test(){cout<<"11";}
}

namespace A9_1{
int z=-2;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A9_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[4]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A9_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<2;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A9_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A9_5{
struct A{
  int work(){return 3;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 7;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A9_6{
void test(){cout<<"undefined behaviour";}
}

namespace A9_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A9_8{
void test(){cout<<"-12";}
}

namespace A10_1{
int z=6;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A10_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A10_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<6;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A10_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A10_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A10_6{
class A{};
void test(){
  A *a=new A[5]; 
  delete [] a; cout<<"=";}
}

namespace A10_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A10_8{
void test(){cout<<"10";}
}

namespace A11_1{
int z=-1;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A11_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A11_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<7;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A11_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A11_5{
struct A{
  int work(){return 1;}
  int relax(){return 2;}};
struct B:public A{int relax(){return 6;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A11_6{
class X{};
class Y:public X{};
class Z:public X{};
void test(){
  X *x=new X; Z *z=new Z;
  x=z; cout<<(x==z);}
}

namespace A11_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A11_8{
void test(){cout<<"-6";}
}

namespace A12_1{
int z=-4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A12_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A12_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<6;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A12_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A12_5{
struct A{
  int work(){return 5;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A12_6{
void test(){cout<<"syntax";}
}

namespace A12_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A12_8{
void test(){cout<<"-6";}
}

namespace A13_1{
int z=7;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A13_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A13_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<5;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A13_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A13_5{
struct A{
  int work(){return 3;}
  int relax(){return 2;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A13_6{
void test(){cout<<"undefined behaviour";}
}

namespace A13_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A13_8{
void test(){cout<<"-4";}
}

namespace A14_1{
int z=3;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A14_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A14_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<7;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A14_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A14_5{
void test(){cout<<"syntax";}
}

namespace A14_6{
void test(){cout<<"undefined behaviour";}
}

namespace A14_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A14_8{
void test(){cout<<"5";}
}

namespace A15_1{
int z=0;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A15_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A15_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<9;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A15_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A15_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 1;}};
struct C:public B{int relax(){return 6;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A15_6{
void test(){cout<<"undefined behaviour";}
}

namespace A15_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A15_8{
void test(){cout<<"-5";}
}

namespace A16_1{
int z=-3;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A16_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A16_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<6;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A16_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A16_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A16_6{
void test(){cout<<"syntax";}
}

namespace A16_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A16_8{
void test(){cout<<"1";}
}

namespace A17_1{
int z=5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A17_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A17_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<0;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A17_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A17_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A17_6{
void test(){cout<<"undefined behaviour";}
}

namespace A17_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A17_8{
void test(){cout<<"-1";}
}

namespace A18_1{
int z=-4;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A18_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A18_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<1;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A18_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A18_5{
struct A{
  int work(){return 3;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 1;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A18_6{
void test(){cout<<"syntax";}
}

namespace A18_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A18_8{
void test(){cout<<"2";}
}

namespace A19_1{
int z=-5;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A19_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A19_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<3;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A19_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A19_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A19_6{
void test(){cout<<"syntax";}
}

namespace A19_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A19_8{
void test(){cout<<"-7";}
}

namespace A20_1{
int z=4;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A20_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A20_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<0;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A20_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A20_5{
struct A{
  int work(){return 6;}
  int relax(){return 7;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A20_6{
void test(){cout<<"syntax";}
}

namespace A20_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A20_8{
void test(){cout<<"1";}
}

namespace A21_1{
int z=2;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A21_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A21_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<6;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A21_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A21_5{
struct A{
  int work(){return 4;}
  int relax(){return 2;}};
struct B:public A{virtual int relax(){return 0;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A21_6{
void test(){cout<<"syntax";}
}

namespace A21_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A21_8{
void test(){cout<<"5";}
}

namespace A22_1{
int z=0;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A22_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A22_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<1;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A22_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A22_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A22_6{
void test(){cout<<"undefined behaviour";}
}

namespace A22_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A22_8{
void test(){cout<<"3";}
}

namespace A23_1{
int z=7;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A23_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A23_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<8;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A23_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A23_5{
struct A{
  int work(){return 7;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A23_6{
class A{};
void test(){
  A *a=new A[6]; 
  delete [] a; cout<<"=";}
}

namespace A23_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A23_8{
void test(){cout<<"-6";}
}

namespace A24_1{
int z=3;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A24_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A24_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<2;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A24_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A24_5{
void test(){cout<<"syntax";}
}

namespace A24_6{
void test(){cout<<"undefined behaviour";}
}

namespace A24_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A24_8{
void test(){cout<<"-3";}
}

namespace A25_1{
int z=-7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A25_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A25_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<4;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A25_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A25_5{
struct A{
  int work(){return 3;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A25_6{
class A{};
void test(){
  A *a=new A[5]; 
  delete [] a; cout<<"=";}
}

namespace A25_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A25_8{
void test(){cout<<"-10";}
}

namespace A26_1{
int z=1;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A26_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A26_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<2;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A26_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A26_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A26_6{
void test(){
  int **ppi=new int*(new int(3));
  cout<<**ppi;
  delete *ppi; delete ppi;
  cout<<"=";}
}

namespace A26_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A26_8{
void test(){cout<<"-2";}
}

namespace A27_1{
int z=6;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A27_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A27_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<4;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A27_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A27_5{
void test(){cout<<"syntax";}
}

namespace A27_6{
void test(){cout<<"syntax";}
}

namespace A27_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A27_8{
void test(){cout<<"-9";}
}

namespace A28_1{
int z=-2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A28_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A28_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<1;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A28_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A28_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 4;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A28_6{
void test(){cout<<"syntax";}
}

namespace A28_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A28_8{
void test(){cout<<"-5";}
}

namespace A29_1{
int z=-6;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A29_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A29_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<6;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A29_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A29_5{
struct A{
  int work(){return 1;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 6;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A29_6{
void test(){cout<<"syntax";}
}

namespace A29_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A29_8{
void test(){cout<<"7";}
}

namespace A30_1{
int z=-1;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A30_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A30_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<5;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A30_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A30_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 4;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A30_6{
void test(){cout<<"undefined behaviour";}
}

namespace A30_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A30_8{
void test(){cout<<"6";}
}

namespace A31_1{
int z=5;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A31_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A31_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<2;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A31_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A31_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A31_6{
void test(){cout<<"undefined behaviour";}
}

namespace A31_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A31_8{
void test(){cout<<"1";}
}

namespace A32_1{
int z=4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A32_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[4]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A32_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<5;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A32_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A32_5{
struct A{
  int work(){return 0;}
  int relax(){return 6;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A32_6{
void test(){cout<<"undefined behaviour";}
}

namespace A32_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A32_8{
void test(){cout<<"-2";}
}

namespace A33_1{
int z=2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A33_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A33_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<2;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A33_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A33_5{
struct A{
  int work(){return 0;}
  int relax(){return 3;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A33_6{
void test(){cout<<"syntax";}
}

namespace A33_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A33_8{
void test(){cout<<"2";}
}

namespace A34_1{
int z=-7;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A34_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A34_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<7;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A34_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A34_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 1;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A34_6{
void test(){cout<<"undefined behaviour";}
}

namespace A34_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A34_8{
void test(){cout<<"-6";}
}

namespace A35_1{
int z=0;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A35_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[4]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A35_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<2;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A35_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A35_5{
struct A{
  int work(){return 7;}
  int relax(){return 1;}};
struct B:public A{virtual int relax(){return 3;}};
struct C:public B{int relax(){return 2;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A35_6{
void test(){cout<<"undefined behaviour";}
}

namespace A35_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A35_8{
void test(){cout<<"5";}
}

namespace A36_1{
int z=-3;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A36_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A36_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<5;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A36_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A36_5{
void test(){cout<<"syntax";}
}

namespace A36_6{
void test(){cout<<"undefined behaviour";}
}

namespace A36_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A36_8{
void test(){cout<<"6";}
}

namespace A37_1{
int z=-6;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A37_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A37_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<1;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A37_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A37_5{
struct A{
  int work(){return 1;}
  int relax(){return 6;}};
struct B:public A{virtual int relax(){return 5;}};
struct C:public B{int relax(){return 4;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A37_6{
void test(){cout<<"undefined behaviour";}
}

namespace A37_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A37_8{
void test(){cout<<"14";}
}

namespace A38_1{
int z=3;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A38_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A38_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<2;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A38_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A38_5{
struct A{
  int work(){return 0;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A38_6{
void test(){cout<<"syntax";}
}

namespace A38_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A38_8{
void test(){cout<<"-2";}
}

namespace A39_1{
int z=-2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A39_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A39_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<6;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A39_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A39_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A39_6{
void test(){cout<<"undefined behaviour";}
}

namespace A39_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A39_8{
void test(){cout<<"9";}
}

namespace A40_1{
int z=-5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A40_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A40_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<7;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A40_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A40_5{
struct A{
  int work(){return 7;}
  virtual int relax(){return 6;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 2;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A40_6{
void test(){cout<<"syntax";}
}

namespace A40_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A40_8{
void test(){cout<<"2";}
}

namespace A41_1{
int z=1;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A41_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A41_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<5;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A41_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A41_5{
void test(){cout<<"syntax";}
}

namespace A41_6{
void test(){cout<<"undefined behaviour";}
}

namespace A41_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A41_8{
void test(){cout<<"-10";}
}

namespace A42_1{
int z=6;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A42_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A42_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<2;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A42_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A42_5{
struct A{
  int work(){return 2;}};
struct B:public A{int relax(){return 4;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A42_6{
void test(){cout<<"syntax";}
}

namespace A42_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A42_8{
void test(){cout<<"1";}
}

namespace A43_1{
int z=-4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A43_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A43_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<6;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A43_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A43_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 3;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 7;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A43_6{
void test(){cout<<"syntax";}
}

namespace A43_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A43_8{
void test(){cout<<"-9";}
}

namespace A44_1{
int z=-1;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A44_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[3]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A44_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<7;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A44_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A44_5{
struct A{
  int work(){return 2;}
  int relax(){return 4;}};
struct B:public A{int relax(){return 6;}};
struct C:public A{int relax(){return 1;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A44_6{
class A{};
void test(){
  A *a=new A[2]; 
  delete [] a; cout<<"=";}
}

namespace A44_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A44_8{
void test(){cout<<"8";}
}

namespace A45_1{
int z=7;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A45_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A45_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<0;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A45_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A45_5{
struct A{
  int work(){return 5;}
  virtual int relax(){return 0;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 6;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A45_6{
void test(){cout<<"undefined behaviour";}
}

namespace A45_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A45_8{
void test(){cout<<"-11";}
}

namespace A46_1{
int z=3;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A46_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A46_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<7;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A46_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A46_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 4;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A46_6{
void test(){cout<<"undefined behaviour";}
}

namespace A46_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A46_8{
void test(){cout<<"14";}
}

namespace A47_1{
int z=-1;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A47_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A47_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<0;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A47_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A47_5{
struct A{
  int work(){return 3;}
  int relax(){return 7;}};
struct B:public A{int relax(){return 1;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A47_6{
void test(){cout<<"undefined behaviour";}
}

namespace A47_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A47_8{
void test(){cout<<"2";}
}

namespace A48_1{
int z=7;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A48_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A48_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<1;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A48_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A48_5{
void test(){cout<<"syntax";}
}

namespace A48_6{
void test(){
  int **ppi=new int*(new int(3));
  cout<<**ppi;
  delete *ppi; delete ppi;
  cout<<"=";}
}

namespace A48_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A48_8{
void test(){cout<<"-8";}
}

namespace A49_1{
int z=2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A49_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A49_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<9;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A49_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A49_5{
struct A{
  int work(){return 1;}
  virtual int relax(){return 0;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A49_6{
class X{};
class Y:public X{};
class Z:public X{};
void test(){
  X *x=new X; Z *z=new Z;
  x=z; cout<<(x==z);}
}

namespace A49_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A49_8{
void test(){cout<<"-2";}
}

namespace A50_1{
int z=-5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A50_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A50_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<7;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A50_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A50_5{
struct A{
  int work(){return 7;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A50_6{
class A{};
void test(){
  A *a=new A[3]; 
  delete [] a; cout<<"=";}
}

namespace A50_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A50_8{
void test(){cout<<"0";}
}

namespace A51_1{
int z=-6;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A51_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A51_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<2;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A51_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A51_5{
struct A{
  int work(){return 3;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 0;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A51_6{
void test(){cout<<"syntax";}
}

namespace A51_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A51_8{
void test(){cout<<"3";}
}

namespace A52_1{
int z=-2;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A52_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[4]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A52_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<6;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A52_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A52_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A52_6{
void test(){cout<<"syntax";}
}

namespace A52_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A52_8{
void test(){cout<<"4";}
}

namespace A53_1{
int z=4;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A53_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A53_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<7;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A53_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A53_5{
struct A{
  int work(){return 2;}
  int relax(){return 0;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A53_6{
void test(){cout<<"undefined behaviour";}
}

namespace A53_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A53_8{
void test(){cout<<"-8";}
}

namespace A54_1{
int z=-3;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A54_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A54_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<1;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A54_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A54_5{
void test(){cout<<"syntax";}
}

namespace A54_6{
void test(){cout<<"syntax";}
}

namespace A54_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A54_8{
void test(){cout<<"-3";}
}

namespace A55_1{
int z=1;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A55_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A55_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<9;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A55_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A55_5{
void test(){cout<<"syntax";}
}

namespace A55_6{
void test(){cout<<"undefined behaviour";}
}

namespace A55_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A55_8{
void test(){cout<<"-3";}
}

namespace A56_1{
int z=-4;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A56_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A56_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<8;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A56_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A56_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 7;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A56_6{
class X{};
class Y:public X{};
class Z:public X{};
void test(){
  X x; Z z; x=z;
  cout<<(&x==&z);}
}

namespace A56_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A56_8{
void test(){cout<<"5";}
}

namespace A57_1{
int z=-7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A57_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A57_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<1;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A57_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A57_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 6;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A57_6{
void test(){cout<<"undefined behaviour";}
}

namespace A57_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A57_8{
void test(){cout<<"3";}
}

namespace A58_1{
int z=6;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A58_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A58_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<2;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A58_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A58_5{
struct A{
  int work(){return 1;}
  int relax(){return 3;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A58_6{
void test(){cout<<"undefined behaviour";}
}

namespace A58_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A58_8{
void test(){cout<<"-1";}
}

namespace A59_1{
int z=0;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A59_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[4]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A59_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<0;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A59_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A59_5{
struct A{
  int work(){return 6;}
  int relax(){return 3;}};
struct B:public A{virtual int relax(){return 7;}};
struct C:public B{int relax(){return 2;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A59_6{
class A{};
void test(){
  A *a=new A[5]; 
  delete [] a; cout<<"=";}
}

namespace A59_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A59_8{
void test(){cout<<"0";}
}

namespace A60_1{
int z=5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A60_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[3]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A60_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<7;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A60_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A60_5{
struct A{
  int work(){return 1;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A60_6{
void test(){cout<<"undefined behaviour";}
}

namespace A60_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A60_8{
void test(){cout<<"0";}
}

namespace A61_1{
int z=-7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A61_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A61_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<1;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A61_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A61_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 0;}};
struct B:public A{int relax(){return 6;}};
struct C:public B{int relax(){return 2;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A61_6{
void test(){cout<<"syntax";}
}

namespace A61_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A61_8{
void test(){cout<<"-6";}
}

namespace A62_1{
int z=0;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A62_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A62_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<7;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A62_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A62_5{
struct A{
  int work(){return 7;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A62_6{
void test(){cout<<"undefined behaviour";}
}

namespace A62_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A62_8{
void test(){cout<<"7";}
}

namespace A63_1{
int z=-5;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A63_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A63_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<6;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A63_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A63_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 6;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 1;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A63_6{
void test(){cout<<"syntax";}
}

namespace A63_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A63_8{
void test(){cout<<"3";}
}

namespace A64_1{
int z=-1;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A64_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A64_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<8;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A64_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A64_5{
void test(){cout<<"syntax";}
}

namespace A64_6{
void test(){cout<<"syntax";}
}

namespace A64_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A64_8{
void test(){cout<<"-12";}
}

namespace A65_1{
int z=-2;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A65_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A65_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<2;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A65_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A65_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A65_6{
class A{};
void test(){
  A *a=new A[2]; 
  delete [] a; cout<<"=";}
}

namespace A65_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A65_8{
void test(){cout<<"-1";}
}

namespace A66_1{
int z=7;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A66_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A66_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<8;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A66_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A66_5{
void test(){cout<<"syntax";}
}

namespace A66_6{
void test(){cout<<"undefined behaviour";}
}

namespace A66_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A66_8{
void test(){cout<<"7";}
}

namespace A67_1{
int z=-3;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A67_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A67_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<2;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A67_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A67_5{
struct A{
  int work(){return 6;}
  int relax(){return 2;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 3;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A67_6{
void test(){cout<<"syntax";}
}

namespace A67_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A67_8{
void test(){cout<<"-7";}
}

namespace A68_1{
int z=3;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A68_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A68_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<8;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A68_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A68_5{
struct A{
  int work(){return 1;}
  int relax(){return 4;}};
struct B:public A{virtual int relax(){return 5;}};
struct C:public B{int relax(){return 0;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A68_6{
void test(){cout<<"syntax";}
}

namespace A68_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A68_8{
void test(){cout<<"-7";}
}

namespace A69_1{
int z=1;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A69_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A69_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<7;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A69_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A69_5{
struct A{
  int work(){return 1;}
  int relax(){return 7;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A69_6{
void test(){cout<<"undefined behaviour";}
}

namespace A69_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A69_8{
void test(){cout<<"1";}
}

namespace A70_1{
int z=2;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A70_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A70_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<2;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A70_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A70_5{
struct A{
  int work(){return 2;}};
struct B:public A{int relax(){return 4;}};
struct C:public A{int relax(){return 6;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A70_6{
void test(){cout<<"undefined behaviour";}
}

namespace A70_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A70_8{
void test(){cout<<"5";}
}

namespace A71_1{
int z=4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A71_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A71_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<8;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A71_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A71_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A71_6{
void test(){cout<<"undefined behaviour";}
}

namespace A71_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A71_8{
void test(){cout<<"4";}
}

namespace A72_1{
int z=5;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A72_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[2]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A72_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<3;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A72_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A72_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A72_6{
void test(){cout<<"undefined behaviour";}
}

namespace A72_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A72_8{
void test(){cout<<"10";}
}

namespace A73_1{
int z=6;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A73_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[4]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A73_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<3;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A73_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A73_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 6;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A73_6{
void test(){cout<<"syntax";}
}

namespace A73_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A73_8{
void test(){cout<<"6";}
}

namespace A74_1{
int z=-6;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A74_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A74_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<2;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A74_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A74_5{
struct A{
  int work(){return 7;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A74_6{
void test(){cout<<"syntax";}
}

namespace A74_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A74_8{
void test(){cout<<"-2";}
}

namespace A75_1{
int z=-4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A75_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A75_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<5;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A75_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A75_5{
struct A{
  int work(){return 1;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 0;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A75_6{
void test(){cout<<"syntax";}
}

namespace A75_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A75_8{
void test(){cout<<"-6";}
}

namespace A76_1{
int z=-1;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A76_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A76_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<0;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A76_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A76_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 2;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A76_6{
class A{};
void test(){
  A *a=new A[3]; 
  delete [] a; cout<<"=";}
}

namespace A76_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A76_8{
void test(){cout<<"2";}
}

namespace A77_1{
int z=7;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A77_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A77_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<0;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A77_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A77_5{
void test(){cout<<"syntax";}
}

namespace A77_6{
void test(){cout<<"syntax";}
}

namespace A77_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A77_8{
void test(){cout<<"-7";}
}

namespace A78_1{
int z=-3;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A78_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A78_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<4;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A78_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A78_5{
void test(){cout<<"syntax";}
}

namespace A78_6{
void test(){cout<<"syntax";}
}

namespace A78_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A78_8{
void test(){cout<<"5";}
}

namespace A79_1{
int z=2;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A79_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A79_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<3;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A79_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A79_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A79_6{
void test(){cout<<"undefined behaviour";}
}

namespace A79_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A79_8{
void test(){cout<<"-3";}
}

namespace A80_1{
int z=1;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A80_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A80_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<8;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A80_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A80_5{
struct A{
  int work(){return 4;}
  int relax(){return 3;}};
struct B:public A{virtual int relax(){return 7;}};
struct C:public B{int relax(){return 0;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A80_6{
void test(){cout<<"undefined behaviour";}
}

namespace A80_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A80_8{
void test(){cout<<"10";}
}

namespace A81_1{
int z=-6;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A81_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A81_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<2;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A81_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A81_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 6;}};
struct C:public B{int relax(){return 4;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A81_6{
class A{};
void test(){
  A *a=new A[2]; 
  delete [] a; cout<<"=";}
}

namespace A81_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A81_8{
void test(){cout<<"-9";}
}

namespace A82_1{
int z=4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A82_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A82_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<3;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A82_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A82_5{
struct A{
  int work(){return 0;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A82_6{
void test(){cout<<"undefined behaviour";}
}

namespace A82_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A82_8{
void test(){cout<<"-2";}
}

namespace A83_1{
int z=-7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A83_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A83_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<9;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A83_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A83_5{
struct A{
  int work(){return 5;}
  int relax(){return 1;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 6;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A83_6{
void test(){cout<<"syntax";}
}

namespace A83_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A83_8{
void test(){cout<<"6";}
}

namespace A84_1{
int z=-4;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A84_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A84_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<8;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A84_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A84_5{
struct A{
  int work(){return 7;}
  int relax(){return 2;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A84_6{
void test(){cout<<"undefined behaviour";}
}

namespace A84_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A84_8{
void test(){cout<<"-7";}
}

namespace A85_1{
int z=-5;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A85_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A85_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<4;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A85_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A85_5{
struct A{
  int work(){return 3;}
  int relax(){return 1;}};
struct B:public A{int relax(){return 4;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A85_6{
void test(){cout<<"undefined behaviour";}
}

namespace A85_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A85_8{
void test(){cout<<"0";}
}

namespace A86_1{
int z=5;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A86_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A86_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<5;}
  A(A&&){cout<<8;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A86_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A86_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 2;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A86_6{
void test(){cout<<"undefined behaviour";}
}

namespace A86_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A86_8{
void test(){cout<<"0";}
}

namespace A87_1{
int z=6;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A87_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A87_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<5;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<7;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A87_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A87_5{
struct A{
  int work(){return 2;}};
struct B:public A{int relax(){return 6;}};
struct C:public A{int relax(){return 5;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A87_6{
void test(){cout<<"undefined behaviour";}
}

namespace A87_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A87_8{
void test(){cout<<"-8";}
}

namespace A88_1{
int z=3;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A88_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A88_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<0;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A88_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A88_5{
struct A{
  int work(){return 1;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 3;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A88_6{
void test(){
  int **ppi=new int*(new int(3));
  cout<<**ppi;
  delete *ppi; delete ppi;
  cout<<"=";}
}

namespace A88_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A88_8{
void test(){cout<<"-1";}
}

namespace A89_1{
int z=0;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A89_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[3]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A89_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<8;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A89_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A89_5{
struct A{
  int work(){return 0;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 6;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A89_6{
void test(){cout<<"syntax";}
}

namespace A89_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A89_8{
void test(){cout<<"-10";}
}

namespace A90_1{
int z=-2;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A90_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A90_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<2;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A90_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A90_5{
void test(){cout<<"syntax";}
}

namespace A90_6{
void test(){cout<<"undefined behaviour";}
}

namespace A90_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A90_8{
void test(){cout<<"4";}
}

namespace A91_1{
int z=6;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A91_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[2]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A91_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<0;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<6;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A91_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A91_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 0;}};
struct B:public A{int relax(){return 7;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A91_6{
void test(){cout<<"syntax";}
}

namespace A91_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A91_8{
void test(){cout<<"5";}
}

namespace A92_1{
int z=7;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A92_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[4]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A92_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<7;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A92_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A92_5{
struct A{
  int work(){return 3;}
  int relax(){return 1;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 6;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A92_6{
void test(){cout<<"undefined behaviour";}
}

namespace A92_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A92_8{
void test(){cout<<"-6";}
}

namespace A93_1{
int z=4;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A93_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A93_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<6;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A93_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A93_5{
void test(){cout<<"syntax";}
}

namespace A93_6{
void test(){cout<<"undefined behaviour";}
}

namespace A93_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A93_8{
void test(){cout<<"9";}
}

namespace A94_1{
int z=-4;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A94_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[4];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A94_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<7;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A94_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A94_5{
struct A{
  int work(){return 5;}
  int relax(){return 6;}};
struct B:public A{virtual int relax(){return 7;}};
struct C:public B{int relax(){return 3;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A94_6{
void test(){cout<<"undefined behaviour";}
}

namespace A94_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A94_8{
void test(){cout<<"8";}
}

namespace A95_1{
int z=2;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A95_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A95_3{
struct A{
  A(){cout<<2;}
  A(const A&){cout<<4;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A95_4{
struct A{
  int x;
  void d(){x/=2;}};
struct B:public A{
  int y;
  void d(){y/=4;}};
void test(){
  B b; b.x=b.y=4;
  b.d(); cout<<b.x<<b.y;}
}

namespace A95_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 1;}};
struct C:public B{int relax(){return 3;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A95_6{
class A{};
void test(){
  A *a=new A[3]; 
  delete [] a; cout<<"=";}
}

namespace A95_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A95_8{
void test(){cout<<"9";}
}

namespace A96_1{
int z=5;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A96_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A96_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<7;}
  A(A&&){cout<<0;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A96_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A96_5{
struct A{
  int work(){return 0;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A96_6{
void test(){cout<<"undefined behaviour";}
}

namespace A96_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A96_8{
void test(){cout<<"-3";}
}

namespace A97_1{
int z=-2;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A97_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A97_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<7;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A97_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A97_5{
struct A{
  int work(){return 1;}
  virtual int relax(){return 2;}};
struct B:public A{int relax(){return 0;}};
struct C:public B{int relax(){return 6;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A97_6{
void test(){cout<<"undefined behaviour";}
}

namespace A97_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A97_8{
void test(){cout<<"9";}
}

namespace A98_1{
int z=-5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A98_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[2]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A98_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<4;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A98_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A98_5{
struct A{
  int work(){return 7;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 3;}};
struct C:public B{int relax(){return 5;}};
void test(){ A a; B b; C c;
  cout<<((B&)c).relax()<<c.B::relax();}
}

namespace A98_6{
void test(){cout<<"syntax";}
}

namespace A98_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A98_8{
void test(){cout<<"-9";}
}

namespace A99_1{
int z=-6;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A99_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A99_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<4;}
  A(A&&){cout<<7;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A99_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A99_5{
void test(){cout<<"syntax";}
}

namespace A99_6{
void test(){cout<<"syntax";}
}

namespace A99_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A99_8{
void test(){cout<<"-4";}
}

namespace A100_1{
int z=-1;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A100_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[4];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A100_3{
struct A{
  A(){cout<<5;}
  A(const A&){cout<<3;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A100_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A100_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 4;}};
struct B:public A{int relax(){return 6;}};
struct C:public B{int relax(){return 5;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A100_6{
void test(){cout<<"undefined behaviour";}
}

namespace A100_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A100_8{
void test(){cout<<"12";}
}

namespace A101_1{
int z=-7;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A101_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[2]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A101_3{
struct A{
  A(){cout<<4;}
  A(const A&){cout<<2;}
  A(A&&){cout<<5;}
  A& operator=(const A&){cout<<1;return *this;}
  A& operator=(A&&){cout<<0;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A101_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A101_5{
struct A{
  int work(){return 3;}
  int relax(){return 0;}};
struct B:public A{virtual int relax(){return 4;}};
struct C:public B{int relax(){return 7;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a1->work()<<a2->relax()<<a1->relax();}
}

namespace A101_6{
void test(){cout<<"syntax";}
}

namespace A101_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A101_8{
void test(){cout<<"7";}
}

namespace A102_1{
int z=-3;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A102_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A102_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<8;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A102_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A102_5{
struct A{
  int work(){return 2;}
  virtual int relax(){return 1;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 6;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A102_6{
void test(){cout<<"undefined behaviour";}
}

namespace A102_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A102_8{
void test(){cout<<"2";}
}

namespace A103_1{
int z=0;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A103_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A103_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<0;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A103_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A103_5{
struct A{
  int work(){return 7;}
  virtual int relax(){return 5;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A103_6{
void test(){cout<<"syntax";}
}

namespace A103_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A103_8{
void test(){cout<<"2";}
}

namespace A104_1{
int z=3;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A104_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A104_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<4;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<5;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A104_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A104_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 3;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A104_6{
void test(){cout<<"syntax";}
}

namespace A104_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A104_8{
void test(){cout<<"-2";}
}

namespace A105_1{
int z=1;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A105_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A105_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<5;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<4;return *this;}
  A& operator=(A&&){cout<<6;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A105_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){A::d();}};
void test(){
  B b; b.x=b.y=4; b.d();
  cout<<b.x<<b.y;}
}

namespace A105_5{
void test(){cout<<"syntax";}
}

namespace A105_6{
void test(){cout<<"undefined behaviour";}
}

namespace A105_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A105_8{
void test(){cout<<"1";}
}

namespace A106_1{
int z=2;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A106_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[3]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A106_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<1;}
  A(A&&){cout<<2;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A106_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A106_5{
struct A{
  int work(){return 5;}
  int relax(){return 1;}};
struct B:public A{int relax(){return 7;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<a1->relax()<<a2->relax();}
}

namespace A106_6{
void test(){cout<<"syntax";}
}

namespace A106_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A106_8{
void test(){cout<<"-1";}
}

namespace A107_1{
int z=-3;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A107_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A107_3{
struct A{
  A(){cout<<6;}
  A(const A&){cout<<1;}
  A& operator=(const A&){cout<<8;return *this;}
  A& operator=(A&&){cout<<3;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A107_4{
struct A{
  int x=0;
  virtual void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A107_5{
struct A{
  int work(){return 6;}};
struct B:public A{int relax(){return 5;}};
struct C:public A{int relax(){return 4;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A107_6{
void test(){cout<<"undefined behaviour";}
}

namespace A107_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A107_8{
void test(){cout<<"-5";}
}

namespace A108_1{
int z=-5;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A108_2{
struct A{ A(){cout<<"A";} };
struct B{ B(){cout<<"B";} };
class C{
  A a[4]; B b;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A108_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<5;}
  A(A&&){cout<<9;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A108_4{
struct A{
  int x=0;
  void d(){x+=1;}
  void g(){d();}};
struct B:public A{
  int x=0;
  virtual void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A108_5{
struct A{
  int work(){return 1;}
  int relax(){return 3;}};
struct B:public A{int relax(){return 0;}};
struct C:public A{int relax(){return 2;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A108_6{
void test(){cout<<"undefined behaviour";}
}

namespace A108_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A108_8{
void test(){cout<<"-5";}
}

namespace A109_1{
int z=6;
struct A{
  A(){z--;}
  A(const A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A109_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[2]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A109_3{
struct A{
  A(){cout<<1;}
  A(const A&){cout<<6;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<7;return *this;}
  A& operator=(A&&){cout<<2;return *this;}};
A f(){A a; return move(a);}
void test(){A a, b=a, c; c=f();}
}

namespace A109_4{
struct A{
  int x=0;
  void d(){x+=1;}
  virtual void g(){d();}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.g();
  cout<<b.x<<b.A::x;}
}

namespace A109_5{
struct A{
  int work(){return 4;}
  virtual int relax(){return 6;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<((C*)a2)->B::relax()<<a1->relax();}
}

namespace A109_6{
void test(){cout<<"undefined behaviour";}
}

namespace A109_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A109_8{
void test(){cout<<"-2";}
}

namespace A110_1{
int z=5;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A110_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A110_3{
struct A{
  A(){cout<<8;}
  A(const A&){cout<<5;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<9;return *this;}};
void test(){A a, b(a), c(move(a));}
}

namespace A110_4{
struct A{
  int x=0;
  void d(){x+=1;}};
struct B:public A{
  int x=0;
  void d(){x+=2;}};
void test(){
  B b; b.x=1; b.d();
  cout<<b.x<<b.A::x;}
}

namespace A110_5{
struct A{
  int work(){return 3;}
  int relax(){return 7;}};
struct B:public A{int relax(){return 2;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A110_6{
class A{};
void test(){
  A *a=new A[3]; 
  delete [] a; cout<<"=";}
}

namespace A110_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a[2]; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A110_8{
void test(){cout<<"2";}
}

namespace A111_1{
int z=0;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A(A &&aa){z+=4;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A111_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b; A a[3];
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A111_3{
struct A{
  A(){cout<<3;}
  A(const A&){cout<<6;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<5;return *this;}};
void test(){A a, b(a), c=move(a); c=move(a);}
}

namespace A111_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){A::d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A111_5{
struct A{
  int work(){return 3;}
  virtual int relax(){return 0;}};
struct B:public A{int relax(){return 4;}};
struct C:public B{int relax(){return 1;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->A::relax();}
}

namespace A111_6{
void test(){cout<<"syntax";}
}

namespace A111_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A111_8{
void test(){cout<<"-10";}
}

namespace A112_1{
int z=-7;
struct A{
  A(){++z;}
  A(const A &aa){z=3;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c, d(b);} cout<<z;}
}

namespace A112_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a; B b[2];
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A112_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<8;}
  A(A&&){cout<<1;}
  A& operator=(const A&){cout<<0;return *this;}
  A& operator=(A&&){cout<<4;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A112_4{
struct A{
  int x;
  void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  virtual void d(){y+=2;}};
void test(){
  B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A112_5{
struct A{
  int work(){return 6;}
  virtual int relax(){return 7;}};
struct B:public A{int relax(){return 5;}};
struct C:public B{int relax(){return 2;}};
void test(){ A *a1=new B, *a2=new C;
  cout<<a2->relax()<<a1->relax();}
}

namespace A112_6{
void test(){cout<<"undefined behaviour";}
}

namespace A112_7{
struct A{
  A(){throw 1;cout<<"A";}
  ~A(){cout<<"~A";}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{A a; B b;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A112_8{
void test(){cout<<"8";}
}

namespace A113_1{
int z=-4;
struct A{
  A(){z++;}
  A(const A &aa){z+=2;}
  A& f(){return *this;}
};
void test(){
  {A a, b(a), c(A().f());} cout<<z;}
}

namespace A113_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A113_3{
struct A{
  A(){cout<<0;}
  A(const A&){cout<<5;}
  A(A&&){cout<<6;}
  A& operator=(const A&){cout<<2;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
A f(){A a; return a;}
void test(){A a, b=a, c; c=f();}
}

namespace A113_4{
struct A{
  int v;
  A(int n):v(n){}};
struct B{
  A a; int b;
  B(int n):a(n+1){b=a.v;}};
void test(){
  B b(2);
  cout<<b.b;}
}

namespace A113_5{
struct A{
  int work(){return 5;}};
struct B:public A{int relax(){return 3;}};
struct C:public A{int relax(){return 7;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a2->work()<<((B*)a1)->relax()
    <<((B*)a0)->relax();}
}

namespace A113_6{
void test(){cout<<"undefined behaviour";}
}

namespace A113_7{
struct A{
  A() {f(); cout<<"A";}
  ~A(){cout<<"~A";} 
  void f(){throw 1;}};
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A113_8{
void test(){cout<<"5";}
}

namespace A114_1{
int z=1;
struct A{
  A(){z++;}
  ~A(){z++;}
  A(const A &aa){z+=4;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A114_2{
struct A{ ~A(){cout<<"A";}};
struct B{ ~B(){cout<<"B";}};
class C{
  A a[3]; B b;
public:
  ~C(){cout<<"C";} };
void test(){C c;}
}

namespace A114_3{
struct A{
  A(){cout<<7;}
  A(const A&){cout<<4;}
  A(A&&){cout<<3;}
  A& operator=(const A&){cout<<9;return *this;}
  A& operator=(A&&){cout<<1;return *this;}};
void test(){A a, b=a, c=move(a); c=b;}
}

namespace A114_4{
struct A{
  int x=1;
  void d(){x/=2;}};
struct B:public A{
  int x;
  void d(){x/=4;}};
void test(){
  B b; b.x=4;b.d();
  cout<<b.x<<b.A::x;}
}

namespace A114_5{
struct A{
  int work(){return 4;}};
struct B:public A{int relax(){return 6;}};
struct C:public A{int relax(){return 0;}};
void test(){ A *a0=new A, *a1=new B, *a2=new C;
  cout<<a0->work()<<((B*)a1)->relax()
    <<((C*)a2)->relax();}
}

namespace A114_6{
void test(){cout<<"syntax";}
}

namespace A114_7{
class A{
  static int n;
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b[2]; A a;
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A114_8{
void test(){cout<<"-10";}
}

namespace A115_1{
int z=7;
struct A{
  A(){z+=2;}
  A(A &aa){z++;}
  ~A(){z--;}
};
void test(){
  {A a, b(a), c(b);} cout<<z;}
}

namespace A115_2{
struct A{ A(){cout<<"A";}};
struct B{ B(){cout<<"B";}};
class C{
  B b[4]; A a;
public:
  C(){cout<<"C";} };
void test(){C c;}
}

namespace A115_3{
struct A{
  A(){cout<<9;}
  A(const A&){cout<<5;}
  A(A&&){cout<<4;}
  A& operator=(const A&){cout<<3;return *this;}
  A& operator=(A&&){cout<<8;return *this;}};
void test(){A a, b(a), c=move(a);}
}

namespace A115_4{
struct A{
  int x;
  virtual void d(){x+=2;}
  void g(){d();}};
struct B:public A{
  int y;
  void d(){y+=2;}};
void test(){
 B b; b.x=b.y=4; b.g();
  cout<<b.x<<b.y;}
}

namespace A115_5{
void test(){cout<<"syntax";}
}

namespace A115_6{
void test(){cout<<"undefined behaviour";}
}

namespace A115_7{
class A{
  static int n; 
public:
  A(){
    ++n; 
    if(n>1) throw 1;
    cout<<"A";}
  ~A(){cout<<"~A";}};
int A::n=0;
struct B{
  B(){cout<<"B";}
  ~B(){cout<<"~B";}};
class C{B b; A a[2];
public:
  C(){cout<<"C";}
  ~C(){cout<<"~C";}};
void test(){
  try{C c;} 
  catch(...){} 
  cout<<"=";}
}

namespace A115_8{
void test(){cout<<"-8";}
}

    int main(){
    cout<<"Variant 1:1:";
A1_1::test(); cout<<endl;
cout<<"Variant 1:2:";
A1_2::test(); cout<<endl;
cout<<"Variant 1:3:";
A1_3::test(); cout<<endl;
cout<<"Variant 1:4:";
A1_4::test(); cout<<endl;
cout<<"Variant 1:5:";
A1_5::test(); cout<<endl;
cout<<"Variant 1:6:";
A1_6::test(); cout<<endl;
cout<<"Variant 1:7:";
A1_7::test(); cout<<endl;
cout<<"Variant 1:8:";
A1_8::test(); cout<<endl;
cout<<"Variant 2:1:";
A2_1::test(); cout<<endl;
cout<<"Variant 2:2:";
A2_2::test(); cout<<endl;
cout<<"Variant 2:3:";
A2_3::test(); cout<<endl;
cout<<"Variant 2:4:";
A2_4::test(); cout<<endl;
cout<<"Variant 2:5:";
A2_5::test(); cout<<endl;
cout<<"Variant 2:6:";
A2_6::test(); cout<<endl;
cout<<"Variant 2:7:";
A2_7::test(); cout<<endl;
cout<<"Variant 2:8:";
A2_8::test(); cout<<endl;
cout<<"Variant 3:1:";
A3_1::test(); cout<<endl;
cout<<"Variant 3:2:";
A3_2::test(); cout<<endl;
cout<<"Variant 3:3:";
A3_3::test(); cout<<endl;
cout<<"Variant 3:4:";
A3_4::test(); cout<<endl;
cout<<"Variant 3:5:";
A3_5::test(); cout<<endl;
cout<<"Variant 3:6:";
A3_6::test(); cout<<endl;
cout<<"Variant 3:7:";
A3_7::test(); cout<<endl;
cout<<"Variant 3:8:";
A3_8::test(); cout<<endl;
cout<<"Variant 4:1:";
A4_1::test(); cout<<endl;
cout<<"Variant 4:2:";
A4_2::test(); cout<<endl;
cout<<"Variant 4:3:";
A4_3::test(); cout<<endl;
cout<<"Variant 4:4:";
A4_4::test(); cout<<endl;
cout<<"Variant 4:5:";
A4_5::test(); cout<<endl;
cout<<"Variant 4:6:";
A4_6::test(); cout<<endl;
cout<<"Variant 4:7:";
A4_7::test(); cout<<endl;
cout<<"Variant 4:8:";
A4_8::test(); cout<<endl;
cout<<"Variant 5:1:";
A5_1::test(); cout<<endl;
cout<<"Variant 5:2:";
A5_2::test(); cout<<endl;
cout<<"Variant 5:3:";
A5_3::test(); cout<<endl;
cout<<"Variant 5:4:";
A5_4::test(); cout<<endl;
cout<<"Variant 5:5:";
A5_5::test(); cout<<endl;
cout<<"Variant 5:6:";
A5_6::test(); cout<<endl;
cout<<"Variant 5:7:";
A5_7::test(); cout<<endl;
cout<<"Variant 5:8:";
A5_8::test(); cout<<endl;
cout<<"Variant 6:1:";
A6_1::test(); cout<<endl;
cout<<"Variant 6:2:";
A6_2::test(); cout<<endl;
cout<<"Variant 6:3:";
A6_3::test(); cout<<endl;
cout<<"Variant 6:4:";
A6_4::test(); cout<<endl;
cout<<"Variant 6:5:";
A6_5::test(); cout<<endl;
cout<<"Variant 6:6:";
A6_6::test(); cout<<endl;
cout<<"Variant 6:7:";
A6_7::test(); cout<<endl;
cout<<"Variant 6:8:";
A6_8::test(); cout<<endl;
cout<<"Variant 7:1:";
A7_1::test(); cout<<endl;
cout<<"Variant 7:2:";
A7_2::test(); cout<<endl;
cout<<"Variant 7:3:";
A7_3::test(); cout<<endl;
cout<<"Variant 7:4:";
A7_4::test(); cout<<endl;
cout<<"Variant 7:5:";
A7_5::test(); cout<<endl;
cout<<"Variant 7:6:";
A7_6::test(); cout<<endl;
cout<<"Variant 7:7:";
A7_7::test(); cout<<endl;
cout<<"Variant 7:8:";
A7_8::test(); cout<<endl;
cout<<"Variant 8:1:";
A8_1::test(); cout<<endl;
cout<<"Variant 8:2:";
A8_2::test(); cout<<endl;
cout<<"Variant 8:3:";
A8_3::test(); cout<<endl;
cout<<"Variant 8:4:";
A8_4::test(); cout<<endl;
cout<<"Variant 8:5:";
A8_5::test(); cout<<endl;
cout<<"Variant 8:6:";
A8_6::test(); cout<<endl;
cout<<"Variant 8:7:";
A8_7::test(); cout<<endl;
cout<<"Variant 8:8:";
A8_8::test(); cout<<endl;
cout<<"Variant 9:1:";
A9_1::test(); cout<<endl;
cout<<"Variant 9:2:";
A9_2::test(); cout<<endl;
cout<<"Variant 9:3:";
A9_3::test(); cout<<endl;
cout<<"Variant 9:4:";
A9_4::test(); cout<<endl;
cout<<"Variant 9:5:";
A9_5::test(); cout<<endl;
cout<<"Variant 9:6:";
A9_6::test(); cout<<endl;
cout<<"Variant 9:7:";
A9_7::test(); cout<<endl;
cout<<"Variant 9:8:";
A9_8::test(); cout<<endl;
cout<<"Variant 10:1:";
A10_1::test(); cout<<endl;
cout<<"Variant 10:2:";
A10_2::test(); cout<<endl;
cout<<"Variant 10:3:";
A10_3::test(); cout<<endl;
cout<<"Variant 10:4:";
A10_4::test(); cout<<endl;
cout<<"Variant 10:5:";
A10_5::test(); cout<<endl;
cout<<"Variant 10:6:";
A10_6::test(); cout<<endl;
cout<<"Variant 10:7:";
A10_7::test(); cout<<endl;
cout<<"Variant 10:8:";
A10_8::test(); cout<<endl;
cout<<"Variant 11:1:";
A11_1::test(); cout<<endl;
cout<<"Variant 11:2:";
A11_2::test(); cout<<endl;
cout<<"Variant 11:3:";
A11_3::test(); cout<<endl;
cout<<"Variant 11:4:";
A11_4::test(); cout<<endl;
cout<<"Variant 11:5:";
A11_5::test(); cout<<endl;
cout<<"Variant 11:6:";
A11_6::test(); cout<<endl;
cout<<"Variant 11:7:";
A11_7::test(); cout<<endl;
cout<<"Variant 11:8:";
A11_8::test(); cout<<endl;
cout<<"Variant 12:1:";
A12_1::test(); cout<<endl;
cout<<"Variant 12:2:";
A12_2::test(); cout<<endl;
cout<<"Variant 12:3:";
A12_3::test(); cout<<endl;
cout<<"Variant 12:4:";
A12_4::test(); cout<<endl;
cout<<"Variant 12:5:";
A12_5::test(); cout<<endl;
cout<<"Variant 12:6:";
A12_6::test(); cout<<endl;
cout<<"Variant 12:7:";
A12_7::test(); cout<<endl;
cout<<"Variant 12:8:";
A12_8::test(); cout<<endl;
cout<<"Variant 13:1:";
A13_1::test(); cout<<endl;
cout<<"Variant 13:2:";
A13_2::test(); cout<<endl;
cout<<"Variant 13:3:";
A13_3::test(); cout<<endl;
cout<<"Variant 13:4:";
A13_4::test(); cout<<endl;
cout<<"Variant 13:5:";
A13_5::test(); cout<<endl;
cout<<"Variant 13:6:";
A13_6::test(); cout<<endl;
cout<<"Variant 13:7:";
A13_7::test(); cout<<endl;
cout<<"Variant 13:8:";
A13_8::test(); cout<<endl;
cout<<"Variant 14:1:";
A14_1::test(); cout<<endl;
cout<<"Variant 14:2:";
A14_2::test(); cout<<endl;
cout<<"Variant 14:3:";
A14_3::test(); cout<<endl;
cout<<"Variant 14:4:";
A14_4::test(); cout<<endl;
cout<<"Variant 14:5:";
A14_5::test(); cout<<endl;
cout<<"Variant 14:6:";
A14_6::test(); cout<<endl;
cout<<"Variant 14:7:";
A14_7::test(); cout<<endl;
cout<<"Variant 14:8:";
A14_8::test(); cout<<endl;
cout<<"Variant 15:1:";
A15_1::test(); cout<<endl;
cout<<"Variant 15:2:";
A15_2::test(); cout<<endl;
cout<<"Variant 15:3:";
A15_3::test(); cout<<endl;
cout<<"Variant 15:4:";
A15_4::test(); cout<<endl;
cout<<"Variant 15:5:";
A15_5::test(); cout<<endl;
cout<<"Variant 15:6:";
A15_6::test(); cout<<endl;
cout<<"Variant 15:7:";
A15_7::test(); cout<<endl;
cout<<"Variant 15:8:";
A15_8::test(); cout<<endl;
cout<<"Variant 16:1:";
A16_1::test(); cout<<endl;
cout<<"Variant 16:2:";
A16_2::test(); cout<<endl;
cout<<"Variant 16:3:";
A16_3::test(); cout<<endl;
cout<<"Variant 16:4:";
A16_4::test(); cout<<endl;
cout<<"Variant 16:5:";
A16_5::test(); cout<<endl;
cout<<"Variant 16:6:";
A16_6::test(); cout<<endl;
cout<<"Variant 16:7:";
A16_7::test(); cout<<endl;
cout<<"Variant 16:8:";
A16_8::test(); cout<<endl;
cout<<"Variant 17:1:";
A17_1::test(); cout<<endl;
cout<<"Variant 17:2:";
A17_2::test(); cout<<endl;
cout<<"Variant 17:3:";
A17_3::test(); cout<<endl;
cout<<"Variant 17:4:";
A17_4::test(); cout<<endl;
cout<<"Variant 17:5:";
A17_5::test(); cout<<endl;
cout<<"Variant 17:6:";
A17_6::test(); cout<<endl;
cout<<"Variant 17:7:";
A17_7::test(); cout<<endl;
cout<<"Variant 17:8:";
A17_8::test(); cout<<endl;
cout<<"Variant 18:1:";
A18_1::test(); cout<<endl;
cout<<"Variant 18:2:";
A18_2::test(); cout<<endl;
cout<<"Variant 18:3:";
A18_3::test(); cout<<endl;
cout<<"Variant 18:4:";
A18_4::test(); cout<<endl;
cout<<"Variant 18:5:";
A18_5::test(); cout<<endl;
cout<<"Variant 18:6:";
A18_6::test(); cout<<endl;
cout<<"Variant 18:7:";
A18_7::test(); cout<<endl;
cout<<"Variant 18:8:";
A18_8::test(); cout<<endl;
cout<<"Variant 19:1:";
A19_1::test(); cout<<endl;
cout<<"Variant 19:2:";
A19_2::test(); cout<<endl;
cout<<"Variant 19:3:";
A19_3::test(); cout<<endl;
cout<<"Variant 19:4:";
A19_4::test(); cout<<endl;
cout<<"Variant 19:5:";
A19_5::test(); cout<<endl;
cout<<"Variant 19:6:";
A19_6::test(); cout<<endl;
cout<<"Variant 19:7:";
A19_7::test(); cout<<endl;
cout<<"Variant 19:8:";
A19_8::test(); cout<<endl;
cout<<"Variant 20:1:";
A20_1::test(); cout<<endl;
cout<<"Variant 20:2:";
A20_2::test(); cout<<endl;
cout<<"Variant 20:3:";
A20_3::test(); cout<<endl;
cout<<"Variant 20:4:";
A20_4::test(); cout<<endl;
cout<<"Variant 20:5:";
A20_5::test(); cout<<endl;
cout<<"Variant 20:6:";
A20_6::test(); cout<<endl;
cout<<"Variant 20:7:";
A20_7::test(); cout<<endl;
cout<<"Variant 20:8:";
A20_8::test(); cout<<endl;
cout<<"Variant 21:1:";
A21_1::test(); cout<<endl;
cout<<"Variant 21:2:";
A21_2::test(); cout<<endl;
cout<<"Variant 21:3:";
A21_3::test(); cout<<endl;
cout<<"Variant 21:4:";
A21_4::test(); cout<<endl;
cout<<"Variant 21:5:";
A21_5::test(); cout<<endl;
cout<<"Variant 21:6:";
A21_6::test(); cout<<endl;
cout<<"Variant 21:7:";
A21_7::test(); cout<<endl;
cout<<"Variant 21:8:";
A21_8::test(); cout<<endl;
cout<<"Variant 22:1:";
A22_1::test(); cout<<endl;
cout<<"Variant 22:2:";
A22_2::test(); cout<<endl;
cout<<"Variant 22:3:";
A22_3::test(); cout<<endl;
cout<<"Variant 22:4:";
A22_4::test(); cout<<endl;
cout<<"Variant 22:5:";
A22_5::test(); cout<<endl;
cout<<"Variant 22:6:";
A22_6::test(); cout<<endl;
cout<<"Variant 22:7:";
A22_7::test(); cout<<endl;
cout<<"Variant 22:8:";
A22_8::test(); cout<<endl;
cout<<"Variant 23:1:";
A23_1::test(); cout<<endl;
cout<<"Variant 23:2:";
A23_2::test(); cout<<endl;
cout<<"Variant 23:3:";
A23_3::test(); cout<<endl;
cout<<"Variant 23:4:";
A23_4::test(); cout<<endl;
cout<<"Variant 23:5:";
A23_5::test(); cout<<endl;
cout<<"Variant 23:6:";
A23_6::test(); cout<<endl;
cout<<"Variant 23:7:";
A23_7::test(); cout<<endl;
cout<<"Variant 23:8:";
A23_8::test(); cout<<endl;
cout<<"Variant 24:1:";
A24_1::test(); cout<<endl;
cout<<"Variant 24:2:";
A24_2::test(); cout<<endl;
cout<<"Variant 24:3:";
A24_3::test(); cout<<endl;
cout<<"Variant 24:4:";
A24_4::test(); cout<<endl;
cout<<"Variant 24:5:";
A24_5::test(); cout<<endl;
cout<<"Variant 24:6:";
A24_6::test(); cout<<endl;
cout<<"Variant 24:7:";
A24_7::test(); cout<<endl;
cout<<"Variant 24:8:";
A24_8::test(); cout<<endl;
cout<<"Variant 25:1:";
A25_1::test(); cout<<endl;
cout<<"Variant 25:2:";
A25_2::test(); cout<<endl;
cout<<"Variant 25:3:";
A25_3::test(); cout<<endl;
cout<<"Variant 25:4:";
A25_4::test(); cout<<endl;
cout<<"Variant 25:5:";
A25_5::test(); cout<<endl;
cout<<"Variant 25:6:";
A25_6::test(); cout<<endl;
cout<<"Variant 25:7:";
A25_7::test(); cout<<endl;
cout<<"Variant 25:8:";
A25_8::test(); cout<<endl;
cout<<"Variant 26:1:";
A26_1::test(); cout<<endl;
cout<<"Variant 26:2:";
A26_2::test(); cout<<endl;
cout<<"Variant 26:3:";
A26_3::test(); cout<<endl;
cout<<"Variant 26:4:";
A26_4::test(); cout<<endl;
cout<<"Variant 26:5:";
A26_5::test(); cout<<endl;
cout<<"Variant 26:6:";
A26_6::test(); cout<<endl;
cout<<"Variant 26:7:";
A26_7::test(); cout<<endl;
cout<<"Variant 26:8:";
A26_8::test(); cout<<endl;
cout<<"Variant 27:1:";
A27_1::test(); cout<<endl;
cout<<"Variant 27:2:";
A27_2::test(); cout<<endl;
cout<<"Variant 27:3:";
A27_3::test(); cout<<endl;
cout<<"Variant 27:4:";
A27_4::test(); cout<<endl;
cout<<"Variant 27:5:";
A27_5::test(); cout<<endl;
cout<<"Variant 27:6:";
A27_6::test(); cout<<endl;
cout<<"Variant 27:7:";
A27_7::test(); cout<<endl;
cout<<"Variant 27:8:";
A27_8::test(); cout<<endl;
cout<<"Variant 28:1:";
A28_1::test(); cout<<endl;
cout<<"Variant 28:2:";
A28_2::test(); cout<<endl;
cout<<"Variant 28:3:";
A28_3::test(); cout<<endl;
cout<<"Variant 28:4:";
A28_4::test(); cout<<endl;
cout<<"Variant 28:5:";
A28_5::test(); cout<<endl;
cout<<"Variant 28:6:";
A28_6::test(); cout<<endl;
cout<<"Variant 28:7:";
A28_7::test(); cout<<endl;
cout<<"Variant 28:8:";
A28_8::test(); cout<<endl;
cout<<"Variant 29:1:";
A29_1::test(); cout<<endl;
cout<<"Variant 29:2:";
A29_2::test(); cout<<endl;
cout<<"Variant 29:3:";
A29_3::test(); cout<<endl;
cout<<"Variant 29:4:";
A29_4::test(); cout<<endl;
cout<<"Variant 29:5:";
A29_5::test(); cout<<endl;
cout<<"Variant 29:6:";
A29_6::test(); cout<<endl;
cout<<"Variant 29:7:";
A29_7::test(); cout<<endl;
cout<<"Variant 29:8:";
A29_8::test(); cout<<endl;
cout<<"Variant 30:1:";
A30_1::test(); cout<<endl;
cout<<"Variant 30:2:";
A30_2::test(); cout<<endl;
cout<<"Variant 30:3:";
A30_3::test(); cout<<endl;
cout<<"Variant 30:4:";
A30_4::test(); cout<<endl;
cout<<"Variant 30:5:";
A30_5::test(); cout<<endl;
cout<<"Variant 30:6:";
A30_6::test(); cout<<endl;
cout<<"Variant 30:7:";
A30_7::test(); cout<<endl;
cout<<"Variant 30:8:";
A30_8::test(); cout<<endl;
cout<<"Variant 31:1:";
A31_1::test(); cout<<endl;
cout<<"Variant 31:2:";
A31_2::test(); cout<<endl;
cout<<"Variant 31:3:";
A31_3::test(); cout<<endl;
cout<<"Variant 31:4:";
A31_4::test(); cout<<endl;
cout<<"Variant 31:5:";
A31_5::test(); cout<<endl;
cout<<"Variant 31:6:";
A31_6::test(); cout<<endl;
cout<<"Variant 31:7:";
A31_7::test(); cout<<endl;
cout<<"Variant 31:8:";
A31_8::test(); cout<<endl;
cout<<"Variant 32:1:";
A32_1::test(); cout<<endl;
cout<<"Variant 32:2:";
A32_2::test(); cout<<endl;
cout<<"Variant 32:3:";
A32_3::test(); cout<<endl;
cout<<"Variant 32:4:";
A32_4::test(); cout<<endl;
cout<<"Variant 32:5:";
A32_5::test(); cout<<endl;
cout<<"Variant 32:6:";
A32_6::test(); cout<<endl;
cout<<"Variant 32:7:";
A32_7::test(); cout<<endl;
cout<<"Variant 32:8:";
A32_8::test(); cout<<endl;
cout<<"Variant 33:1:";
A33_1::test(); cout<<endl;
cout<<"Variant 33:2:";
A33_2::test(); cout<<endl;
cout<<"Variant 33:3:";
A33_3::test(); cout<<endl;
cout<<"Variant 33:4:";
A33_4::test(); cout<<endl;
cout<<"Variant 33:5:";
A33_5::test(); cout<<endl;
cout<<"Variant 33:6:";
A33_6::test(); cout<<endl;
cout<<"Variant 33:7:";
A33_7::test(); cout<<endl;
cout<<"Variant 33:8:";
A33_8::test(); cout<<endl;
cout<<"Variant 34:1:";
A34_1::test(); cout<<endl;
cout<<"Variant 34:2:";
A34_2::test(); cout<<endl;
cout<<"Variant 34:3:";
A34_3::test(); cout<<endl;
cout<<"Variant 34:4:";
A34_4::test(); cout<<endl;
cout<<"Variant 34:5:";
A34_5::test(); cout<<endl;
cout<<"Variant 34:6:";
A34_6::test(); cout<<endl;
cout<<"Variant 34:7:";
A34_7::test(); cout<<endl;
cout<<"Variant 34:8:";
A34_8::test(); cout<<endl;
cout<<"Variant 35:1:";
A35_1::test(); cout<<endl;
cout<<"Variant 35:2:";
A35_2::test(); cout<<endl;
cout<<"Variant 35:3:";
A35_3::test(); cout<<endl;
cout<<"Variant 35:4:";
A35_4::test(); cout<<endl;
cout<<"Variant 35:5:";
A35_5::test(); cout<<endl;
cout<<"Variant 35:6:";
A35_6::test(); cout<<endl;
cout<<"Variant 35:7:";
A35_7::test(); cout<<endl;
cout<<"Variant 35:8:";
A35_8::test(); cout<<endl;
cout<<"Variant 36:1:";
A36_1::test(); cout<<endl;
cout<<"Variant 36:2:";
A36_2::test(); cout<<endl;
cout<<"Variant 36:3:";
A36_3::test(); cout<<endl;
cout<<"Variant 36:4:";
A36_4::test(); cout<<endl;
cout<<"Variant 36:5:";
A36_5::test(); cout<<endl;
cout<<"Variant 36:6:";
A36_6::test(); cout<<endl;
cout<<"Variant 36:7:";
A36_7::test(); cout<<endl;
cout<<"Variant 36:8:";
A36_8::test(); cout<<endl;
cout<<"Variant 37:1:";
A37_1::test(); cout<<endl;
cout<<"Variant 37:2:";
A37_2::test(); cout<<endl;
cout<<"Variant 37:3:";
A37_3::test(); cout<<endl;
cout<<"Variant 37:4:";
A37_4::test(); cout<<endl;
cout<<"Variant 37:5:";
A37_5::test(); cout<<endl;
cout<<"Variant 37:6:";
A37_6::test(); cout<<endl;
cout<<"Variant 37:7:";
A37_7::test(); cout<<endl;
cout<<"Variant 37:8:";
A37_8::test(); cout<<endl;
cout<<"Variant 38:1:";
A38_1::test(); cout<<endl;
cout<<"Variant 38:2:";
A38_2::test(); cout<<endl;
cout<<"Variant 38:3:";
A38_3::test(); cout<<endl;
cout<<"Variant 38:4:";
A38_4::test(); cout<<endl;
cout<<"Variant 38:5:";
A38_5::test(); cout<<endl;
cout<<"Variant 38:6:";
A38_6::test(); cout<<endl;
cout<<"Variant 38:7:";
A38_7::test(); cout<<endl;
cout<<"Variant 38:8:";
A38_8::test(); cout<<endl;
cout<<"Variant 39:1:";
A39_1::test(); cout<<endl;
cout<<"Variant 39:2:";
A39_2::test(); cout<<endl;
cout<<"Variant 39:3:";
A39_3::test(); cout<<endl;
cout<<"Variant 39:4:";
A39_4::test(); cout<<endl;
cout<<"Variant 39:5:";
A39_5::test(); cout<<endl;
cout<<"Variant 39:6:";
A39_6::test(); cout<<endl;
cout<<"Variant 39:7:";
A39_7::test(); cout<<endl;
cout<<"Variant 39:8:";
A39_8::test(); cout<<endl;
cout<<"Variant 40:1:";
A40_1::test(); cout<<endl;
cout<<"Variant 40:2:";
A40_2::test(); cout<<endl;
cout<<"Variant 40:3:";
A40_3::test(); cout<<endl;
cout<<"Variant 40:4:";
A40_4::test(); cout<<endl;
cout<<"Variant 40:5:";
A40_5::test(); cout<<endl;
cout<<"Variant 40:6:";
A40_6::test(); cout<<endl;
cout<<"Variant 40:7:";
A40_7::test(); cout<<endl;
cout<<"Variant 40:8:";
A40_8::test(); cout<<endl;
cout<<"Variant 41:1:";
A41_1::test(); cout<<endl;
cout<<"Variant 41:2:";
A41_2::test(); cout<<endl;
cout<<"Variant 41:3:";
A41_3::test(); cout<<endl;
cout<<"Variant 41:4:";
A41_4::test(); cout<<endl;
cout<<"Variant 41:5:";
A41_5::test(); cout<<endl;
cout<<"Variant 41:6:";
A41_6::test(); cout<<endl;
cout<<"Variant 41:7:";
A41_7::test(); cout<<endl;
cout<<"Variant 41:8:";
A41_8::test(); cout<<endl;
cout<<"Variant 42:1:";
A42_1::test(); cout<<endl;
cout<<"Variant 42:2:";
A42_2::test(); cout<<endl;
cout<<"Variant 42:3:";
A42_3::test(); cout<<endl;
cout<<"Variant 42:4:";
A42_4::test(); cout<<endl;
cout<<"Variant 42:5:";
A42_5::test(); cout<<endl;
cout<<"Variant 42:6:";
A42_6::test(); cout<<endl;
cout<<"Variant 42:7:";
A42_7::test(); cout<<endl;
cout<<"Variant 42:8:";
A42_8::test(); cout<<endl;
cout<<"Variant 43:1:";
A43_1::test(); cout<<endl;
cout<<"Variant 43:2:";
A43_2::test(); cout<<endl;
cout<<"Variant 43:3:";
A43_3::test(); cout<<endl;
cout<<"Variant 43:4:";
A43_4::test(); cout<<endl;
cout<<"Variant 43:5:";
A43_5::test(); cout<<endl;
cout<<"Variant 43:6:";
A43_6::test(); cout<<endl;
cout<<"Variant 43:7:";
A43_7::test(); cout<<endl;
cout<<"Variant 43:8:";
A43_8::test(); cout<<endl;
cout<<"Variant 44:1:";
A44_1::test(); cout<<endl;
cout<<"Variant 44:2:";
A44_2::test(); cout<<endl;
cout<<"Variant 44:3:";
A44_3::test(); cout<<endl;
cout<<"Variant 44:4:";
A44_4::test(); cout<<endl;
cout<<"Variant 44:5:";
A44_5::test(); cout<<endl;
cout<<"Variant 44:6:";
A44_6::test(); cout<<endl;
cout<<"Variant 44:7:";
A44_7::test(); cout<<endl;
cout<<"Variant 44:8:";
A44_8::test(); cout<<endl;
cout<<"Variant 45:1:";
A45_1::test(); cout<<endl;
cout<<"Variant 45:2:";
A45_2::test(); cout<<endl;
cout<<"Variant 45:3:";
A45_3::test(); cout<<endl;
cout<<"Variant 45:4:";
A45_4::test(); cout<<endl;
cout<<"Variant 45:5:";
A45_5::test(); cout<<endl;
cout<<"Variant 45:6:";
A45_6::test(); cout<<endl;
cout<<"Variant 45:7:";
A45_7::test(); cout<<endl;
cout<<"Variant 45:8:";
A45_8::test(); cout<<endl;
cout<<"Variant 46:1:";
A46_1::test(); cout<<endl;
cout<<"Variant 46:2:";
A46_2::test(); cout<<endl;
cout<<"Variant 46:3:";
A46_3::test(); cout<<endl;
cout<<"Variant 46:4:";
A46_4::test(); cout<<endl;
cout<<"Variant 46:5:";
A46_5::test(); cout<<endl;
cout<<"Variant 46:6:";
A46_6::test(); cout<<endl;
cout<<"Variant 46:7:";
A46_7::test(); cout<<endl;
cout<<"Variant 46:8:";
A46_8::test(); cout<<endl;
cout<<"Variant 47:1:";
A47_1::test(); cout<<endl;
cout<<"Variant 47:2:";
A47_2::test(); cout<<endl;
cout<<"Variant 47:3:";
A47_3::test(); cout<<endl;
cout<<"Variant 47:4:";
A47_4::test(); cout<<endl;
cout<<"Variant 47:5:";
A47_5::test(); cout<<endl;
cout<<"Variant 47:6:";
A47_6::test(); cout<<endl;
cout<<"Variant 47:7:";
A47_7::test(); cout<<endl;
cout<<"Variant 47:8:";
A47_8::test(); cout<<endl;
cout<<"Variant 48:1:";
A48_1::test(); cout<<endl;
cout<<"Variant 48:2:";
A48_2::test(); cout<<endl;
cout<<"Variant 48:3:";
A48_3::test(); cout<<endl;
cout<<"Variant 48:4:";
A48_4::test(); cout<<endl;
cout<<"Variant 48:5:";
A48_5::test(); cout<<endl;
cout<<"Variant 48:6:";
A48_6::test(); cout<<endl;
cout<<"Variant 48:7:";
A48_7::test(); cout<<endl;
cout<<"Variant 48:8:";
A48_8::test(); cout<<endl;
cout<<"Variant 49:1:";
A49_1::test(); cout<<endl;
cout<<"Variant 49:2:";
A49_2::test(); cout<<endl;
cout<<"Variant 49:3:";
A49_3::test(); cout<<endl;
cout<<"Variant 49:4:";
A49_4::test(); cout<<endl;
cout<<"Variant 49:5:";
A49_5::test(); cout<<endl;
cout<<"Variant 49:6:";
A49_6::test(); cout<<endl;
cout<<"Variant 49:7:";
A49_7::test(); cout<<endl;
cout<<"Variant 49:8:";
A49_8::test(); cout<<endl;
cout<<"Variant 50:1:";
A50_1::test(); cout<<endl;
cout<<"Variant 50:2:";
A50_2::test(); cout<<endl;
cout<<"Variant 50:3:";
A50_3::test(); cout<<endl;
cout<<"Variant 50:4:";
A50_4::test(); cout<<endl;
cout<<"Variant 50:5:";
A50_5::test(); cout<<endl;
cout<<"Variant 50:6:";
A50_6::test(); cout<<endl;
cout<<"Variant 50:7:";
A50_7::test(); cout<<endl;
cout<<"Variant 50:8:";
A50_8::test(); cout<<endl;
cout<<"Variant 51:1:";
A51_1::test(); cout<<endl;
cout<<"Variant 51:2:";
A51_2::test(); cout<<endl;
cout<<"Variant 51:3:";
A51_3::test(); cout<<endl;
cout<<"Variant 51:4:";
A51_4::test(); cout<<endl;
cout<<"Variant 51:5:";
A51_5::test(); cout<<endl;
cout<<"Variant 51:6:";
A51_6::test(); cout<<endl;
cout<<"Variant 51:7:";
A51_7::test(); cout<<endl;
cout<<"Variant 51:8:";
A51_8::test(); cout<<endl;
cout<<"Variant 52:1:";
A52_1::test(); cout<<endl;
cout<<"Variant 52:2:";
A52_2::test(); cout<<endl;
cout<<"Variant 52:3:";
A52_3::test(); cout<<endl;
cout<<"Variant 52:4:";
A52_4::test(); cout<<endl;
cout<<"Variant 52:5:";
A52_5::test(); cout<<endl;
cout<<"Variant 52:6:";
A52_6::test(); cout<<endl;
cout<<"Variant 52:7:";
A52_7::test(); cout<<endl;
cout<<"Variant 52:8:";
A52_8::test(); cout<<endl;
cout<<"Variant 53:1:";
A53_1::test(); cout<<endl;
cout<<"Variant 53:2:";
A53_2::test(); cout<<endl;
cout<<"Variant 53:3:";
A53_3::test(); cout<<endl;
cout<<"Variant 53:4:";
A53_4::test(); cout<<endl;
cout<<"Variant 53:5:";
A53_5::test(); cout<<endl;
cout<<"Variant 53:6:";
A53_6::test(); cout<<endl;
cout<<"Variant 53:7:";
A53_7::test(); cout<<endl;
cout<<"Variant 53:8:";
A53_8::test(); cout<<endl;
cout<<"Variant 54:1:";
A54_1::test(); cout<<endl;
cout<<"Variant 54:2:";
A54_2::test(); cout<<endl;
cout<<"Variant 54:3:";
A54_3::test(); cout<<endl;
cout<<"Variant 54:4:";
A54_4::test(); cout<<endl;
cout<<"Variant 54:5:";
A54_5::test(); cout<<endl;
cout<<"Variant 54:6:";
A54_6::test(); cout<<endl;
cout<<"Variant 54:7:";
A54_7::test(); cout<<endl;
cout<<"Variant 54:8:";
A54_8::test(); cout<<endl;
cout<<"Variant 55:1:";
A55_1::test(); cout<<endl;
cout<<"Variant 55:2:";
A55_2::test(); cout<<endl;
cout<<"Variant 55:3:";
A55_3::test(); cout<<endl;
cout<<"Variant 55:4:";
A55_4::test(); cout<<endl;
cout<<"Variant 55:5:";
A55_5::test(); cout<<endl;
cout<<"Variant 55:6:";
A55_6::test(); cout<<endl;
cout<<"Variant 55:7:";
A55_7::test(); cout<<endl;
cout<<"Variant 55:8:";
A55_8::test(); cout<<endl;
cout<<"Variant 56:1:";
A56_1::test(); cout<<endl;
cout<<"Variant 56:2:";
A56_2::test(); cout<<endl;
cout<<"Variant 56:3:";
A56_3::test(); cout<<endl;
cout<<"Variant 56:4:";
A56_4::test(); cout<<endl;
cout<<"Variant 56:5:";
A56_5::test(); cout<<endl;
cout<<"Variant 56:6:";
A56_6::test(); cout<<endl;
cout<<"Variant 56:7:";
A56_7::test(); cout<<endl;
cout<<"Variant 56:8:";
A56_8::test(); cout<<endl;
cout<<"Variant 57:1:";
A57_1::test(); cout<<endl;
cout<<"Variant 57:2:";
A57_2::test(); cout<<endl;
cout<<"Variant 57:3:";
A57_3::test(); cout<<endl;
cout<<"Variant 57:4:";
A57_4::test(); cout<<endl;
cout<<"Variant 57:5:";
A57_5::test(); cout<<endl;
cout<<"Variant 57:6:";
A57_6::test(); cout<<endl;
cout<<"Variant 57:7:";
A57_7::test(); cout<<endl;
cout<<"Variant 57:8:";
A57_8::test(); cout<<endl;
cout<<"Variant 58:1:";
A58_1::test(); cout<<endl;
cout<<"Variant 58:2:";
A58_2::test(); cout<<endl;
cout<<"Variant 58:3:";
A58_3::test(); cout<<endl;
cout<<"Variant 58:4:";
A58_4::test(); cout<<endl;
cout<<"Variant 58:5:";
A58_5::test(); cout<<endl;
cout<<"Variant 58:6:";
A58_6::test(); cout<<endl;
cout<<"Variant 58:7:";
A58_7::test(); cout<<endl;
cout<<"Variant 58:8:";
A58_8::test(); cout<<endl;
cout<<"Variant 59:1:";
A59_1::test(); cout<<endl;
cout<<"Variant 59:2:";
A59_2::test(); cout<<endl;
cout<<"Variant 59:3:";
A59_3::test(); cout<<endl;
cout<<"Variant 59:4:";
A59_4::test(); cout<<endl;
cout<<"Variant 59:5:";
A59_5::test(); cout<<endl;
cout<<"Variant 59:6:";
A59_6::test(); cout<<endl;
cout<<"Variant 59:7:";
A59_7::test(); cout<<endl;
cout<<"Variant 59:8:";
A59_8::test(); cout<<endl;
cout<<"Variant 60:1:";
A60_1::test(); cout<<endl;
cout<<"Variant 60:2:";
A60_2::test(); cout<<endl;
cout<<"Variant 60:3:";
A60_3::test(); cout<<endl;
cout<<"Variant 60:4:";
A60_4::test(); cout<<endl;
cout<<"Variant 60:5:";
A60_5::test(); cout<<endl;
cout<<"Variant 60:6:";
A60_6::test(); cout<<endl;
cout<<"Variant 60:7:";
A60_7::test(); cout<<endl;
cout<<"Variant 60:8:";
A60_8::test(); cout<<endl;
cout<<"Variant 61:1:";
A61_1::test(); cout<<endl;
cout<<"Variant 61:2:";
A61_2::test(); cout<<endl;
cout<<"Variant 61:3:";
A61_3::test(); cout<<endl;
cout<<"Variant 61:4:";
A61_4::test(); cout<<endl;
cout<<"Variant 61:5:";
A61_5::test(); cout<<endl;
cout<<"Variant 61:6:";
A61_6::test(); cout<<endl;
cout<<"Variant 61:7:";
A61_7::test(); cout<<endl;
cout<<"Variant 61:8:";
A61_8::test(); cout<<endl;
cout<<"Variant 62:1:";
A62_1::test(); cout<<endl;
cout<<"Variant 62:2:";
A62_2::test(); cout<<endl;
cout<<"Variant 62:3:";
A62_3::test(); cout<<endl;
cout<<"Variant 62:4:";
A62_4::test(); cout<<endl;
cout<<"Variant 62:5:";
A62_5::test(); cout<<endl;
cout<<"Variant 62:6:";
A62_6::test(); cout<<endl;
cout<<"Variant 62:7:";
A62_7::test(); cout<<endl;
cout<<"Variant 62:8:";
A62_8::test(); cout<<endl;
cout<<"Variant 63:1:";
A63_1::test(); cout<<endl;
cout<<"Variant 63:2:";
A63_2::test(); cout<<endl;
cout<<"Variant 63:3:";
A63_3::test(); cout<<endl;
cout<<"Variant 63:4:";
A63_4::test(); cout<<endl;
cout<<"Variant 63:5:";
A63_5::test(); cout<<endl;
cout<<"Variant 63:6:";
A63_6::test(); cout<<endl;
cout<<"Variant 63:7:";
A63_7::test(); cout<<endl;
cout<<"Variant 63:8:";
A63_8::test(); cout<<endl;
cout<<"Variant 64:1:";
A64_1::test(); cout<<endl;
cout<<"Variant 64:2:";
A64_2::test(); cout<<endl;
cout<<"Variant 64:3:";
A64_3::test(); cout<<endl;
cout<<"Variant 64:4:";
A64_4::test(); cout<<endl;
cout<<"Variant 64:5:";
A64_5::test(); cout<<endl;
cout<<"Variant 64:6:";
A64_6::test(); cout<<endl;
cout<<"Variant 64:7:";
A64_7::test(); cout<<endl;
cout<<"Variant 64:8:";
A64_8::test(); cout<<endl;
cout<<"Variant 65:1:";
A65_1::test(); cout<<endl;
cout<<"Variant 65:2:";
A65_2::test(); cout<<endl;
cout<<"Variant 65:3:";
A65_3::test(); cout<<endl;
cout<<"Variant 65:4:";
A65_4::test(); cout<<endl;
cout<<"Variant 65:5:";
A65_5::test(); cout<<endl;
cout<<"Variant 65:6:";
A65_6::test(); cout<<endl;
cout<<"Variant 65:7:";
A65_7::test(); cout<<endl;
cout<<"Variant 65:8:";
A65_8::test(); cout<<endl;
cout<<"Variant 66:1:";
A66_1::test(); cout<<endl;
cout<<"Variant 66:2:";
A66_2::test(); cout<<endl;
cout<<"Variant 66:3:";
A66_3::test(); cout<<endl;
cout<<"Variant 66:4:";
A66_4::test(); cout<<endl;
cout<<"Variant 66:5:";
A66_5::test(); cout<<endl;
cout<<"Variant 66:6:";
A66_6::test(); cout<<endl;
cout<<"Variant 66:7:";
A66_7::test(); cout<<endl;
cout<<"Variant 66:8:";
A66_8::test(); cout<<endl;
cout<<"Variant 67:1:";
A67_1::test(); cout<<endl;
cout<<"Variant 67:2:";
A67_2::test(); cout<<endl;
cout<<"Variant 67:3:";
A67_3::test(); cout<<endl;
cout<<"Variant 67:4:";
A67_4::test(); cout<<endl;
cout<<"Variant 67:5:";
A67_5::test(); cout<<endl;
cout<<"Variant 67:6:";
A67_6::test(); cout<<endl;
cout<<"Variant 67:7:";
A67_7::test(); cout<<endl;
cout<<"Variant 67:8:";
A67_8::test(); cout<<endl;
cout<<"Variant 68:1:";
A68_1::test(); cout<<endl;
cout<<"Variant 68:2:";
A68_2::test(); cout<<endl;
cout<<"Variant 68:3:";
A68_3::test(); cout<<endl;
cout<<"Variant 68:4:";
A68_4::test(); cout<<endl;
cout<<"Variant 68:5:";
A68_5::test(); cout<<endl;
cout<<"Variant 68:6:";
A68_6::test(); cout<<endl;
cout<<"Variant 68:7:";
A68_7::test(); cout<<endl;
cout<<"Variant 68:8:";
A68_8::test(); cout<<endl;
cout<<"Variant 69:1:";
A69_1::test(); cout<<endl;
cout<<"Variant 69:2:";
A69_2::test(); cout<<endl;
cout<<"Variant 69:3:";
A69_3::test(); cout<<endl;
cout<<"Variant 69:4:";
A69_4::test(); cout<<endl;
cout<<"Variant 69:5:";
A69_5::test(); cout<<endl;
cout<<"Variant 69:6:";
A69_6::test(); cout<<endl;
cout<<"Variant 69:7:";
A69_7::test(); cout<<endl;
cout<<"Variant 69:8:";
A69_8::test(); cout<<endl;
cout<<"Variant 70:1:";
A70_1::test(); cout<<endl;
cout<<"Variant 70:2:";
A70_2::test(); cout<<endl;
cout<<"Variant 70:3:";
A70_3::test(); cout<<endl;
cout<<"Variant 70:4:";
A70_4::test(); cout<<endl;
cout<<"Variant 70:5:";
A70_5::test(); cout<<endl;
cout<<"Variant 70:6:";
A70_6::test(); cout<<endl;
cout<<"Variant 70:7:";
A70_7::test(); cout<<endl;
cout<<"Variant 70:8:";
A70_8::test(); cout<<endl;
cout<<"Variant 71:1:";
A71_1::test(); cout<<endl;
cout<<"Variant 71:2:";
A71_2::test(); cout<<endl;
cout<<"Variant 71:3:";
A71_3::test(); cout<<endl;
cout<<"Variant 71:4:";
A71_4::test(); cout<<endl;
cout<<"Variant 71:5:";
A71_5::test(); cout<<endl;
cout<<"Variant 71:6:";
A71_6::test(); cout<<endl;
cout<<"Variant 71:7:";
A71_7::test(); cout<<endl;
cout<<"Variant 71:8:";
A71_8::test(); cout<<endl;
cout<<"Variant 72:1:";
A72_1::test(); cout<<endl;
cout<<"Variant 72:2:";
A72_2::test(); cout<<endl;
cout<<"Variant 72:3:";
A72_3::test(); cout<<endl;
cout<<"Variant 72:4:";
A72_4::test(); cout<<endl;
cout<<"Variant 72:5:";
A72_5::test(); cout<<endl;
cout<<"Variant 72:6:";
A72_6::test(); cout<<endl;
cout<<"Variant 72:7:";
A72_7::test(); cout<<endl;
cout<<"Variant 72:8:";
A72_8::test(); cout<<endl;
cout<<"Variant 73:1:";
A73_1::test(); cout<<endl;
cout<<"Variant 73:2:";
A73_2::test(); cout<<endl;
cout<<"Variant 73:3:";
A73_3::test(); cout<<endl;
cout<<"Variant 73:4:";
A73_4::test(); cout<<endl;
cout<<"Variant 73:5:";
A73_5::test(); cout<<endl;
cout<<"Variant 73:6:";
A73_6::test(); cout<<endl;
cout<<"Variant 73:7:";
A73_7::test(); cout<<endl;
cout<<"Variant 73:8:";
A73_8::test(); cout<<endl;
cout<<"Variant 74:1:";
A74_1::test(); cout<<endl;
cout<<"Variant 74:2:";
A74_2::test(); cout<<endl;
cout<<"Variant 74:3:";
A74_3::test(); cout<<endl;
cout<<"Variant 74:4:";
A74_4::test(); cout<<endl;
cout<<"Variant 74:5:";
A74_5::test(); cout<<endl;
cout<<"Variant 74:6:";
A74_6::test(); cout<<endl;
cout<<"Variant 74:7:";
A74_7::test(); cout<<endl;
cout<<"Variant 74:8:";
A74_8::test(); cout<<endl;
cout<<"Variant 75:1:";
A75_1::test(); cout<<endl;
cout<<"Variant 75:2:";
A75_2::test(); cout<<endl;
cout<<"Variant 75:3:";
A75_3::test(); cout<<endl;
cout<<"Variant 75:4:";
A75_4::test(); cout<<endl;
cout<<"Variant 75:5:";
A75_5::test(); cout<<endl;
cout<<"Variant 75:6:";
A75_6::test(); cout<<endl;
cout<<"Variant 75:7:";
A75_7::test(); cout<<endl;
cout<<"Variant 75:8:";
A75_8::test(); cout<<endl;
cout<<"Variant 76:1:";
A76_1::test(); cout<<endl;
cout<<"Variant 76:2:";
A76_2::test(); cout<<endl;
cout<<"Variant 76:3:";
A76_3::test(); cout<<endl;
cout<<"Variant 76:4:";
A76_4::test(); cout<<endl;
cout<<"Variant 76:5:";
A76_5::test(); cout<<endl;
cout<<"Variant 76:6:";
A76_6::test(); cout<<endl;
cout<<"Variant 76:7:";
A76_7::test(); cout<<endl;
cout<<"Variant 76:8:";
A76_8::test(); cout<<endl;
cout<<"Variant 77:1:";
A77_1::test(); cout<<endl;
cout<<"Variant 77:2:";
A77_2::test(); cout<<endl;
cout<<"Variant 77:3:";
A77_3::test(); cout<<endl;
cout<<"Variant 77:4:";
A77_4::test(); cout<<endl;
cout<<"Variant 77:5:";
A77_5::test(); cout<<endl;
cout<<"Variant 77:6:";
A77_6::test(); cout<<endl;
cout<<"Variant 77:7:";
A77_7::test(); cout<<endl;
cout<<"Variant 77:8:";
A77_8::test(); cout<<endl;
cout<<"Variant 78:1:";
A78_1::test(); cout<<endl;
cout<<"Variant 78:2:";
A78_2::test(); cout<<endl;
cout<<"Variant 78:3:";
A78_3::test(); cout<<endl;
cout<<"Variant 78:4:";
A78_4::test(); cout<<endl;
cout<<"Variant 78:5:";
A78_5::test(); cout<<endl;
cout<<"Variant 78:6:";
A78_6::test(); cout<<endl;
cout<<"Variant 78:7:";
A78_7::test(); cout<<endl;
cout<<"Variant 78:8:";
A78_8::test(); cout<<endl;
cout<<"Variant 79:1:";
A79_1::test(); cout<<endl;
cout<<"Variant 79:2:";
A79_2::test(); cout<<endl;
cout<<"Variant 79:3:";
A79_3::test(); cout<<endl;
cout<<"Variant 79:4:";
A79_4::test(); cout<<endl;
cout<<"Variant 79:5:";
A79_5::test(); cout<<endl;
cout<<"Variant 79:6:";
A79_6::test(); cout<<endl;
cout<<"Variant 79:7:";
A79_7::test(); cout<<endl;
cout<<"Variant 79:8:";
A79_8::test(); cout<<endl;
cout<<"Variant 80:1:";
A80_1::test(); cout<<endl;
cout<<"Variant 80:2:";
A80_2::test(); cout<<endl;
cout<<"Variant 80:3:";
A80_3::test(); cout<<endl;
cout<<"Variant 80:4:";
A80_4::test(); cout<<endl;
cout<<"Variant 80:5:";
A80_5::test(); cout<<endl;
cout<<"Variant 80:6:";
A80_6::test(); cout<<endl;
cout<<"Variant 80:7:";
A80_7::test(); cout<<endl;
cout<<"Variant 80:8:";
A80_8::test(); cout<<endl;
cout<<"Variant 81:1:";
A81_1::test(); cout<<endl;
cout<<"Variant 81:2:";
A81_2::test(); cout<<endl;
cout<<"Variant 81:3:";
A81_3::test(); cout<<endl;
cout<<"Variant 81:4:";
A81_4::test(); cout<<endl;
cout<<"Variant 81:5:";
A81_5::test(); cout<<endl;
cout<<"Variant 81:6:";
A81_6::test(); cout<<endl;
cout<<"Variant 81:7:";
A81_7::test(); cout<<endl;
cout<<"Variant 81:8:";
A81_8::test(); cout<<endl;
cout<<"Variant 82:1:";
A82_1::test(); cout<<endl;
cout<<"Variant 82:2:";
A82_2::test(); cout<<endl;
cout<<"Variant 82:3:";
A82_3::test(); cout<<endl;
cout<<"Variant 82:4:";
A82_4::test(); cout<<endl;
cout<<"Variant 82:5:";
A82_5::test(); cout<<endl;
cout<<"Variant 82:6:";
A82_6::test(); cout<<endl;
cout<<"Variant 82:7:";
A82_7::test(); cout<<endl;
cout<<"Variant 82:8:";
A82_8::test(); cout<<endl;
cout<<"Variant 83:1:";
A83_1::test(); cout<<endl;
cout<<"Variant 83:2:";
A83_2::test(); cout<<endl;
cout<<"Variant 83:3:";
A83_3::test(); cout<<endl;
cout<<"Variant 83:4:";
A83_4::test(); cout<<endl;
cout<<"Variant 83:5:";
A83_5::test(); cout<<endl;
cout<<"Variant 83:6:";
A83_6::test(); cout<<endl;
cout<<"Variant 83:7:";
A83_7::test(); cout<<endl;
cout<<"Variant 83:8:";
A83_8::test(); cout<<endl;
cout<<"Variant 84:1:";
A84_1::test(); cout<<endl;
cout<<"Variant 84:2:";
A84_2::test(); cout<<endl;
cout<<"Variant 84:3:";
A84_3::test(); cout<<endl;
cout<<"Variant 84:4:";
A84_4::test(); cout<<endl;
cout<<"Variant 84:5:";
A84_5::test(); cout<<endl;
cout<<"Variant 84:6:";
A84_6::test(); cout<<endl;
cout<<"Variant 84:7:";
A84_7::test(); cout<<endl;
cout<<"Variant 84:8:";
A84_8::test(); cout<<endl;
cout<<"Variant 85:1:";
A85_1::test(); cout<<endl;
cout<<"Variant 85:2:";
A85_2::test(); cout<<endl;
cout<<"Variant 85:3:";
A85_3::test(); cout<<endl;
cout<<"Variant 85:4:";
A85_4::test(); cout<<endl;
cout<<"Variant 85:5:";
A85_5::test(); cout<<endl;
cout<<"Variant 85:6:";
A85_6::test(); cout<<endl;
cout<<"Variant 85:7:";
A85_7::test(); cout<<endl;
cout<<"Variant 85:8:";
A85_8::test(); cout<<endl;
cout<<"Variant 86:1:";
A86_1::test(); cout<<endl;
cout<<"Variant 86:2:";
A86_2::test(); cout<<endl;
cout<<"Variant 86:3:";
A86_3::test(); cout<<endl;
cout<<"Variant 86:4:";
A86_4::test(); cout<<endl;
cout<<"Variant 86:5:";
A86_5::test(); cout<<endl;
cout<<"Variant 86:6:";
A86_6::test(); cout<<endl;
cout<<"Variant 86:7:";
A86_7::test(); cout<<endl;
cout<<"Variant 86:8:";
A86_8::test(); cout<<endl;
cout<<"Variant 87:1:";
A87_1::test(); cout<<endl;
cout<<"Variant 87:2:";
A87_2::test(); cout<<endl;
cout<<"Variant 87:3:";
A87_3::test(); cout<<endl;
cout<<"Variant 87:4:";
A87_4::test(); cout<<endl;
cout<<"Variant 87:5:";
A87_5::test(); cout<<endl;
cout<<"Variant 87:6:";
A87_6::test(); cout<<endl;
cout<<"Variant 87:7:";
A87_7::test(); cout<<endl;
cout<<"Variant 87:8:";
A87_8::test(); cout<<endl;
cout<<"Variant 88:1:";
A88_1::test(); cout<<endl;
cout<<"Variant 88:2:";
A88_2::test(); cout<<endl;
cout<<"Variant 88:3:";
A88_3::test(); cout<<endl;
cout<<"Variant 88:4:";
A88_4::test(); cout<<endl;
cout<<"Variant 88:5:";
A88_5::test(); cout<<endl;
cout<<"Variant 88:6:";
A88_6::test(); cout<<endl;
cout<<"Variant 88:7:";
A88_7::test(); cout<<endl;
cout<<"Variant 88:8:";
A88_8::test(); cout<<endl;
cout<<"Variant 89:1:";
A89_1::test(); cout<<endl;
cout<<"Variant 89:2:";
A89_2::test(); cout<<endl;
cout<<"Variant 89:3:";
A89_3::test(); cout<<endl;
cout<<"Variant 89:4:";
A89_4::test(); cout<<endl;
cout<<"Variant 89:5:";
A89_5::test(); cout<<endl;
cout<<"Variant 89:6:";
A89_6::test(); cout<<endl;
cout<<"Variant 89:7:";
A89_7::test(); cout<<endl;
cout<<"Variant 89:8:";
A89_8::test(); cout<<endl;
cout<<"Variant 90:1:";
A90_1::test(); cout<<endl;
cout<<"Variant 90:2:";
A90_2::test(); cout<<endl;
cout<<"Variant 90:3:";
A90_3::test(); cout<<endl;
cout<<"Variant 90:4:";
A90_4::test(); cout<<endl;
cout<<"Variant 90:5:";
A90_5::test(); cout<<endl;
cout<<"Variant 90:6:";
A90_6::test(); cout<<endl;
cout<<"Variant 90:7:";
A90_7::test(); cout<<endl;
cout<<"Variant 90:8:";
A90_8::test(); cout<<endl;
cout<<"Variant 91:1:";
A91_1::test(); cout<<endl;
cout<<"Variant 91:2:";
A91_2::test(); cout<<endl;
cout<<"Variant 91:3:";
A91_3::test(); cout<<endl;
cout<<"Variant 91:4:";
A91_4::test(); cout<<endl;
cout<<"Variant 91:5:";
A91_5::test(); cout<<endl;
cout<<"Variant 91:6:";
A91_6::test(); cout<<endl;
cout<<"Variant 91:7:";
A91_7::test(); cout<<endl;
cout<<"Variant 91:8:";
A91_8::test(); cout<<endl;
cout<<"Variant 92:1:";
A92_1::test(); cout<<endl;
cout<<"Variant 92:2:";
A92_2::test(); cout<<endl;
cout<<"Variant 92:3:";
A92_3::test(); cout<<endl;
cout<<"Variant 92:4:";
A92_4::test(); cout<<endl;
cout<<"Variant 92:5:";
A92_5::test(); cout<<endl;
cout<<"Variant 92:6:";
A92_6::test(); cout<<endl;
cout<<"Variant 92:7:";
A92_7::test(); cout<<endl;
cout<<"Variant 92:8:";
A92_8::test(); cout<<endl;
cout<<"Variant 93:1:";
A93_1::test(); cout<<endl;
cout<<"Variant 93:2:";
A93_2::test(); cout<<endl;
cout<<"Variant 93:3:";
A93_3::test(); cout<<endl;
cout<<"Variant 93:4:";
A93_4::test(); cout<<endl;
cout<<"Variant 93:5:";
A93_5::test(); cout<<endl;
cout<<"Variant 93:6:";
A93_6::test(); cout<<endl;
cout<<"Variant 93:7:";
A93_7::test(); cout<<endl;
cout<<"Variant 93:8:";
A93_8::test(); cout<<endl;
cout<<"Variant 94:1:";
A94_1::test(); cout<<endl;
cout<<"Variant 94:2:";
A94_2::test(); cout<<endl;
cout<<"Variant 94:3:";
A94_3::test(); cout<<endl;
cout<<"Variant 94:4:";
A94_4::test(); cout<<endl;
cout<<"Variant 94:5:";
A94_5::test(); cout<<endl;
cout<<"Variant 94:6:";
A94_6::test(); cout<<endl;
cout<<"Variant 94:7:";
A94_7::test(); cout<<endl;
cout<<"Variant 94:8:";
A94_8::test(); cout<<endl;
cout<<"Variant 95:1:";
A95_1::test(); cout<<endl;
cout<<"Variant 95:2:";
A95_2::test(); cout<<endl;
cout<<"Variant 95:3:";
A95_3::test(); cout<<endl;
cout<<"Variant 95:4:";
A95_4::test(); cout<<endl;
cout<<"Variant 95:5:";
A95_5::test(); cout<<endl;
cout<<"Variant 95:6:";
A95_6::test(); cout<<endl;
cout<<"Variant 95:7:";
A95_7::test(); cout<<endl;
cout<<"Variant 95:8:";
A95_8::test(); cout<<endl;
cout<<"Variant 96:1:";
A96_1::test(); cout<<endl;
cout<<"Variant 96:2:";
A96_2::test(); cout<<endl;
cout<<"Variant 96:3:";
A96_3::test(); cout<<endl;
cout<<"Variant 96:4:";
A96_4::test(); cout<<endl;
cout<<"Variant 96:5:";
A96_5::test(); cout<<endl;
cout<<"Variant 96:6:";
A96_6::test(); cout<<endl;
cout<<"Variant 96:7:";
A96_7::test(); cout<<endl;
cout<<"Variant 96:8:";
A96_8::test(); cout<<endl;
cout<<"Variant 97:1:";
A97_1::test(); cout<<endl;
cout<<"Variant 97:2:";
A97_2::test(); cout<<endl;
cout<<"Variant 97:3:";
A97_3::test(); cout<<endl;
cout<<"Variant 97:4:";
A97_4::test(); cout<<endl;
cout<<"Variant 97:5:";
A97_5::test(); cout<<endl;
cout<<"Variant 97:6:";
A97_6::test(); cout<<endl;
cout<<"Variant 97:7:";
A97_7::test(); cout<<endl;
cout<<"Variant 97:8:";
A97_8::test(); cout<<endl;
cout<<"Variant 98:1:";
A98_1::test(); cout<<endl;
cout<<"Variant 98:2:";
A98_2::test(); cout<<endl;
cout<<"Variant 98:3:";
A98_3::test(); cout<<endl;
cout<<"Variant 98:4:";
A98_4::test(); cout<<endl;
cout<<"Variant 98:5:";
A98_5::test(); cout<<endl;
cout<<"Variant 98:6:";
A98_6::test(); cout<<endl;
cout<<"Variant 98:7:";
A98_7::test(); cout<<endl;
cout<<"Variant 98:8:";
A98_8::test(); cout<<endl;
cout<<"Variant 99:1:";
A99_1::test(); cout<<endl;
cout<<"Variant 99:2:";
A99_2::test(); cout<<endl;
cout<<"Variant 99:3:";
A99_3::test(); cout<<endl;
cout<<"Variant 99:4:";
A99_4::test(); cout<<endl;
cout<<"Variant 99:5:";
A99_5::test(); cout<<endl;
cout<<"Variant 99:6:";
A99_6::test(); cout<<endl;
cout<<"Variant 99:7:";
A99_7::test(); cout<<endl;
cout<<"Variant 99:8:";
A99_8::test(); cout<<endl;
cout<<"Variant 100:1:";
A100_1::test(); cout<<endl;
cout<<"Variant 100:2:";
A100_2::test(); cout<<endl;
cout<<"Variant 100:3:";
A100_3::test(); cout<<endl;
cout<<"Variant 100:4:";
A100_4::test(); cout<<endl;
cout<<"Variant 100:5:";
A100_5::test(); cout<<endl;
cout<<"Variant 100:6:";
A100_6::test(); cout<<endl;
cout<<"Variant 100:7:";
A100_7::test(); cout<<endl;
cout<<"Variant 100:8:";
A100_8::test(); cout<<endl;
cout<<"Variant 101:1:";
A101_1::test(); cout<<endl;
cout<<"Variant 101:2:";
A101_2::test(); cout<<endl;
cout<<"Variant 101:3:";
A101_3::test(); cout<<endl;
cout<<"Variant 101:4:";
A101_4::test(); cout<<endl;
cout<<"Variant 101:5:";
A101_5::test(); cout<<endl;
cout<<"Variant 101:6:";
A101_6::test(); cout<<endl;
cout<<"Variant 101:7:";
A101_7::test(); cout<<endl;
cout<<"Variant 101:8:";
A101_8::test(); cout<<endl;
cout<<"Variant 102:1:";
A102_1::test(); cout<<endl;
cout<<"Variant 102:2:";
A102_2::test(); cout<<endl;
cout<<"Variant 102:3:";
A102_3::test(); cout<<endl;
cout<<"Variant 102:4:";
A102_4::test(); cout<<endl;
cout<<"Variant 102:5:";
A102_5::test(); cout<<endl;
cout<<"Variant 102:6:";
A102_6::test(); cout<<endl;
cout<<"Variant 102:7:";
A102_7::test(); cout<<endl;
cout<<"Variant 102:8:";
A102_8::test(); cout<<endl;
cout<<"Variant 103:1:";
A103_1::test(); cout<<endl;
cout<<"Variant 103:2:";
A103_2::test(); cout<<endl;
cout<<"Variant 103:3:";
A103_3::test(); cout<<endl;
cout<<"Variant 103:4:";
A103_4::test(); cout<<endl;
cout<<"Variant 103:5:";
A103_5::test(); cout<<endl;
cout<<"Variant 103:6:";
A103_6::test(); cout<<endl;
cout<<"Variant 103:7:";
A103_7::test(); cout<<endl;
cout<<"Variant 103:8:";
A103_8::test(); cout<<endl;
cout<<"Variant 104:1:";
A104_1::test(); cout<<endl;
cout<<"Variant 104:2:";
A104_2::test(); cout<<endl;
cout<<"Variant 104:3:";
A104_3::test(); cout<<endl;
cout<<"Variant 104:4:";
A104_4::test(); cout<<endl;
cout<<"Variant 104:5:";
A104_5::test(); cout<<endl;
cout<<"Variant 104:6:";
A104_6::test(); cout<<endl;
cout<<"Variant 104:7:";
A104_7::test(); cout<<endl;
cout<<"Variant 104:8:";
A104_8::test(); cout<<endl;
cout<<"Variant 105:1:";
A105_1::test(); cout<<endl;
cout<<"Variant 105:2:";
A105_2::test(); cout<<endl;
cout<<"Variant 105:3:";
A105_3::test(); cout<<endl;
cout<<"Variant 105:4:";
A105_4::test(); cout<<endl;
cout<<"Variant 105:5:";
A105_5::test(); cout<<endl;
cout<<"Variant 105:6:";
A105_6::test(); cout<<endl;
cout<<"Variant 105:7:";
A105_7::test(); cout<<endl;
cout<<"Variant 105:8:";
A105_8::test(); cout<<endl;
cout<<"Variant 106:1:";
A106_1::test(); cout<<endl;
cout<<"Variant 106:2:";
A106_2::test(); cout<<endl;
cout<<"Variant 106:3:";
A106_3::test(); cout<<endl;
cout<<"Variant 106:4:";
A106_4::test(); cout<<endl;
cout<<"Variant 106:5:";
A106_5::test(); cout<<endl;
cout<<"Variant 106:6:";
A106_6::test(); cout<<endl;
cout<<"Variant 106:7:";
A106_7::test(); cout<<endl;
cout<<"Variant 106:8:";
A106_8::test(); cout<<endl;
cout<<"Variant 107:1:";
A107_1::test(); cout<<endl;
cout<<"Variant 107:2:";
A107_2::test(); cout<<endl;
cout<<"Variant 107:3:";
A107_3::test(); cout<<endl;
cout<<"Variant 107:4:";
A107_4::test(); cout<<endl;
cout<<"Variant 107:5:";
A107_5::test(); cout<<endl;
cout<<"Variant 107:6:";
A107_6::test(); cout<<endl;
cout<<"Variant 107:7:";
A107_7::test(); cout<<endl;
cout<<"Variant 107:8:";
A107_8::test(); cout<<endl;
cout<<"Variant 108:1:";
A108_1::test(); cout<<endl;
cout<<"Variant 108:2:";
A108_2::test(); cout<<endl;
cout<<"Variant 108:3:";
A108_3::test(); cout<<endl;
cout<<"Variant 108:4:";
A108_4::test(); cout<<endl;
cout<<"Variant 108:5:";
A108_5::test(); cout<<endl;
cout<<"Variant 108:6:";
A108_6::test(); cout<<endl;
cout<<"Variant 108:7:";
A108_7::test(); cout<<endl;
cout<<"Variant 108:8:";
A108_8::test(); cout<<endl;
cout<<"Variant 109:1:";
A109_1::test(); cout<<endl;
cout<<"Variant 109:2:";
A109_2::test(); cout<<endl;
cout<<"Variant 109:3:";
A109_3::test(); cout<<endl;
cout<<"Variant 109:4:";
A109_4::test(); cout<<endl;
cout<<"Variant 109:5:";
A109_5::test(); cout<<endl;
cout<<"Variant 109:6:";
A109_6::test(); cout<<endl;
cout<<"Variant 109:7:";
A109_7::test(); cout<<endl;
cout<<"Variant 109:8:";
A109_8::test(); cout<<endl;
cout<<"Variant 110:1:";
A110_1::test(); cout<<endl;
cout<<"Variant 110:2:";
A110_2::test(); cout<<endl;
cout<<"Variant 110:3:";
A110_3::test(); cout<<endl;
cout<<"Variant 110:4:";
A110_4::test(); cout<<endl;
cout<<"Variant 110:5:";
A110_5::test(); cout<<endl;
cout<<"Variant 110:6:";
A110_6::test(); cout<<endl;
cout<<"Variant 110:7:";
A110_7::test(); cout<<endl;
cout<<"Variant 110:8:";
A110_8::test(); cout<<endl;
cout<<"Variant 111:1:";
A111_1::test(); cout<<endl;
cout<<"Variant 111:2:";
A111_2::test(); cout<<endl;
cout<<"Variant 111:3:";
A111_3::test(); cout<<endl;
cout<<"Variant 111:4:";
A111_4::test(); cout<<endl;
cout<<"Variant 111:5:";
A111_5::test(); cout<<endl;
cout<<"Variant 111:6:";
A111_6::test(); cout<<endl;
cout<<"Variant 111:7:";
A111_7::test(); cout<<endl;
cout<<"Variant 111:8:";
A111_8::test(); cout<<endl;
cout<<"Variant 112:1:";
A112_1::test(); cout<<endl;
cout<<"Variant 112:2:";
A112_2::test(); cout<<endl;
cout<<"Variant 112:3:";
A112_3::test(); cout<<endl;
cout<<"Variant 112:4:";
A112_4::test(); cout<<endl;
cout<<"Variant 112:5:";
A112_5::test(); cout<<endl;
cout<<"Variant 112:6:";
A112_6::test(); cout<<endl;
cout<<"Variant 112:7:";
A112_7::test(); cout<<endl;
cout<<"Variant 112:8:";
A112_8::test(); cout<<endl;
cout<<"Variant 113:1:";
A113_1::test(); cout<<endl;
cout<<"Variant 113:2:";
A113_2::test(); cout<<endl;
cout<<"Variant 113:3:";
A113_3::test(); cout<<endl;
cout<<"Variant 113:4:";
A113_4::test(); cout<<endl;
cout<<"Variant 113:5:";
A113_5::test(); cout<<endl;
cout<<"Variant 113:6:";
A113_6::test(); cout<<endl;
cout<<"Variant 113:7:";
A113_7::test(); cout<<endl;
cout<<"Variant 113:8:";
A113_8::test(); cout<<endl;
cout<<"Variant 114:1:";
A114_1::test(); cout<<endl;
cout<<"Variant 114:2:";
A114_2::test(); cout<<endl;
cout<<"Variant 114:3:";
A114_3::test(); cout<<endl;
cout<<"Variant 114:4:";
A114_4::test(); cout<<endl;
cout<<"Variant 114:5:";
A114_5::test(); cout<<endl;
cout<<"Variant 114:6:";
A114_6::test(); cout<<endl;
cout<<"Variant 114:7:";
A114_7::test(); cout<<endl;
cout<<"Variant 114:8:";
A114_8::test(); cout<<endl;
cout<<"Variant 115:1:";
A115_1::test(); cout<<endl;
cout<<"Variant 115:2:";
A115_2::test(); cout<<endl;
cout<<"Variant 115:3:";
A115_3::test(); cout<<endl;
cout<<"Variant 115:4:";
A115_4::test(); cout<<endl;
cout<<"Variant 115:5:";
A115_5::test(); cout<<endl;
cout<<"Variant 115:6:";
A115_6::test(); cout<<endl;
cout<<"Variant 115:7:";
A115_7::test(); cout<<endl;
cout<<"Variant 115:8:";
A115_8::test(); cout<<endl;

    return 0;
    }
    
