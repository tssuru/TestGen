#include <iostream>
using namespace std;    

namespace A1_1{
void test(){cout << 8 % 12 % 10 * 3;}

}
namespace A1_2{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' 
  << ":" << d;}

}
namespace A1_3{
void test(){cout 
  << ( 4.0<=7 && ! 8.0> true || 6==4);}

}
namespace A1_4{
bool f(int n){
  cout<<"f";
  return n>3;
}
int test(){
  cout<<(f(-6) and f(8));
  return 0;
}
}
namespace A1_5{
void test(){cout << (2 != 2.0 <= true >= 6);}

}
namespace A1_6{
void test(){if (3 != 4)
  cout << "b";
else
  cout << "y";}

}
namespace A1_7{
int h(int a){
  int w = 17;
  if (a)
    w = 1;
  else if (a == 1)
     return 3;
  else
     return 7;
  return w;
}
int test(){
  cout << h(-6);
  return 0;
}
}
namespace A1_8{
int f(int &x, int &y){
  x = 8;
  y-= 9;
  return y;
}
int test(){
  int a = 1, b = 3;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 6;
    cout << ((b>4) || ((a-=2) >= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A1_9{
int a = 1, b = 2, c = 9;
int h(int &a){
 int c;
 a = 5;
 b -= 4;
 c = 2;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 8;
 c = 4;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A1_10{
int a = 0, b = 4, c = 5;
int f(){
 a = 0;
 int b = 1;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 2;
 int b = 9;
 c = 7;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A1_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A1_12{
void test(){}

}
 

namespace A2_1{
void test(){cout << 12 / 5 * 5 % 5;}

}
namespace A2_2{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A2_3{
void test(){cout 
  << (! 6.0!=5 and  8>= 2 or false<3.0);}

}
namespace A2_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(3) && f(-2));
  return 0;
}
}
namespace A2_5{
void test(){cout << (6.0 > 3 < 3.0 == 7);}

}
namespace A2_6{
void test(){if (4 == 15)
  cout << "f";
else
  cout << "z";}

}
namespace A2_7{
int f(int a, int b){
  int c = 22;
  if (a < -5)
    return 8;
  if (a >= 5)
     c = 1;
  else
    return 3;
  return c;
}
int test(){
  cout << f(9, -9);
  return 0;
}
}
namespace A2_8{
int f(int &x, int &y){
  x = 2;
  y+= 4;
  return x;
}
int test(){
  int a = 8, b = 2;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 6;
    cout << ((a<=3) && ((b+=1) <= 3))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A2_9{
int a = 7, b = 3, c = 0;
int f(int b){
 a *= 1;
 b += 3;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 8;
 int c = 1;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A2_10{
int a = 8, b = 3, c = 9;
int h(){
 a = 8;
 int b = 6;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 0;
 int b = 7;
 c = 3;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A2_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A2_12{
void test(){}

}
 

namespace A3_1{
void test(){cout << 3 * 3 / 9 / 12;}

}
namespace A3_2{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A3_3{
void test(){cout 
  << (! 7.0<=9.0 or  3== 9 && 9>=true);}

}
namespace A3_4{
bool f(int n){
  cout<<"f";
  return n<=-1;
}
int test(){
  cout<<(f(5) || f(1));
  return 0;
}
}
namespace A3_5{
void test(){cout << (4.0 >= 4 != 9 < false);}

}
namespace A3_6{
void test(){if (9 > 13)
  cout << "o";
else
  cout << "a";}

}
namespace A3_7{
int h(int a, int b){
  int c = 45;
  if (b == 3)
    c = 2;
  else if (b != 4)
     return 9;
  else
    c = 5;
  return c;
}
int test(){
  cout << h(-6, 1);
  return 0;
}
}
namespace A3_8{
int f(int &x, int &y){
  x = 7;
  y-= 4;
  return x;
}
int test(){
  int a = 1, b = 5;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 4;
    cout << ((a>=7) && ((b-=2) > 6))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A3_9{
int a = 2, b = 4, c = 7;
int g(int &a){
 int c;
 a = 4;
 b = 5;
 c = 2;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 3;
 int c = 6;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A3_10{
int a = 4, b = 1, c = 5;
int g(){
 int a = 4;
 b = 8;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 0;
 b = 5;
 int c = 8;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A3_11{
namespace B1{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A3_12{
void test(){}

}
 

namespace A4_1{
void test(){cout << 5 % 15 % 8 * 8;}

}
namespace A4_2{
void test(){int d = 6;
cout << d - 5 * 4 / 8 * 9;
cout << ":" << "d" << ":" << 'd' 
  << ":" << d;}

}
namespace A4_3{
void test(){cout 
  << ( 5.0>4 || ! 3< 6 and 2.0!=false);}

}
namespace A4_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-8) or f(0));
  return 0;
}
}
namespace A4_5{
void test(){cout << (5 <= 8.0 == 9.0 > 8);}

}
namespace A4_6{
void test(){if (13 <= 5)
  cout << "m";
else
  cout << "l";}

}
namespace A4_7{
int f(int d){
  int z = 30;
  if (d <= 3)
    z = 0;
  if (d >= -5)
     return 2;
  else
     z = 8;
  return z;
}
int test(){
  cout << f(5);
  return 0;
}
}
namespace A4_8{
int f(int &x, int &y){
  x = 2;
  y+= 5;
  return y;
}
int test(){
  int a = 9, b = 3;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 1;
    cout << ((a<6) || ((b+=1) < 7))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A4_9{
int a = 9, b = 5, c = 1;
int h(int b){
 a = 1;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 2;
 c = 7;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A4_10{
int a = 7, b = 9, c = 3;
int f(){
 int a = 7;
 b = 2;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 4;
 b = 2;
 int c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A4_11{
namespace B1{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A4_12{
void test(){}

}
 

namespace A5_1{
void test(){cout << 15 / 4 * 3 % 9;}

}
namespace A5_2{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d 
  << ":" << 'd';}

}
namespace A5_3{
void test(){cout 
  << ( 5>=4.0 and ! false!= 6.0 and 2>7);}

}
namespace A5_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-1) or f(7));
  return 0;
}
}
namespace A5_5{
void test(){cout << (7 != true >= 6 <= 8);}

}
namespace A5_6{
void test(){if (5 >= 6)
  cout << "t";
else
  cout << "r";}

}
namespace A5_7{
int g(int a, int b){
  int c = 24;
  if (a)
    return 4;
  if (b > -1)
     c = 7;
  else
    c = 6;
  return c;
}
int test(){
  cout << g(-8, -3);
  return 0;
}
}
namespace A5_8{
int f(int &x, int &y){
  x = 3;
  y+= 1;
  return x;
}
int test(){
  int a = 2, b = 5;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 6;
    cout << ((a>=5) && ((b-=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A5_9{
int a = 5, b = 0, c = 9;
int g(int &a){
 int c;
 a *= 2;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 3;
 c = 6;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A5_10{
int a = 8, b = 5, c = 7;
int h(){
 int a = 8;
 b = 4;
 int c = 9;
 return a + b + c;
}
int test(){
 a = 6;
 b = 3;
 int c = 0;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A5_11{
namespace B1{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A5_12{
void test(){}

}
 

namespace A6_1{
void test(){cout << 4 * 9 / 6 / 4;}

}
namespace A6_2{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A6_3{
void test(){cout 
  << ( 3.0<7.0 || ! 8== 7 && true<=6);}

}
namespace A6_4{
bool f(int n){
  cout<<"f";
  return n==-2;
}
int test(){
  cout<<(f(-7) and f(-3));
  return 0;
}
}
namespace A6_5{
void test(){cout << (7.0 < 5.0 == false > 5);}

}
namespace A6_6{
void test(){if (19 < 19)
  cout << "e";
else
  cout << "q";}

}
namespace A6_7{
int g(int b){
  int x = 93;
  if (b < -4)
    return 5;
  else if (b != -1)
     x = 9;
  else
     x = 4;
  return x;
}
int test(){
  cout << g(-8);
  return 0;
}
}
namespace A6_8{
int f(int &x, int &y){
  x = 7;
  y-= 9;
  return y;
}
int test(){
  int a = 4, b = 1;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 2;
    cout << ((a<4) || ((b+=1) > 7))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A6_9{
int a = 0, b = 9, c = 5;
int f(int b){
 a += 2;
 b -= 4;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 2;
 int c = 3;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A6_10{
int a = 6, b = 9, c = 3;
int g(){
 int a = 6;
 b = 8;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 0;
 int c = 5;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A6_11{
namespace B1{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A6_12{
void test(){}

}
 

namespace A7_1{
void test(){cout << 9 / 10 / 12 % 15;}

}
namespace A7_2{
void test(){int d = 5;
cout << d - 7 * 4 / 6 * 9;
cout << ":" << 'd' << ":" << d 
  << ":" << "d";}

}
namespace A7_3{
void test(){cout 
  << ( 2.0<2 && ! 5!= 4 || 9.0<=false);}

}
namespace A7_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-5) && f(2));
  return 0;
}
}
namespace A7_5{
void test(){cout << (3 < 4 == true >= 9);}

}
namespace A7_6{
void test(){if (0 >= 10)
  cout << "n";
else
  cout << "g";}

}
namespace A7_7{
int g(int a, int b){
  int c = 12;
  if (b <= -4)
    return 0;
  else if (a > -2)
     c = 2;
  else
    return 4;
  return c;
}
int test(){
  cout << g(6, 6);
  return 0;
}
}
namespace A7_8{
int f(int &x, int &y){
  x = 8;
  y-= 3;
  return x;
}
int test(){
  int a = 5, b = 6;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 2;
    cout << ((a<=3) && ((b-=1) < 6))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A7_9{
int a = 8, b = 1, c = 6;
int g(int b){
 a += 1;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 4;
 int c = 3;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A7_10{
int a = 4, b = 7, c = 7;
int f(){
 a = 4;
 int b = 6;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 9;
 c = 4;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A7_11{
namespace B1{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A7_12{
void test(){}

}
 

namespace A8_1{
void test(){cout << 10 % 6 % 4 / 10;}

}
namespace A8_2{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A8_3{
void test(){cout 
  << ( 8==3 or ! true> 5.0 or 9>=8.0);}

}
namespace A8_4{
bool f(int n){
  cout<<"f";
  return n!=4;
}
int test(){
  cout<<(f(4) || f(-4));
  return 0;
}
}
namespace A8_5{
void test(){cout << (3.0 > 9.0 <= false != 4.0);}

}
namespace A8_6{
void test(){if (14 != 17)
  cout << "i";
else
  cout << "d";}

}
namespace A8_7{
int f(int a, int b){
  int c = 87;
  if (b)
    c = 6;
  else if (a <= -3)
     return 5;
  else
    return 8;
  return c;
}
int test(){
  cout << f(-2, -2);
  return 0;
}
}
namespace A8_8{
int f(int &x, int &y){
  x = 7;
  y+= 5;
  return y;
}
int test(){
  int a = 9, b = 1;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 9;
    cout << ((a>7) || ((b+=2) <= 3))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A8_9{
int a = 9, b = 1, c = 2;
int h(int &a){
 int c;
 a -= 3;
 b *= 1;
 c = 2;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 8;
 c = 6;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A8_10{
int a = 8, b = 0, c = 2;
int g(){
 int a = 8;
 b = 5;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 6;
 int b = 1;
 c = 8;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A8_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A8_12{
void test(){}

}
 

namespace A9_1{
void test(){cout << 6 * 8 * 15 * 6;}

}
namespace A9_2{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 48 % 15 * 6;}

}
namespace A9_3{
void test(){cout 
  << ( true<=7.0 or ! 2>= 5.0 && 3!=6);}

}
namespace A9_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(9) || f(-9));
  return 0;
}
}
namespace A9_5{
void test(){cout << (2 == 2 >= 2.0 <= 7);}

}
namespace A9_6{
void test(){if (16 == 0)
  cout << "x";
else
  cout << "j";}

}
namespace A9_7{
int f(int c){
  int u = 14;
  if (c > 5)
    return 6;
  if (c < -2)
     return 0;
  else
     u = 6;
  return u;
}
int test(){
  cout << f(7);
  return 0;
}
}
namespace A9_8{
int f(int &x, int &y){
  x = 6;
  y-= 4;
  return y;
}
int test(){
  int a = 8, b = 5;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 7;
    cout << ((a>5) || ((b+=2) > 5))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A9_9{
int a = 7, b = 5, c = 9;
int f(int b){
 a = 4;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 3;
 b = 4;
 c = 2;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A9_10{
int a = 4, b = 3, c = 7;
int h(){
 a = 4;
 int b = 5;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 2;
 int c = 7;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A9_11{
namespace B1{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A9_12{
void test(){}

}
 

namespace A10_1{
void test(){cout << 9 % 8 / 9 * 8;}

}
namespace A10_2{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' 
  << ":" << "b";}

}
namespace A10_3{
void test(){cout 
  << (! false==5 and  8> 4 or 3.0<8.0);}

}
namespace A10_4{
bool f(int n){
  cout<<"f";
  return n<0;
}
int test(){
  cout<<(f(6) or f(7));
  return 0;
}
}
namespace A10_5{
void test(){cout << (4 != 9 < true > 8.0);}

}
namespace A10_6{
void test(){if (2 < 11)
  cout << "u";
else
  cout << "p";}

}
namespace A10_7{
int h(int a, int b){
  int c = 49;
  if (b < 0)
    c = 0;
  if (a == 2)
     return 3;
  else
    c = 7;
  return c;
}
int test(){
  cout << h(5, -8);
  return 0;
}
}
namespace A10_8{
int f(int &x, int &y){
  x = 5;
  y+= 3;
  return x;
}
int test(){
  int a = 2, b = 1;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 6;
    cout << ((b<=6) && ((a-=1) < 4))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A10_9{
int a = 6, b = 1, c = 5;
int f(int &a){
 int c;
 a = 2;
 b -= 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 0;
 int c = 7;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A10_10{
int a = 0, b = 3, c = 5;
int f(){
 int a = 0;
 b = 8;
 int c = 9;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 6;
 c = 4;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A10_11{
namespace B1{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A10_12{
void test(){}

}
 

namespace A11_1{
void test(){cout << 4 * 12 * 4 % 3;}

}
namespace A11_2{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a 
  << ":" << 'a';}

}
namespace A11_3{
void test(){cout 
  << (! 7==4.0 ||  9<= true and 8<9.0);}

}
namespace A11_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(1) && f(-8));
  return 0;
}
}
namespace A11_5{
void test(){cout << (5 == 7.0 >= false != 6.0);}

}
namespace A11_6{
void test(){if (11 > 12)
  cout << "w";
else
  cout << "v";}

}
namespace A11_7{
int h(int a, int b){
  int c = 32;
  if (a != 1)
    c = 1;
  if (a >= 3)
     return 9;
  else
    c = 5;
  return c;
}
int test(){
  cout << h(0, 5);
  return 0;
}
}
namespace A11_8{
int f(int &x, int &y){
  x = 8;
  y+= 4;
  return x;
}
int test(){
  int a = 5, b = 9;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 6;
    cout << ((b<7) || ((a-=1) <= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A11_9{
int a = 6, b = 9, c = 8;
int g(int b){
 int c;
 a = 5;
 b *= 1;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 4;
 int c = 0;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A11_10{
int a = 1, b = 6, c = 4;
int g(){
 a = 1;
 int b = 5;
 int c = 2;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 7;
 c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A11_11{
namespace B1{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A11_12{
void test(){}

}
 

namespace A12_1{
void test(){cout << 12 / 5 % 10 / 5;}

}
namespace A12_2{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' 
  << ":" << "c";}

}
namespace A12_3{
void test(){cout 
  << ( 2.0>3 && ! 4>= false || 6.0!=2);}

}
namespace A12_4{
bool f(int n){
  cout<<"f";
  return n>=-4;
}
int test(){
  cout<<(f(8) and f(3));
  return 0;
}
}
namespace A12_5{
void test(){cout << (6 <= 5.0 > 3 < 8);}

}
namespace A12_6{
void test(){if (7 <= 8)
  cout << "s";
else
  cout << "k";}

}
namespace A12_7{
int h(int a){
  int y = 28;
  if (a >= 4)
    y = 7;
  if (a > 2)
     return 1;
  else
     y = 2;
  return y;
}
int test(){
  cout << h(0);
  return 0;
}
}
namespace A12_8{
int f(int &x, int &y){
  x = 7;
  y-= 8;
  return y;
}
int test(){
  int a = 1, b = 3;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 8;
    cout << ((a>=4) && ((b+=2) >= 3))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A12_9{
int a = 5, b = 7, c = 1;
int h(int &a){
 a += 2;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 3;
 c = 9;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A12_10{
int a = 8, b = 3, c = 6;
int h(){
 a = 8;
 int b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 8;
 int b = 3;
 c = 0;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A12_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A12_12{
void test(){}

}
 

namespace A13_1{
void test(){cout << 8 / 15 * 5 / 6;}

}
namespace A13_2{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 59 / 5 / 6;}

}
namespace A13_3{
void test(){cout 
  << ( 5.0>2.0 or ! 6< true && 7>=5);}

}
namespace A13_4{
bool f(int n){
  cout<<"f";
  return n!=1;
}
int test(){
  cout<<(f(-4) and f(5));
  return 0;
}
}
namespace A13_5{
void test(){cout << (4.0 != 9.0 < 2 == 4);}

}
namespace A13_6{
void test(){if (1 >= 9)
  cout << "c";
else
  cout << "h";}

}
namespace A13_7{
int g(int b){
  int v = 62;
  if (b)
    return 8;
  else if (b == 0)
     return 4;
  else
     v = 3;
  return v;
}
int test(){
  cout << g(-7);
  return 0;
}
}
namespace A13_8{
int f(int &x, int &y){
  x = 1;
  y-= 4;
  return x;
}
int test(){
  int a = 7, b = 2;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 6;
    cout << ((b>6) || ((a-=1) >= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A13_9{
int a = 0, b = 2, c = 7;
int g(int a){
 a += 3;
 b -= 1;
 c = 2;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 4;
 int c = 5;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A13_10{
int a = 5, b = 9, c = 1;
int h(){
 a = 5;
 int b = 7;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 1;
 int b = 0;
 c = 9;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A13_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A13_12{
void test(){}

}
 

namespace A14_1{
void test(){cout << 5 % 6 / 6 * 12;}

}
namespace A14_2{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A14_3{
void test(){cout 
  << ( 9.0==9 && ! false<= 7.0 || 8!=4);}

}
namespace A14_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-6) && f(-3));
  return 0;
}
}
namespace A14_5{
void test(){cout << (false <= 6 >= 3 > 7);}

}
namespace A14_6{
void test(){if (6 != 18)
  cout << "f";
else
  cout << "e";}

}
namespace A14_7{
int g(int c){
  int z = 60;
  if (c != -3)
    return 5;
  if (c <= -2)
     z = 9;
  else
     z = 3;
  return z;
}
int test(){
  cout << g(9);
  return 0;
}
}
namespace A14_8{
int f(int &x, int &y){
  x = 5;
  y+= 4;
  return y;
}
int test(){
  int a = 1, b = 2;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 7;
    cout << ((a<=5) && ((b+=2) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A14_9{
int a = 8, b = 6, c = 8;
int h(int &b){
 int c;
 a = 4;
 b = 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 4;
 c = 1;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A14_10{
int a = 7, b = 6, c = 4;
int g(){
 int a = 7;
 b = 8;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 5;
 c = 7;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A14_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A14_12{
void test(){}

}
 

namespace A15_1{
void test(){cout << 3 * 4 % 15 % 10;}

}
namespace A15_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 53 / 6 * 6;}

}
namespace A15_3{
void test(){cout 
  << ( 2<3.0 || ! 5> 3 and false==8.0);}

}
namespace A15_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-1) or f(-7));
  return 0;
}
}
namespace A15_5{
void test(){cout << (true >= 2.0 < 3.0 > 9);}

}
namespace A15_6{
void test(){if (12 > 16)
  cout << "n";
else
  cout << "v";}

}
namespace A15_7{
int g(int a, int b){
  int c = 38;
  if (b <= 2)
    return 1;
  else if (b < 5)
     c = 4;
  else
    return 6;
  return c;
}
int test(){
  cout << g(3, 0);
  return 0;
}
}
namespace A15_8{
int f(int &x, int &y){
  x = 8;
  y+= 9;
  return y;
}
int test(){
  int a = 3, b = 6;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((b<3) || ((a-=2) > 5))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A15_9{
int a = 9, b = 7, c = 6;
int f(int a){
 int c;
 a *= 5;
 b = 4;
 c = 1;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 0;
 int c = 2;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A15_10{
int a = 0, b = 8, c = 2;
int f(){
 int a = 0;
 b = 1;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 6;
 c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A15_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A15_12{
void test(){}

}
 

namespace A16_1{
void test(){cout << 15 / 10 / 8 % 15;}

}
namespace A16_2{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A16_3{
void test(){cout 
  << (! 4.0<=6.0 and  6>= 7 or 9!=true);}

}
namespace A16_4{
bool f(int n){
  cout<<"f";
  return n>2;
}
int test(){
  cout<<(f(6) || f(2));
  return 0;
}
}
namespace A16_5{
void test(){cout << (8 <= 5.0 != false == 5);}

}
namespace A16_6{
void test(){if (15 <= 3)
  cout << "o";
else
  cout << "m";}

}
namespace A16_7{
int f(int a, int b){
  int c = 37;
  if (a)
    return 3;
  if (b >= 0)
     c = 8;
  else
    return 7;
  return c;
}
int test(){
  cout << f(-9, 7);
  return 0;
}
}
namespace A16_8{
int f(int &x, int &y){
  x = 8;
  y-= 5;
  return x;
}
int test(){
  int a = 4, b = 3;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 4;
    cout << ((b>=5) && ((a+=1) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A16_9{
int a = 6, b = 3, c = 5;
int f(int &b){
 a -= 3;
 b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 a = 7;
 b = 4;
 int c = 1;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A16_10{
int a = 2, b = 0, c = 9;
int g(){
 int a = 2;
 b = 7;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 6;
 c = 8;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A16_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A16_12{
void test(){}

}
 

namespace A17_1{
void test(){cout << 10 % 3 % 3 / 4;}

}
namespace A17_2{
void test(){int a = 9;
cout << a + 6 * 8 / 9 * 7;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A17_3{
void test(){cout 
  << (! 5==2 &&  3> 5.0 and 3.0<=true);}

}
namespace A17_4{
bool f(int n){
  cout<<"f";
  return n<-3;
}
int test(){
  cout<<(f(-9) and f(-5));
  return 0;
}
}
namespace A17_5{
void test(){cout << (3 == 6.0 >= 8.0 != 9);}

}
namespace A17_6{
void test(){if (18 < 2)
  cout << "w";
else
  cout << "r";}

}
namespace A17_7{
int h(int d){
  int w = 45;
  if (d)
    return 2;
  else if (d <= 2)
     return 8;
  else
     w = 9;
  return w;
}
int test(){
  cout << h(6);
  return 0;
}
}
namespace A17_8{
int f(int &x, int &y){
  x = 8;
  y-= 6;
  return y;
}
int test(){
  int a = 1, b = 5;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 8;
    cout << ((b>=7) || ((a-=2) < 7))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A17_9{
int a = 2, b = 9, c = 0;
int h(int a){
 a = 4;
 b = 5;
 c = 1;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 0;
 int c = 9;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A17_10{
int a = 3, b = 5, c = 0;
int h(){
 int a = 3;
 b = 8;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 9;
 int c = 6;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A17_11{
namespace B1{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A17_12{
void test(){}

}
 

namespace A18_1{
void test(){cout << 6 * 9 * 12 * 9;}

}
namespace A18_2{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" 
  << c;
cout << ":" 
  << c + 67 % 15 * 5;}

}
namespace A18_3{
void test(){cout 
  << (! 2.0<7 or  4>= false or 9!=9.0);}

}
namespace A18_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(4) or f(-2));
  return 0;
}
}
namespace A18_5{
void test(){cout << (true < 7 <= 7.0 > 5);}

}
namespace A18_6{
void test(){if (8 == 14)
  cout << "t";
else
  cout << "b";}

}
namespace A18_7{
int f(int a){
  int v = 18;
  if (a == 3)
    v = 6;
  if (a >= -4)
     return 0;
  else
     v = 1;
  return v;
}
int test(){
  cout << f(-9);
  return 0;
}
}
namespace A18_8{
int f(int &x, int &y){
  x = 2;
  y+= 3;
  return x;
}
int test(){
  int a = 7, b = 1;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 6;
    cout << ((b<=4) && ((a+=1) <= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A18_9{
int a = 1, b = 7, c = 3;
int g(int &b){
 int c;
 a *= 3;
 b += 5;
 c = 2;
 return a + b + c;
}
int test(){
 a = 2;
 b = 6;
 int c = 8;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A18_10{
int a = 4, b = 5, c = 1;
int f(){
 int a = 4;
 b = 7;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 8;
 c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A18_11{
namespace B1{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A18_12{
void test(){}

}
 

namespace A19_1{
void test(){cout << 10 * 15 % 5 % 8;}

}
namespace A19_2{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A19_3{
void test(){cout 
  << ( 8!=true || ! 6<= 8.0 && 7.0<3);}

}
namespace A19_4{
bool f(int n){
  cout<<"f";
  return n>=3;
}
int test(){
  cout<<(f(0) && f(9));
  return 0;
}
}
namespace A19_5{
void test(){cout << (2.0 <= true != 6 > 9.0);}

}
namespace A19_6{
void test(){if (17 > 7)
  cout << "p";
else
  cout << "g";}

}
namespace A19_7{
int g(int b){
  int x = 85;
  if (b < -1)
    return 7;
  else if (b != 0)
     return 5;
  else
     x = 4;
  return x;
}
int test(){
  cout << g(-3);
  return 0;
}
}
namespace A19_8{
int f(int &x, int &y){
  x = 9;
  y-= 3;
  return x;
}
int test(){
  int a = 2, b = 6;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 5;
    cout << ((b<3) && ((a-=1) >= 3))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A19_9{
int a = 5, b = 4, c = 8;
int h(int &a){
 int c;
 a = 4;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 1;
 int c = 7;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A19_10{
int a = 2, b = 6, c = 5;
int f(){
 int a = 2;
 b = 9;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 7;
 c = 6;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A19_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A19_12{
void test(){}

}
 

namespace A20_1{
void test(){cout << 15 / 9 * 4 * 12;}

}
namespace A20_2{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A20_3{
void test(){cout 
  << ( false>6.0 and ! 9>= 4.0 || 7==4);}

}
namespace A20_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-4) || f(0));
  return 0;
}
}
namespace A20_5{
void test(){cout << (4 >= 2 < false == 8);}

}
namespace A20_6{
void test(){if (10 != 1)
  cout << "s";
else
  cout << "j";}

}
namespace A20_7{
int h(int a, int b){
  int c = 65;
  if (a)
    c = 0;
  else if (a > -4)
     c = 2;
  else
    return 9;
  return c;
}
int test(){
  cout << h(-3, 9);
  return 0;
}
}
namespace A20_8{
int f(int &x, int &y){
  x = 8;
  y+= 7;
  return y;
}
int test(){
  int a = 2, b = 9;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 8;
    cout << ((b>6) || ((a+=2) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A20_9{
int a = 3, b = 6, c = 9;
int g(int b){
 a += 5;
 b *= 1;
 c = 2;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 4;
 c = 0;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A20_10{
int a = 0, b = 3, c = 9;
int h(){
 int a = 0;
 b = 8;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 2;
 c = 1;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A20_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A20_12{
void test(){}

}
 

namespace A21_1{
void test(){cout << 5 % 8 / 12 / 5;}

}
namespace A21_2{
void test(){int b = 5;
cout << b - 4 * 9 / 5 * 4;
cout << ":" << 'b' << ":" << b 
  << ":" << "b";}

}
namespace A21_3{
void test(){cout 
  << (! 6>5 and  2!= 5.0 && false>=8.0);}

}
namespace A21_4{
bool f(int n){
  cout<<"f";
  return n<=-4;
}
int test(){
  cout<<(f(-5) or f(7));
  return 0;
}
}
namespace A21_5{
void test(){cout << (7 >= 3.0 <= 4.0 != 3);}

}
namespace A21_6{
void test(){if (15 <= 17)
  cout << "y";
else
  cout << "q";}

}
namespace A21_7{
int f(int c){
  int y = 95;
  if (c > 1)
    return 1;
  else if (c == 4)
     y = 4;
  else
     return 7;
  return y;
}
int test(){
  cout << f(-2);
  return 0;
}
}
namespace A21_8{
int f(int &x, int &y){
  x = 6;
  y-= 1;
  return x;
}
int test(){
  int a = 4, b = 3;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 1;
    cout << ((a>4) && ((b-=2) <= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A21_9{
int a = 3, b = 6, c = 5;
int f(int b){
 int c;
 a -= 4;
 b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 8;
 c = 9;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A21_10{
int a = 0, b = 8, c = 5;
int g(){
 a = 0;
 int b = 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 3;
 b = 9;
 int c = 2;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A21_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A21_12{
void test(){}

}
 

namespace A22_1{
void test(){cout << 12 % 12 / 10 % 4;}

}
namespace A22_2{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' 
  << ":" << b;}

}
namespace A22_3{
void test(){cout 
  << ( 8<=4.0 && ! 8== 2.0 and true<7);}

}
namespace A22_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-6) and f(4));
  return 0;
}
}
namespace A22_5{
void test(){cout << (5.0 > 9 < 5 == 6);}

}
namespace A22_6{
void test(){if (8 >= 14)
  cout << "d";
else
  cout << "k";}

}
namespace A22_7{
int h(int d){
  int u = 63;
  if (d)
    u = 3;
  if (d < 5)
     u = 9;
  else
     return 6;
  return u;
}
int test(){
  cout << h(-5);
  return 0;
}
}
namespace A22_8{
int f(int &x, int &y){
  x = 2;
  y+= 8;
  return y;
}
int test(){
  int a = 7, b = 5;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 3;
    cout << ((a<6) || ((b+=1) > 3))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A22_9{
int a = 1, b = 0, c = 4;
int g(int &a){
 a = 5;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 3;
 int c = 7;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A22_10{
int a = 6, b = 7, c = 1;
int g(){
 int a = 6;
 b = 9;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 0;
 b = 8;
 int c = 5;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A22_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A22_12{
void test(){}

}
 

namespace A23_1{
void test(){cout << 3 * 4 * 15 / 3;}

}
namespace A23_2{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A23_3{
void test(){cout 
  << (! 2!=4 ||  6< 6.0 or false>=9.0);}

}
namespace A23_4{
bool f(int n){
  cout<<"f";
  return n==-3;
}
int test(){
  cout<<(f(-9) && f(2));
  return 0;
}
}
namespace A23_5{
void test(){cout << (true < 8.0 >= false == 2);}

}
namespace A23_6{
void test(){if (16 == 13)
  cout << "c";
else
  cout << "h";}

}
namespace A23_7{
int h(int c){
  int z = 75;
  if (c)
    z = 0;
  else if (c <= -3)
     return 5;
  else
     z = 8;
  return z;
}
int test(){
  cout << h(4);
  return 0;
}
}
namespace A23_8{
int f(int &x, int &y){
  x = 8;
  y+= 2;
  return y;
}
int test(){
  int a = 4, b = 1;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 6;
    cout << ((b<=7) || ((a-=2) < 7))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A23_9{
int a = 9, b = 6, c = 1;
int f(int &b){
 a += 4;
 b = 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 5;
 int c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A23_10{
int a = 3, b = 4, c = 7;
int f(){
 int a = 3;
 b = 2;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 7;
 int b = 3;
 c = 0;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A23_11{
namespace B1{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A23_12{
void test(){}

}
 

namespace A24_1{
void test(){cout << 6 / 6 % 6 * 6;}

}
namespace A24_2{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" 
  << b;
cout << ":" 
  << b + 59 / 5 * 6;}

}
namespace A24_3{
void test(){cout 
  << (! 9<=true or  3> 5 || 7.0==3.0);}

}
namespace A24_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(9) || f(-2));
  return 0;
}
}
namespace A24_5{
void test(){cout << (4 > 6.0 <= 8 != 7.0);}

}
namespace A24_6{
void test(){if (18 < 9)
  cout << "a";
else
  cout << "u";}

}
namespace A24_7{
int g(int a, int b){
  int c = 96;
  if (b == 1)
    c = 3;
  if (b != -1)
     return 4;
  else
    c = 5;
  return c;
}
int test(){
  cout << g(-5, -5);
  return 0;
}
}
namespace A24_8{
int f(int &x, int &y){
  x = 3;
  y-= 9;
  return x;
}
int test(){
  int a = 2, b = 1;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 3;
    cout << ((b>=3) && ((a+=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A24_9{
int a = 0, b = 8, c = 2;
int h(int a){
 int c;
 a -= 1;
 b *= 1;
 c = 5;
 return a + b + c;
}
int test(){
 a = 6;
 b = 3;
 int c = 7;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A24_10{
int a = 5, b = 8, c = 6;
int h(){
 int a = 5;
 b = 1;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 3;
 int c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A24_11{
namespace B1{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A24_12{
void test(){}

}
 

namespace A25_1{
void test(){cout << 4 / 3 * 3 % 9;}

}
namespace A25_2{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" 
  << ":" << c;}

}
namespace A25_3{
void test(){cout 
  << (! true<3.0 ||  8!= 5 and 2>2.0);}

}
namespace A25_4{
bool f(int n){
  cout<<"f";
  return n!=0;
}
int test(){
  cout<<(f(6) && f(-3));
  return 0;
}
}
namespace A25_5{
void test(){cout << (8.0 <= 4 >= 2 > 5.0);}

}
namespace A25_6{
void test(){if (19 != 11)
  cout << "l";
else
  cout << "i";}

}
namespace A25_7{
int f(int d){
  int w = 99;
  if (d != -5)
    return 2;
  if (d > 0)
     w = 2;
  else
     return 8;
  return w;
}
int test(){
  cout << f(-1);
  return 0;
}
}
namespace A25_8{
int f(int &x, int &y){
  x = 7;
  y+= 5;
  return y;
}
int test(){
  int a = 6, b = 2;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((a>5) && ((b+=1) <= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A25_9{
int a = 5, b = 4, c = 1;
int f(int &a){
 a = 3;
 b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 0;
 int c = 9;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A25_10{
int a = 7, b = 1, c = 6;
int g(){
 int a = 7;
 b = 9;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 4;
 c = 5;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A25_11{
namespace B1{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A25_12{
void test(){}

}
 

namespace A26_1{
void test(){cout << 8 * 10 % 9 * 10;}

}
namespace A26_2{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" 
  << d;
cout << ":" 
  << d - 59 / 5 / 6;}

}
namespace A26_3{
void test(){cout 
  << ( 4==6.0 && ! false>= 9 or 7<=5.0);}

}
namespace A26_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-1) and f(1));
  return 0;
}
}
namespace A26_5{
void test(){cout << (5 != false == 9.0 < true);}

}
namespace A26_6{
void test(){if (9 == 1)
  cout << "z";
else
  cout << "x";}

}
namespace A26_7{
int g(int a){
  int u = 37;
  if (a >= 4)
    return 7;
  else if (a > 3)
     u = 0;
  else
     return 9;
  return u;
}
int test(){
  cout << g(-4);
  return 0;
}
}
namespace A26_8{
int f(int &x, int &y){
  x = 6;
  y-= 9;
  return x;
}
int test(){
  int a = 1, b = 8;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 8;
    cout << ((a<=3) || ((b-=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A26_9{
int a = 9, b = 7, c = 5;
int h(int b){
 int c;
 a = 2;
 b += 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 4;
 b = 3;
 int c = 8;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A26_10{
int a = 9, b = 1, c = 5;
int f(){
 a = 9;
 int b = 8;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 3;
 b = 4;
 int c = 2;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A26_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A26_12{
void test(){}

}
 

namespace A27_1{
void test(){cout << 9 % 5 / 8 / 15;}

}
namespace A27_2{
void test(){int a = 7;
cout << 'a' << ":" << a << ":" 
  << "a";
cout << ":" 
  << a - 48 / 6 * 5;}

}
namespace A27_3{
void test(){cout 
  << (! 6>true or  3<= 4.0 && 4<7.0);}

}
namespace A27_4{
bool f(int n){
  cout<<"f";
  return n==4;
}
int test(){
  cout<<(f(-7) or f(-8));
  return 0;
}
}
namespace A27_5{
void test(){cout << (8 == 3.0 >= 9 < 7);}

}
namespace A27_6{
void test(){if (0 <= 12)
  cout << "a";
else
  cout << "g";}

}
namespace A27_7{
int f(int b){
  int y = 42;
  if (b <= 1)
    y = 1;
  if (b >= -5)
     return 5;
  else
     y = 6;
  return y;
}
int test(){
  cout << f(1);
  return 0;
}
}
namespace A27_8{
int f(int &x, int &y){
  x = 1;
  y-= 7;
  return x;
}
int test(){
  int a = 2, b = 9;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 3;
    cout << ((a<7) || ((b+=1) < 6))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A27_9{
int a = 1, b = 2, c = 0;
int g(int b){
 a -= 1;
 b *= 5;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 1;
 int c = 7;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A27_10{
int a = 6, b = 0, c = 9;
int h(){
 int a = 6;
 b = 1;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 5;
 b = 8;
 int c = 6;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A27_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A27_12{
void test(){}

}
 

namespace A28_1{
void test(){cout << 5 % 4 * 15 / 12;}

}
namespace A28_2{
void test(){int d = 2;
cout << d + 48 / 6 * 5;
cout << ":" << 'd' << ":" << "d" 
  << ":" << d;}

}
namespace A28_3{
void test(){cout 
  << ( 2!=8 and ! 9.0== false || 8.0>=3);}

}
namespace A28_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(8) || f(3));
  return 0;
}
}
namespace A28_5{
void test(){cout << (false != 6 > 2.0 <= 3);}

}
namespace A28_6{
void test(){if (7 < 6)
  cout << "s";
else
  cout << "w";}

}
namespace A28_7{
int f(int a, int b){
  int c = 69;
  if (a != -3)
    return 2;
  else if (b <= -5)
     return 9;
  else
    c = 6;
  return c;
}
int test(){
  cout << f(2, 4);
  return 0;
}
}
namespace A28_8{
int f(int &x, int &y){
  x = 2;
  y+= 8;
  return y;
}
int test(){
  int a = 6, b = 1;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 4;
    cout << ((a>=4) && ((b-=2) > 3))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A28_9{
int a = 9, b = 0, c = 4;
int h(int &a){
 int c;
 a += 1;
 b -= 2;
 c = 4;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 5;
 c = 3;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A28_10{
int a = 7, b = 0, c = 2;
int f(){
 a = 7;
 int b = 4;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 8;
 b = 5;
 int c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A28_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A28_12{
void test(){}

}
 

namespace A29_1{
void test(){cout << 4 / 15 / 6 % 4;}

}
namespace A29_2{
void test(){int a = 4;
cout << a + 59 % 15 / 5;
cout << ":" << a << ":" << 'a' 
  << ":" << "a";}

}
namespace A29_3{
void test(){cout 
  << (! 9>=true and  6> 5 or 6.0!=8.0);}

}
namespace A29_4{
bool f(int n){
  cout<<"f";
  return n>2;
}
int test(){
  cout<<(f(5) || f(8));
  return 0;
}
}
namespace A29_5{
void test(){cout << (6 == 6.0 < 5 >= true);}

}
namespace A29_6{
void test(){if (6 >= 0)
  cout << "l";
else
  cout << "k";}

}
namespace A29_7{
int g(int a, int b){
  int c = 15;
  if (a > -2)
    c = 1;
  if (b >= 4)
     return 0;
  else
    c = 8;
  return c;
}
int test(){
  cout << g(-4, 8);
  return 0;
}
}
namespace A29_8{
int f(int &x, int &y){
  x = 3;
  y+= 9;
  return x;
}
int test(){
  int a = 4, b = 5;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 9;
    cout << ((b>=5) && ((a-=2) < 5))
       << a << ":" << b << ":";
  }
  {
    a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A29_9{
int a = 6, b = 8, c = 0;
int g(int a){
 a *= 5;
 b = 5;
 c = 4;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 7;
 c = 5;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A29_10{
int a = 0, b = 7, c = 9;
int h(){
 int a = 0;
 b = 6;
 int c = 2;
 return a + b + c;
}
int test(){
 a = 3;
 b = 0;
 int c = 5;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A29_11{
namespace B1{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A29_12{
void test(){}

}
 

namespace A30_1{
void test(){cout << 8 * 9 % 12 * 8;}

}
namespace A30_2{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" 
  << ":" << c;}

}
namespace A30_3{
void test(){cout 
  << ( 7==false || ! 2< 6 || 7.0<=9.0);}

}
namespace A30_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(2) or f(0));
  return 0;
}
}
namespace A30_5{
void test(){cout << (7.0 != 4.0 <= 7 > 2);}

}
namespace A30_6{
void test(){if (1 > 3)
  cout << "h";
else
  cout << "j";}

}
namespace A30_7{
int f(int a, int b){
  int c = 31;
  if (a)
    return 7;
  else if (b < -3)
     return 5;
  else
    c = 2;
  return c;
}
int test(){
  cout << f(4, 2);
  return 0;
}
}
namespace A30_8{
int f(int &x, int &y){
  x = 7;
  y-= 8;
  return y;
}
int test(){
  int a = 2, b = 3;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 2;
    cout << ((b>6) || ((a+=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A30_9{
int a = 4, b = 6, c = 1;
int f(int &b){
 int c;
 a = 2;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 int b = 9;
 c = 3;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A30_10{
int a = 1, b = 8, c = 3;
int g(){
 a = 1;
 int b = 2;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 4;
 c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A30_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A30_12{
void test(){}

}
 

namespace A31_1{
void test(){cout << 6 % 3 * 9 * 9;}

}
namespace A31_2{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A31_3{
void test(){cout 
  << (! 3>=2.0 or  4< 7 and 3.0!=false);}

}
namespace A31_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(3) && f(-6));
  return 0;
}
}
namespace A31_5{
void test(){cout << (8 < 9.0 > true != 3);}

}
namespace A31_6{
void test(){if (13 == 8)
  cout << "p";
else
  cout << "v";}

}
namespace A31_7{
int h(int b){
  int x = 38;
  if (b)
    return 3;
  else if (b < 2)
     x = 4;
  else
     return 7;
  return x;
}
int test(){
  cout << h(8);
  return 0;
}
}
namespace A31_8{
int f(int &x, int &y){
  x = 9;
  y+= 1;
  return x;
}
int test(){
  int a = 8, b = 4;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((b<=7) || ((a+=2) > 3))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A31_9{
int a = 9, b = 4, c = 5;
int f(int a){
 a = 1;
 b += 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 3;
 c = 6;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A31_10{
int a = 2, b = 1, c = 0;
int h(){
 int a = 2;
 b = 9;
 int c = 5;
 return a + b + c;
}
int test(){
 a = 6;
 b = 7;
 int c = 3;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A31_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A31_12{
void test(){}

}
 

namespace A32_1{
void test(){cout << 9 * 8 % 8 / 15;}

}
namespace A32_2{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" 
  << "a";
cout << ":" 
  << a + 53 / 6 / 5;}

}
namespace A32_3{
void test(){cout 
  << (! 4.0==5.0 &&  8> 5 && true<=9);}

}
namespace A32_4{
bool f(int n){
  cout<<"f";
  return n>=1;
}
int test(){
  cout<<(f(-8) and f(4));
  return 0;
}
}
namespace A32_5{
void test(){cout << (9 >= 4.0 == 4 <= 4);}

}
namespace A32_6{
void test(){if (17 <= 5)
  cout << "d";
else
  cout << "m";}

}
namespace A32_7{
int h(int a, int b){
  int c = 11;
  if (a == 5)
    return 6;
  if (b < 2)
     c = 1;
  else
    c = 7;
  return c;
}
int test(){
  cout << h(-7, -6);
  return 0;
}
}
namespace A32_8{
int f(int &x, int &y){
  x = 1;
  y-= 5;
  return y;
}
int test(){
  int a = 4, b = 2;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 3;
    cout << ((b<4) && ((a-=1) >= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A32_9{
int a = 1, b = 8, c = 7;
int g(int &b){
 int c;
 a -= 5;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 0;
 int b = 0;
 c = 1;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A32_10{
int a = 4, b = 8, c = 5;
int f(){
 int a = 4;
 b = 4;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 2;
 b = 3;
 int c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A32_11{
namespace B1{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A32_12{
void test(){}

}
 

namespace A33_1{
void test(){cout << 12 / 6 / 5 % 6;}

}
namespace A33_2{
void test(){int d = 5;
cout << "d" << ":" << 'd' << ":" 
  << d;
cout << ":" 
  << d - 53 % 15 * 6;}

}
namespace A33_3{
void test(){cout 
  << ( false>=4.0 && ! 7.0< 6 && 7!=9);}

}
namespace A33_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(6) or f(5));
  return 0;
}
}
namespace A33_5{
void test(){cout << (5 == 7.0 <= false != 5.0);}

}
namespace A33_6{
void test(){if (5 > 10)
  cout << "z";
else
  cout << "x";}

}
namespace A33_7{
int g(int d){
  int v = 74;
  if (d != -3)
    v = 3;
  if (d == -1)
     return 8;
  else
     v = 4;
  return v;
}
int test(){
  cout << g(3);
  return 0;
}
}
namespace A33_8{
int f(int &x, int &y){
  x = 6;
  y-= 8;
  return x;
}
int test(){
  int a = 1, b = 7;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 6;
    cout << ((b<=6) && ((a-=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A33_9{
int a = 6, b = 7, c = 2;
int h(int &a){
 a = 1;
 b *= 5;
 c = 2;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 9;
 c = 5;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A33_10{
int a = 1, b = 7, c = 8;
int g(){
 a = 1;
 int b = 0;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 7;
 int b = 8;
 c = 3;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A33_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A33_12{
void test(){}

}
 

namespace A34_1{
void test(){cout << 15 * 5 % 10 / 5;}

}
namespace A34_2{
void test(){int d = 4;
cout << d + 5 * 7 / 3 * 9;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A34_3{
void test(){cout 
  << ( 8.0>2 || ! 4<= 5 || true==9.0);}

}
namespace A34_4{
bool f(int n){
  cout<<"f";
  return n<=-2;
}
int test(){
  cout<<(f(-4) || f(-7));
  return 0;
}
}
namespace A34_5{
void test(){cout << (6.0 < 9 >= true > 8);}

}
namespace A34_6{
void test(){if (3 != 4)
  cout << "t";
else
  cout << "i";}

}
namespace A34_7{
int h(int a){
  int u = 32;
  if (a >= 5)
    u = 2;
  if (a > -2)
     return 0;
  else
     u = 6;
  return u;
}
int test(){
  cout << h(2);
  return 0;
}
}
namespace A34_8{
int f(int &x, int &y){
  x = 4;
  y+= 2;
  return y;
}
int test(){
  int a = 5, b = 5;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 4;
    cout << ((b>=5) || ((a+=2) < 5))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A34_9{
int a = 3, b = 8, c = 9;
int g(int b){
 int c;
 a *= 4;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 4;
 int b = 7;
 c = 3;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A34_10{
int a = 5, b = 6, c = 4;
int f(){
 int a = 5;
 b = 9;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 1;
 b = 4;
 int c = 6;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A34_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A34_12{
void test(){}

}
 

namespace A35_1{
void test(){cout << 10 / 12 * 4 * 10;}

}
namespace A35_2{
void test(){int d = 6;
cout << 'd' << ":" << "d" << ":" 
  << d;
cout << ":" 
  << d + 48 % 15 * 5;}

}
namespace A35_3{
void test(){cout 
  << ( 6.0!=5.0 or ! 8<= true and 3>4);}

}
namespace A35_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) and f(9));
  return 0;
}
}
namespace A35_5{
void test(){cout << (3 != 2.0 >= 6 == 7);}

}
namespace A35_6{
void test(){if (12 >= 15)
  cout << "u";
else
  cout << "n";}

}
namespace A35_7{
int g(int a, int b){
  int c = 42;
  if (a >= 4)
    return 3;
  else if (a == 0)
     c = 4;
  else
    return 9;
  return c;
}
int test(){
  cout << g(7, 3);
  return 0;
}
}
namespace A35_8{
int f(int &x, int &y){
  x = 6;
  y+= 1;
  return x;
}
int test(){
  int a = 7, b = 9;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 1;
    cout << ((b<3) && ((a+=2) > 4))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A35_9{
int a = 1, b = 8, c = 2;
int f(int &b){
 int c;
 a = 2;
 b -= 4;
 c = 3;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 0;
 int c = 6;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A35_10{
int a = 8, b = 7, c = 5;
int g(){
 a = 8;
 int b = 0;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 1;
 int b = 3;
 c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A35_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A35_12{
void test(){}

}
 

namespace A36_1{
void test(){cout << 3 % 10 / 3 % 3;}

}
namespace A36_2{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A36_3{
void test(){cout 
  << (! 3>=7 and  false== 2.0 or 3.0<8);}

}
namespace A36_4{
bool f(int n){
  cout<<"f";
  return n<-1;
}
int test(){
  cout<<(f(-2) && f(7));
  return 0;
}
}
namespace A36_5{
void test(){cout << (3.0 < 8.0 > false <= 2);}

}
namespace A36_6{
void test(){if (2 < 2)
  cout << "b";
else
  cout << "r";}

}
namespace A36_7{
int f(int a, int b){
  int c = 44;
  if (b)
    c = 0;
  if (b > -5)
     return 8;
  else
    c = 5;
  return c;
}
int test(){
  cout << f(1, -1);
  return 0;
}
}
namespace A36_8{
int f(int &x, int &y){
  x = 5;
  y-= 7;
  return y;
}
int test(){
  int a = 4, b = 3;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 2;
    cout << ((b>3) || ((a-=1) <= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A36_9{
int a = 9, b = 3, c = 1;
int h(int a){
 a += 1;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 6;
 c = 2;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A36_10{
int a = 6, b = 0, c = 5;
int h(){
 a = 6;
 int b = 2;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 8;
 int b = 9;
 c = 1;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A36_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A36_12{
void test(){}

}
 

namespace A37_1{
void test(){cout << 15 * 5 * 8 * 5;}

}
namespace A37_2{
void test(){int d = 6;
cout << d - 67 % 15 * 5;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A37_3{
void test(){cout 
  << ( 5<=7.0 && ! true>= 6 || 9>2.0);}

}
namespace A37_4{
bool f(int n){
  cout<<"f";
  return n==-2;
}
int test(){
  cout<<(f(1) or f(-5));
  return 0;
}
}
namespace A37_5{
void test(){cout << (9 > false < 3.0 <= 9.0);}

}
namespace A37_6{
void test(){if (14 != 7)
  cout << "q";
else
  cout << "f";}

}
namespace A37_7{
int h(int a, int b){
  int c = 16;
  if (a != -2)
    return 8;
  else if (b <= 1)
     c = 6;
  else
    return 7;
  return c;
}
int test(){
  cout << h(-1, -4);
  return 0;
}
}
namespace A37_8{
int f(int &x, int &y){
  x = 2;
  y-= 9;
  return x;
}
int test(){
  int a = 1, b = 8;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((b>4) && ((a-=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A37_9{
int a = 5, b = 8, c = 0;
int f(int b){
 int c;
 a = 2;
 b += 5;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 7;
 int c = 9;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A37_10{
int a = 3, b = 7, c = 8;
int f(){
 a = 3;
 int b = 6;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 1;
 c = 4;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A37_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A37_12{
void test(){}

}
 

namespace A38_1{
void test(){cout << 9 / 15 % 4 % 6;}

}
namespace A38_2{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A38_3{
void test(){cout 
  << (! 2!=6.0 and  7< 5 and false==5.0);}

}
namespace A38_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-3) and f(-1));
  return 0;
}
}
namespace A38_5{
void test(){cout << (5 >= 2 == 6 != true);}

}
namespace A38_6{
void test(){if (4 >= 16)
  cout << "y";
else
  cout << "e";}

}
namespace A38_7{
int g(int a, int b){
  int c = 88;
  if (b == 3)
    return 1;
  if (b != -4)
     c = 4;
  else
    return 0;
  return c;
}
int test(){
  cout << g(8, -7);
  return 0;
}
}
namespace A38_8{
int f(int &x, int &y){
  x = 4;
  y+= 7;
  return y;
}
int test(){
  int a = 3, b = 5;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 8;
    cout << ((b<7) || ((a+=2) >= 3))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A38_9{
int a = 6, b = 4, c = 5;
int h(int &a){
 a = 2;
 b -= 1;
 c = 4;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 2;
 c = 0;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A38_10{
int a = 7, b = 2, c = 5;
int g(){
 int a = 7;
 b = 3;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 0;
 int c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A38_11{
namespace B1{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A38_12{
void test(){}

}
 

namespace A39_1{
void test(){cout << 4 % 4 / 12 / 8;}

}
namespace A39_2{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A39_3{
void test(){cout 
  << ( 9==true or ! 6!= 8 && 8.0<3.0);}

}
namespace A39_4{
bool f(int n){
  cout<<"f";
  return n!=4;
}
int test(){
  cout<<(f(6) && f(1));
  return 0;
}
}
namespace A39_5{
void test(){cout << (2.0 >= 8.0 > 4 != 3);}

}
namespace A39_6{
void test(){if (11 == 18)
  cout << "c";
else
  cout << "o";}

}
namespace A39_7{
int g(int c){
  int z = 54;
  if (c)
    return 5;
  else if (c <= -4)
     return 9;
  else
     z = 1;
  return z;
}
int test(){
  cout << g(-5);
  return 0;
}
}
namespace A39_8{
int f(int &x, int &y){
  x = 6;
  y-= 1;
  return x;
}
int test(){
  int a = 2, b = 4;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 2;
    cout << ((b>=6) || ((a+=2) > 4))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A39_9{
int a = 8, b = 1, c = 4;
int g(int b){
 int c;
 a *= 5;
 b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 6;
 c = 3;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A39_10{
int a = 8, b = 2, c = 3;
int h(){
 int a = 8;
 b = 5;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 1;
 int b = 4;
 c = 5;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A39_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A39_12{
void test(){}

}
 

namespace A40_1{
void test(){cout << 5 / 6 % 9 * 3;}

}
namespace A40_2{
void test(){int a = 3;
cout << a + 8 * 6 / 5 * 7;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A40_3{
void test(){cout 
  << (! 4.0>=3 ||  2> 4 or 9.0<=false);}

}
namespace A40_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-7) || f(-8));
  return 0;
}
}
namespace A40_5{
void test(){cout << (5.0 <= 8 == false < 7);}

}
namespace A40_6{
void test(){if (10 <= 19)
  cout << "t";
else
  cout << "f";}

}
namespace A40_7{
int f(int a, int b){
  int c = 50;
  if (b <= -1)
    c = 3;
  else if (a >= -5)
     return 9;
  else
    c = 2;
  return c;
}
int test(){
  cout << f(1, -2);
  return 0;
}
}
namespace A40_8{
int f(int &x, int &y){
  x = 9;
  y+= 3;
  return y;
}
int test(){
  int a = 8, b = 1;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 7;
    cout << ((b<=5) && ((a-=1) < 6))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A40_9{
int a = 1, b = 0, c = 5;
int h(int &a){
 a = 3;
 b = 5;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 8;
 int b = 2;
 c = 7;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A40_10{
int a = 2, b = 7, c = 8;
int g(){
 int a = 2;
 b = 0;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 6;
 c = 1;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A40_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A40_12{
void test(){}

}
 

namespace A41_1{
void test(){cout << 3 * 3 * 6 % 9;}

}
namespace A41_2{
void test(){int b = 9;
cout << b << ":" << 'b' << ":" 
  << "b";
cout << ":" 
  << b + 67 % 15 / 5;}

}
namespace A41_3{
void test(){cout 
  << (! 4.0>=4 or  9.0> 8 and false!=7);}

}
namespace A41_4{
bool f(int n){
  cout<<"f";
  return n>0;
}
int test(){
  cout<<(f(-9) && f(-1));
  return 0;
}
}
namespace A41_5{
void test(){cout << (8 == 7.0 > 4.0 >= 6.0);}

}
namespace A41_6{
void test(){if (15 < 17)
  cout << "u";
else
  cout << "c";}

}
namespace A41_7{
int f(int b){
  int x = 94;
  if (b < -3)
    x = 4;
  if (b != 2)
     return 1;
  else
     x = 8;
  return x;
}
int test(){
  cout << f(-9);
  return 0;
}
}
namespace A41_8{
int f(int &x, int &y){
  x = 4;
  y+= 7;
  return x;
}
int test(){
  int a = 6, b = 3;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 1;
    cout << ((a>=3) && ((b+=1) > 7))
       << a << ":" << b << ":";
  }
  {
    a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A41_9{
int a = 0, b = 6, c = 9;
int f(int &b){
 int c;
 a -= 2;
 b *= 1;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 3;
 c = 8;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A41_10{
int a = 0, b = 5, c = 4;
int h(){
 a = 0;
 int b = 8;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 1;
 c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A41_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A41_12{
void test(){}

}
 

namespace A42_1{
void test(){cout << 6 % 8 / 15 / 10;}

}
namespace A42_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 59 % 15 * 6;}

}
namespace A42_3{
void test(){cout 
  << ( 9==5.0 && ! 3<= 2 or true<3.0);}

}
namespace A42_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(2) || f(-4));
  return 0;
}
}
namespace A42_5{
void test(){cout << (3 <= true != 6 < 5);}

}
namespace A42_6{
void test(){if (16 > 11)
  cout << "g";
else
  cout << "q";}

}
namespace A42_7{
int h(int a, int b){
  int c = 83;
  if (a)
    return 6;
  if (a > 2)
     c = 0;
  else
    return 8;
  return c;
}
int test(){
  cout << h(-4, 2);
  return 0;
}
}
namespace A42_8{
int f(int &x, int &y){
  x = 8;
  y-= 9;
  return y;
}
int test(){
  int a = 5, b = 4;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 7;
    cout << ((a>5) || ((b-=2) <= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A42_9{
int a = 7, b = 1, c = 4;
int g(int a){
 a = 5;
 b += 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 1;
 int c = 8;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A42_10{
int a = 6, b = 9, c = 3;
int f(){
 int a = 6;
 b = 0;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 4;
 int b = 6;
 c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A42_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A42_12{
void test(){}

}
 

namespace A43_1{
void test(){cout << 8 % 9 % 5 / 12;}

}
namespace A43_2{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A43_3{
void test(){cout 
  << ( 7.0>8.0 and ! 6<= 5 && true<4);}

}
namespace A43_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(4) or f(5));
  return 0;
}
}
namespace A43_5{
void test(){cout << (7 >= 5.0 == 2.0 != 4);}

}
namespace A43_6{
void test(){if (1 > 3)
  cout << "y";
else
  cout << "n";}

}
namespace A43_7{
int f(int c){
  int y = 27;
  if (c)
    return 0;
  else if (c == -2)
     return 5;
  else
     y = 6;
  return y;
}
int test(){
  cout << f(2);
  return 0;
}
}
namespace A43_8{
int f(int &x, int &y){
  x = 3;
  y+= 2;
  return y;
}
int test(){
  int a = 8, b = 4;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 9;
    cout << ((b<=7) || ((a+=1) < 3))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A43_9{
int a = 3, b = 7, c = 0;
int g(int b){
 int c;
 a = 2;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 9;
 c = 6;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A43_10{
int a = 5, b = 1, c = 7;
int g(){
 int a = 5;
 b = 8;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 3;
 c = 1;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A43_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A43_12{
void test(){}

}
 

namespace A44_1{
void test(){cout << 12 * 10 * 10 % 4;}

}
namespace A44_2{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" 
  << "d";
cout << ":" 
  << d + 48 % 15 * 5;}

}
namespace A44_3{
void test(){cout 
  << (! false!=6 ||  5>= 7 || 6.0==2.0);}

}
namespace A44_4{
bool f(int n){
  cout<<"f";
  return n<2;
}
int test(){
  cout<<(f(-2) and f(-6));
  return 0;
}
}
namespace A44_5{
void test(){cout << (9 <= false < 2 > 9.0);}

}
namespace A44_6{
void test(){if (17 >= 12)
  cout << "z";
else
  cout << "l";}

}
namespace A44_7{
int h(int a, int b){
  int c = 17;
  if (a)
    c = 2;
  else if (b < -1)
     c = 9;
  else
    return 7;
  return c;
}
int test(){
  cout << h(9, -9);
  return 0;
}
}
namespace A44_8{
int f(int &x, int &y){
  x = 2;
  y-= 8;
  return x;
}
int test(){
  int a = 7, b = 3;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 7;
    cout << ((b<6) && ((a-=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A44_9{
int a = 4, b = 2, c = 3;
int h(int &a){
 a = 5;
 b += 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 0;
 int c = 1;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A44_10{
int a = 5, b = 2, c = 8;
int h(){
 int a = 5;
 b = 6;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 9;
 int b = 4;
 c = 0;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A44_11{
namespace B1{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A44_12{
void test(){}

}
 

namespace A45_1{
void test(){cout << 10 / 12 / 3 * 15;}

}
namespace A45_2{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" 
  << a;
cout << ":" 
  << a - 67 / 6 * 5;}

}
namespace A45_3{
void test(){cout 
  << ( true>9 && ! 3.0<= 4.0 and 2==8);}

}
namespace A45_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(9) and f(0));
  return 0;
}
}
namespace A45_5{
void test(){cout << (true == 8 > 7.0 < 2);}

}
namespace A45_6{
void test(){if (3 != 8)
  cout << "p";
else
  cout << "r";}

}
namespace A45_7{
int g(int a){
  int w = 59;
  if (a > -1)
    return 9;
  if (a <= -4)
     w = 2;
  else
     w = 3;
  return w;
}
int test(){
  cout << g(1);
  return 0;
}
}
namespace A45_8{
int f(int &x, int &y){
  x = 5;
  y-= 6;
  return y;
}
int test(){
  int a = 3, b = 9;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 1;
    cout << ((b<=4) && ((a+=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A45_9{
int a = 8, b = 4, c = 6;
int f(int &b){
 int c;
 a -= 4;
 b *= 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 2;
 c = 7;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A45_10{
int a = 8, b = 3, c = 5;
int f(){
 a = 8;
 int b = 1;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 6;
 c = 2;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A45_11{
namespace B1{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A45_12{
void test(){}

}
 

namespace A46_1{
void test(){cout << 9 % 3 * 8 * 9;}

}
namespace A46_2{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A46_3{
void test(){cout 
  << ( 3<3 || ! 2.0!= 2 || false>=8.0);}

}
namespace A46_4{
bool f(int n){
  cout<<"f";
  return n<=-1;
}
int test(){
  cout<<(f(-5) || f(3));
  return 0;
}
}
namespace A46_5{
void test(){cout << (7 >= 8.0 != 9 <= true);}

}
namespace A46_6{
void test(){if (18 < 5)
  cout << "h";
else
  cout << "b";}

}
namespace A46_7{
int g(int a, int b){
  int c = 67;
  if (a >= 4)
    return 1;
  else if (b <= 1)
     c = 5;
  else
    c = 4;
  return c;
}
int test(){
  cout << g(3, 5);
  return 0;
}
}
namespace A46_8{
int f(int &x, int &y){
  x = 8;
  y+= 4;
  return x;
}
int test(){
  int a = 7, b = 5;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((a>=6) || ((b-=2) <= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A46_9{
int a = 2, b = 8, c = 5;
int h(int a){
 a = 4;
 b = 5;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 0;
 int c = 9;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A46_10{
int a = 9, b = 6, c = 8;
int g(){
 int a = 9;
 b = 3;
 c = 0;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 7;
 int c = 5;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A46_11{
namespace B1{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A46_12{
void test(){}

}
 

namespace A47_1{
void test(){cout << 5 / 8 % 15 % 15;}

}
namespace A47_2{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A47_3{
void test(){cout 
  << ( false!=9.0 or ! 4< 8 or 6.0>5);}

}
namespace A47_4{
bool f(int n){
  cout<<"f";
  return n>=3;
}
int test(){
  cout<<(f(-3) or f(8));
  return 0;
}
}
namespace A47_5{
void test(){cout << (5 <= 6.0 < false == 3);}

}
namespace A47_6{
void test(){if (11 == 14)
  cout << "e";
else
  cout << "w";}

}
namespace A47_7{
int h(int d){
  int v = 25;
  if (d < 3)
    return 7;
  else if (d != 1)
     v = 1;
  else
     return 8;
  return v;
}
int test(){
  cout << h(-2);
  return 0;
}
}
namespace A47_8{
int f(int &x, int &y){
  x = 9;
  y-= 6;
  return x;
}
int test(){
  int a = 9, b = 6;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 2;
    cout << ((b<3) || ((a+=1) < 4))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A47_9{
int a = 7, b = 4, c = 6;
int g(int b){
 int c;
 a += 2;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 8;
 int c = 6;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A47_10{
int a = 2, b = 4, c = 8;
int f(){
 a = 2;
 int b = 1;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 6;
 c = 0;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A47_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A47_12{
void test(){}

}
 

namespace A48_1{
void test(){cout << 8 * 4 / 6 / 5;}

}
namespace A48_2{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A48_3{
void test(){cout 
  << (! 7<=6 and  true>= 7.0 && 5.0==9);}

}
namespace A48_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(7) && f(-7));
  return 0;
}
}
namespace A48_5{
void test(){cout << (6 != 4.0 >= 4 > 3.0);}

}
namespace A48_6{
void test(){if (0 <= 18)
  cout << "k";
else
  cout << "o";}

}
namespace A48_7{
int h(int d){
  int u = 33;
  if (d >= -5)
    u = 4;
  else if (d == 5)
     return 3;
  else
     return 2;
  return u;
}
int test(){
  cout << h(5);
  return 0;
}
}
namespace A48_8{
int f(int &x, int &y){
  x = 8;
  y+= 1;
  return y;
}
int test(){
  int a = 3, b = 4;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 6;
    cout << ((b>4) && ((a-=2) > 6))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A48_9{
int a = 5, b = 1, c = 9;
int f(int &a){
 a -= 3;
 b *= 5;
 c = 4;
 return a + b + c;
}
int test(){
 a = 3;
 b = 0;
 int c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A48_10{
int a = 9, b = 7, c = 2;
int h(){
 a = 9;
 int b = 4;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 4;
 b = 7;
 int c = 8;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A48_11{
namespace B1{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A48_12{
void test(){}

}
 

namespace A49_1{
void test(){cout << 4 * 10 * 3 * 3;}

}
namespace A49_2{
void test(){int a = 4;
cout << a + 59 % 15 / 5;
cout << ":" << a << ":" << 'a' 
  << ":" << "a";}

}
namespace A49_3{
void test(){cout 
  << (! 7.0>=8 &&  2< false && 6!=9.0);}

}
namespace A49_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-2) && f(-1));
  return 0;
}
}
namespace A49_5{
void test(){cout << (5 == false > 7 >= 8.0);}

}
namespace A49_6{
void test(){if (12 >= 15)
  cout << "d";
else
  cout << "a";}

}
namespace A49_7{
int f(int a, int b){
  int c = 82;
  if (b > -3)
    return 3;
  if (a == 0)
     c = 8;
  else
    return 0;
  return c;
}
int test(){
  cout << f(0, -1);
  return 0;
}
}
namespace A49_8{
int f(int &x, int &y){
  x = 5;
  y+= 7;
  return x;
}
int test(){
  int a = 9, b = 1;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 2;
    cout << ((b<=5) && ((a+=1) > 3))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A49_9{
int a = 7, b = 2, c = 5;
int f(int &b){
 int c;
 a = 2;
 b = 5;
 c = 3;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 4;
 int c = 1;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A49_10{
int a = 2, b = 9, c = 5;
int g(){
 int a = 2;
 b = 1;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 9;
 c = 1;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A49_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A49_12{
void test(){}

}
 

namespace A50_1{
void test(){cout << 15 % 15 % 4 / 8;}

}
namespace A50_2{
void test(){int a = 7;
cout << 'a' << ":" << a << ":" 
  << "a";
cout << ":" 
  << a - 48 / 6 * 5;}

}
namespace A50_3{
void test(){cout 
  << ( 4>4.0 and ! 5== true or 7<=2.0);}

}
namespace A50_4{
bool f(int n){
  cout<<"f";
  return n<=-3;
}
int test(){
  cout<<(f(7) || f(4));
  return 0;
}
}
namespace A50_5{
void test(){cout << (3 != 3.0 < 4.0 <= 4);}

}
namespace A50_6{
void test(){if (9 <= 9)
  cout << "j";
else
  cout << "m";}

}
namespace A50_7{
int f(int b){
  int y = 48;
  if (b)
    y = 9;
  if (b == 4)
     y = 7;
  else
     return 0;
  return y;
}
int test(){
  cout << f(-4);
  return 0;
}
}
namespace A50_8{
int f(int &x, int &y){
  x = 7;
  y-= 2;
  return y;
}
int test(){
  int a = 9, b = 1;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 4;
    cout << ((b<7) || ((a-=2) >= 7))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A50_9{
int a = 7, b = 9, c = 0;
int g(int a){
 a *= 1;
 b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 8;
 c = 2;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A50_10{
int a = 3, b = 4, c = 0;
int h(){
 a = 3;
 int b = 8;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 7;
 int c = 5;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A50_11{
namespace B1{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A50_12{
void test(){}

}
 

namespace A51_1{
void test(){cout << 12 / 12 / 5 % 4;}

}
namespace A51_2{
void test(){int b = 5;
cout << b - 4 * 9 / 5 * 4;
cout << ":" << 'b' << ":" << b 
  << ":" << "b";}

}
namespace A51_3{
void test(){cout 
  << (! 9!=3 ||  3<= 5.0 and 8.0<false);}

}
namespace A51_4{
bool f(int n){
  cout<<"f";
  return n<1;
}
int test(){
  cout<<(f(9) and f(-9));
  return 0;
}
}
namespace A51_5{
void test(){cout << (5.0 == 6 != 2 < true);}

}
namespace A51_6{
void test(){if (2 == 7)
  cout << "i";
else
  cout << "x";}

}
namespace A51_7{
int g(int c){
  int z = 16;
  if (c > 0)
    return 6;
  else if (c != -2)
     z = 5;
  else
     return 0;
  return z;
}
int test(){
  cout << g(-8);
  return 0;
}
}
namespace A51_8{
int f(int &x, int &y){
  x = 3;
  y+= 2;
  return y;
}
int test(){
  int a = 1, b = 7;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 6;
    cout << ((a>=3) && ((b+=1) <= 5))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A51_9{
int a = 3, b = 1, c = 2;
int h(int b){
 int c;
 a -= 4;
 b += 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 6;
 c = 8;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A51_10{
int a = 7, b = 1, c = 0;
int f(){
 a = 7;
 int b = 5;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 4;
 b = 9;
 int c = 8;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A51_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A51_12{
void test(){}

}
 

namespace A52_1{
void test(){cout << 10 % 5 * 12 * 10;}

}
namespace A52_2{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" 
  << "a";
cout << ":" 
  << a + 53 / 6 / 5;}

}
namespace A52_3{
void test(){cout 
  << ( 8>3.0 or ! true== 6 || 4>=6.0);}

}
namespace A52_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(8) or f(-4));
  return 0;
}
}
namespace A52_5{
void test(){cout << (false >= 8 > 9 <= 9.0);}

}
namespace A52_6{
void test(){if (8 != 16)
  cout << "s";
else
  cout << "v";}

}
namespace A52_7{
int f(int a){
  int x = 76;
  if (a <= 3)
    x = 6;
  if (a >= 4)
     x = 3;
  else
     return 1;
  return x;
}
int test(){
  cout << f(9);
  return 0;
}
}
namespace A52_8{
int f(int &x, int &y){
  x = 4;
  y-= 5;
  return x;
}
int test(){
  int a = 8, b = 1;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 9;
    cout << ((a>6) || ((b-=2) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A52_9{
int a = 9, b = 5, c = 0;
int f(int &a){
 a = 5;
 b *= 1;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 8;
 int c = 7;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A52_10{
int a = 2, b = 6, c = 4;
int g(){
 int a = 2;
 b = 7;
 int c = 8;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 1;
 c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A52_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A52_12{
void test(){}

}
 

namespace A53_1{
void test(){cout << 6 / 6 % 9 % 6;}

}
namespace A53_2{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a 
  << ":" << 'a';}

}
namespace A53_3{
void test(){cout 
  << ( false==9.0 || ! 7>= 2 || 9!=4.0);}

}
namespace A53_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-5) && f(0));
  return 0;
}
}
namespace A53_5{
void test(){cout << (6 < 6.0 <= 4 > 2.0);}

}
namespace A53_6{
void test(){if (5 < 10)
  cout << "v";
else
  cout << "r";}

}
namespace A53_7{
int g(int a, int b){
  int c = 14;
  if (a < 5)
    return 3;
  if (b != -4)
     c = 7;
  else
    c = 1;
  return c;
}
int test(){
  cout << g(5, -3);
  return 0;
}
}
namespace A53_8{
int f(int &x, int &y){
  x = 6;
  y-= 3;
  return x;
}
int test(){
  int a = 4, b = 8;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 3;
    cout << ((a>7) || ((b+=2) > 4))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A53_9{
int a = 9, b = 3, c = 5;
int g(int &b){
 int c;
 a -= 1;
 b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 4;
 c = 1;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A53_10{
int a = 2, b = 3, c = 5;
int h(){
 a = 2;
 int b = 9;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 6;
 int b = 2;
 c = 9;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A53_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A53_12{
void test(){}

}
 

namespace A54_1{
void test(){cout << 3 * 9 / 10 / 12;}

}
namespace A54_2{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A54_3{
void test(){cout 
  << (! 6.0<=5 &&  8< 5.0 && true>9);}

}
namespace A54_4{
bool f(int n){
  cout<<"f";
  return n==-4;
}
int test(){
  cout<<(f(1) or f(3));
  return 0;
}
}
namespace A54_5{
void test(){cout << (true != 3 == 8 >= 7.0);}

}
namespace A54_6{
void test(){if (7 > 19)
  cout << "n";
else
  cout << "t";}

}
namespace A54_7{
int h(int a, int b){
  int c = 33;
  if (b < -2)
    return 6;
  else if (a == 3)
     return 9;
  else
    c = 2;
  return c;
}
int test(){
  cout << h(-3, -6);
  return 0;
}
}
namespace A54_8{
int f(int &x, int &y){
  x = 5;
  y+= 2;
  return y;
}
int test(){
  int a = 6, b = 4;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 9;
    cout << ((b>=4) && ((a-=1) <= 3))
       << a << ":" << b << ":";
  }
  {
    a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A54_9{
int a = 6, b = 2, c = 8;
int h(int a){
 a = 5;
 b += 5;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 6;
 int b = 3;
 c = 2;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A54_10{
int a = 0, b = 5, c = 8;
int f(){
 a = 0;
 int b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 0;
 int c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A54_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A54_12{
void test(){}

}
 

namespace A55_1{
void test(){cout << 6 * 4 / 15 * 6;}

}
namespace A55_2{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A55_3{
void test(){cout 
  << (! 7!=2 and  true< 3 and 3.0>8.0);}

}
namespace A55_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-6) and f(-3));
  return 0;
}
}
namespace A55_5{
void test(){cout << (2 < 9 == 3.0 > 7);}

}
namespace A55_6{
void test(){if (19 == 2)
  cout << "h";
else
  cout << "u";}

}
namespace A55_7{
int h(int c){
  int w = 26;
  if (c < 5)
    w = 5;
  if (c < -1)
     return 4;
  else
     return 2;
  return w;
}
int test(){
  cout << h(7);
  return 0;
}
}
namespace A55_8{
int f(int &x, int &y){
  x = 4;
  y+= 9;
  return x;
}
int test(){
  int a = 3, b = 7;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 6;
    cout << ((b<=5) || ((a-=2) < 7))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A55_9{
int a = 9, b = 4, c = 7;
int h(int &b){
 int c;
 a -= 1;
 b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 5;
 c = 1;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A55_10{
int a = 3, b = 7, c = 2;
int h(){
 int a = 3;
 b = 8;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 4;
 c = 6;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A55_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A55_12{
void test(){}

}
 

namespace A56_1{
void test(){cout << 5 / 6 % 6 % 9;}

}
namespace A56_2{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 59 / 5 / 6;}

}
namespace A56_3{
void test(){cout 
  << (! 2.0<=6 or  7.0>= 5 or 4==false);}

}
namespace A56_4{
bool f(int n){
  cout<<"f";
  return n!=-2;
}
int test(){
  cout<<(f(5) || f(6));
  return 0;
}
}
namespace A56_5{
void test(){cout << (false != 2.0 >= 5 <= 4.0);}

}
namespace A56_6{
void test(){if (13 < 13)
  cout << "l";
else
  cout << "y";}

}
namespace A56_7{
int f(int a, int b){
  int c = 74;
  if (a)
    return 4;
  if (b > 3)
     c = 5;
  else
    c = 1;
  return c;
}
int test(){
  cout << f(6, -5);
  return 0;
}
}
namespace A56_8{
int f(int &x, int &y){
  x = 1;
  y-= 5;
  return y;
}
int test(){
  int a = 6, b = 7;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 4;
    cout << ((b<4) && ((a+=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A56_9{
int a = 1, b = 2, c = 4;
int g(int a){
 a += 1;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 7;
 int b = 0;
 c = 6;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A56_10{
int a = 5, b = 4, c = 0;
int f(){
 int a = 5;
 b = 6;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 9;
 c = 2;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A56_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A56_12{
void test(){}

}
 

namespace A57_1{
void test(){cout << 3 % 5 * 10 / 4;}

}
namespace A57_2{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' 
  << ":" << "c";}

}
namespace A57_3{
void test(){cout 
  << ( 6>=true or ! 4.0> 2 or 5.0<=7);}

}
namespace A57_4{
bool f(int n){
  cout<<"f";
  return n>=1;
}
int test(){
  cout<<(f(-8) && f(2));
  return 0;
}
}
namespace A57_5{
void test(){cout << (2 >= true > 6 != 8.0);}

}
namespace A57_6{
void test(){if (14 != 6)
  cout << "e";
else
  cout << "a";}

}
namespace A57_7{
int g(int b){
  int v = 72;
  if (b)
    v = 7;
  else if (b != 1)
     v = 8;
  else
     return 9;
  return v;
}
int test(){
  cout << g(-7);
  return 0;
}
}
namespace A57_8{
int f(int &x, int &y){
  x = 2;
  y-= 9;
  return x;
}
int test(){
  int a = 3, b = 5;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 6;
    cout << ((b>=7) && ((a+=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A57_9{
int a = 9, b = 3, c = 8;
int f(int a){
 a = 4;
 b *= 2;
 c = 2;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 7;
 int c = 4;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A57_10{
int a = 8, b = 1, c = 7;
int g(){
 a = 8;
 int b = 8;
 int c = 2;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 3;
 c = 6;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A57_11{
namespace B1{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A57_12{
void test(){}

}
 

namespace A58_1{
void test(){cout << 9 / 8 / 12 / 5;}

}
namespace A58_2{
void test(){int a = 3;
cout << a + 8 * 6 / 5 * 7;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A58_3{
void test(){cout 
  << ( 3.0!=5 and ! false< 3 || 2.0==9);}

}
namespace A58_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(2) and f(-2));
  return 0;
}
}
namespace A58_5{
void test(){cout << (false <= 6.0 == 4 < 8);}

}
namespace A58_6{
void test(){if (10 >= 1)
  cout << "o";
else
  cout << "z";}

}
namespace A58_7{
int h(int a, int b){
  int c = 97;
  if (a != 5)
    return 2;
  else if (b >= -5)
     return 8;
  else
    c = 7;
  return c;
}
int test(){
  cout << h(-5, 1);
  return 0;
}
}
namespace A58_8{
int f(int &x, int &y){
  x = 7;
  y+= 9;
  return y;
}
int test(){
  int a = 8, b = 5;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((b<3) || ((a-=1) <= 5))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A58_9{
int a = 5, b = 1, c = 2;
int h(int &b){
 int c;
 a += 4;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 9;
 c = 0;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A58_10{
int a = 0, b = 1, c = 4;
int g(){
 a = 0;
 int b = 9;
 int c = 8;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 1;
 c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A58_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A58_12{
void test(){}

}
 

namespace A59_1{
void test(){cout << 10 % 9 % 4 % 8;}

}
namespace A59_2{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" 
  << a;
cout << ":" 
  << a - 67 / 6 * 5;}

}
namespace A59_3{
void test(){cout 
  << ( 8<4 || ! true<= 6.0 && 7.0==8);}

}
namespace A59_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-4) || f(1));
  return 0;
}
}
namespace A59_5{
void test(){cout << (7 > 7.0 >= 9.0 != 5.0);}

}
namespace A59_6{
void test(){if (4 > 4)
  cout << "s";
else
  cout << "b";}

}
namespace A59_7{
int f(int a, int b){
  int c = 61;
  if (a <= 2)
    c = 6;
  if (b > 0)
     return 9;
  else
    return 4;
  return c;
}
int test(){
  cout << f(7, 6);
  return 0;
}
}
namespace A59_8{
int f(int &x, int &y){
  x = 1;
  y+= 6;
  return x;
}
int test(){
  int a = 9, b = 2;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 3;
    cout << ((a>6) || ((b+=1) > 7))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A59_9{
int a = 8, b = 3, c = 6;
int g(int &b){
 int c;
 a = 3;
 b *= 4;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 7;
 c = 2;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A59_10{
int a = 7, b = 4, c = 9;
int h(){
 a = 7;
 int b = 2;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 9;
 c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A59_11{
namespace B1{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A59_12{
void test(){}

}
 

namespace A60_1{
void test(){cout << 15 * 10 * 3 * 15;}

}
namespace A60_2{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" 
  << d;
cout << ":" 
  << d - 59 / 5 / 6;}

}
namespace A60_3{
void test(){cout 
  << ( 8.0>5 && ! false>= 3 and 9.0!=4);}

}
namespace A60_4{
bool f(int n){
  cout<<"f";
  return n>0;
}
int test(){
  cout<<(f(7) or f(0));
  return 0;
}
}
namespace A60_5{
void test(){cout << (3 <= true == 9 < 5);}

}
namespace A60_6{
void test(){if (6 <= 0)
  cout << "d";
else
  cout << "j";}

}
namespace A60_7{
int g(int a, int b){
  int c = 47;
  if (a)
    c = 3;
  else if (b <= -1)
     return 5;
  else
    c = 0;
  return c;
}
int test(){
  cout << g(4, 8);
  return 0;
}
}
namespace A60_8{
int f(int &x, int &y){
  x = 4;
  y-= 8;
  return y;
}
int test(){
  int a = 5, b = 7;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 6;
    cout << ((b<=5) && ((a-=2) < 3))
       << a << ":" << b << ":";
  }
  {
    int a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A60_9{
int a = 1, b = 8, c = 0;
int f(int a){
 a = 1;
 b -= 3;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 3;
 c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A60_10{
int a = 5, b = 6, c = 3;
int f(){
 int a = 5;
 b = 0;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 7;
 c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A60_11{
namespace B1{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A60_12{
void test(){}

}
 

namespace A61_1{
void test(){cout << 8 / 12 / 8 / 3;}

}
namespace A61_2{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A61_3{
void test(){cout 
  << ( 8.0>=9 && ! 2== false || 7.0<6);}

}
namespace A61_4{
bool f(int n){
  cout<<"f";
  return n<-4;
}
int test(){
  cout<<(f(4) || f(-7));
  return 0;
}
}
namespace A61_5{
void test(){cout << (3 < true <= 7 > 5.0);}

}
namespace A61_6{
void test(){if (1 >= 8)
  cout << "q";
else
  cout << "i";}

}
namespace A61_7{
int g(int a, int b){
  int c = 63;
  if (a != -2)
    c = 1;
  else if (a >= -4)
     return 0;
  else
    return 8;
  return c;
}
int test(){
  cout << g(8, 9);
  return 0;
}
}
namespace A61_8{
int f(int &x, int &y){
  x = 2;
  y+= 3;
  return x;
}
int test(){
  int a = 9, b = 5;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 6;
    cout << ((b>=4) || ((a-=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A61_9{
int a = 0, b = 1, c = 5;
int h(int b){
 a += 2;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 8;
 c = 9;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A61_10{
int a = 6, b = 5, c = 7;
int h(){
 a = 6;
 int b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 3;
 int c = 9;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A61_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A61_12{
void test(){}

}
 

namespace A62_1{
void test(){cout << 4 % 3 * 5 % 10;}

}
namespace A62_2{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A62_3{
void test(){cout 
  << ( true<=7 or ! 2> 2.0 and 3!=6.0);}

}
namespace A62_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(9) and f(-5));
  return 0;
}
}
namespace A62_5{
void test(){cout << (7.0 >= 9 == false != 4.0);}

}
namespace A62_6{
void test(){if (16 == 4)
  cout << "w";
else
  cout << "p";}

}
namespace A62_7{
int g(int a){
  int w = 55;
  if (a)
    return 8;
  if (a >= 0)
     w = 9;
  else
     w = 2;
  return w;
}
int test(){
  cout << g(6);
  return 0;
}
}
namespace A62_8{
int f(int &x, int &y){
  x = 2;
  y-= 3;
  return y;
}
int test(){
  int a = 1, b = 4;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 7;
    cout << ((a<5) && ((b+=1) < 3))
       << a << ":" << b << ":";
  }
  {
    int a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A62_9{
int a = 7, b = 6, c = 3;
int g(int &a){
 int c;
 a = 1;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 6;
 int c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A62_10{
int a = 1, b = 0, c = 0;
int g(){
 a = 1;
 int b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 4;
 int c = 8;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A62_11{
namespace B1{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A62_12{
void test(){}

}
 

namespace A63_1{
void test(){cout << 12 * 15 % 9 * 12;}

}
namespace A63_2{
void test(){int b = 9;
cout << b << ":" << 'b' << ":" 
  << "b";
cout << ":" 
  << b + 67 % 15 / 5;}

}
namespace A63_3{
void test(){cout 
  << (! 6==8 and  5.0!= false && 3.0<7);}

}
namespace A63_4{
bool f(int n){
  cout<<"f";
  return n>=-3;
}
int test(){
  cout<<(f(6) or f(-6));
  return 0;
}
}
namespace A63_5{
void test(){cout << (8 <= 4 < 5 != 6.0);}

}
namespace A63_6{
void test(){if (11 < 19)
  cout << "k";
else
  cout << "x";}

}
namespace A63_7{
int h(int a, int b){
  int c = 29;
  if (b)
    c = 3;
  if (b == 4)
     return 6;
  else
    c = 5;
  return c;
}
int test(){
  cout << h(-9, 7);
  return 0;
}
}
namespace A63_8{
int f(int &x, int &y){
  x = 6;
  y-= 3;
  return y;
}
int test(){
  int a = 1, b = 5;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 9;
    cout << ((b>6) || ((a+=2) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A63_9{
int a = 4, b = 2, c = 1;
int f(int b){
 int c;
 a *= 2;
 b -= 5;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 9;
 c = 3;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A63_10{
int a = 7, b = 5, c = 6;
int f(){
 int a = 7;
 b = 9;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 3;
 int c = 6;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A63_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A63_12{
void test(){}

}
 

namespace A64_1{
void test(){cout << 3 / 15 % 3 / 8;}

}
namespace A64_2{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A64_3{
void test(){cout 
  << ( 9>5 || ! 4<= 9.0 or true>=4.0);}

}
namespace A64_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-3) && f(-1));
  return 0;
}
}
namespace A64_5{
void test(){cout << (2 >= 6 > 2.0 == 5);}

}
namespace A64_6{
void test(){if (18 != 9)
  cout << "f";
else
  cout << "c";}

}
namespace A64_7{
int f(int d){
  int v = 31;
  if (d <= -4)
    return 4;
  else if (d == -3)
     return 1;
  else
     v = 0;
  return v;
}
int test(){
  cout << f(-1);
  return 0;
}
}
namespace A64_8{
int f(int &x, int &y){
  x = 1;
  y+= 8;
  return x;
}
int test(){
  int a = 6, b = 2;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 3;
    cout << ((b<=7) && ((a-=1) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A64_9{
int a = 5, b = 8, c = 1;
int h(int &a){
 a = 4;
 b += 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 8;
 int c = 3;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A64_10{
int a = 1, b = 7, c = 8;
int h(){
 a = 1;
 int b = 4;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 9;
 int c = 8;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A64_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A64_12{
void test(){}

}
 

namespace A65_1{
void test(){cout << 10 * 5 / 5 % 4;}

}
namespace A65_2{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' 
  << ":" << b;}

}
namespace A65_3{
void test(){cout 
  << (! 5!=9.0 &&  false> 9 && 3<5.0);}

}
namespace A65_4{
bool f(int n){
  cout<<"f";
  return n==4;
}
int test(){
  cout<<(f(3) or f(-8));
  return 0;
}
}
namespace A65_5{
void test(){cout << (true > 8.0 <= false < 3.0);}

}
namespace A65_6{
void test(){if (8 > 15)
  cout << "g";
else
  cout << "m";}

}
namespace A65_7{
int h(int c){
  int u = 43;
  if (c > -5)
    return 6;
  if (c == 2)
     u = 5;
  else
     u = 7;
  return u;
}
int test(){
  cout << h(-3);
  return 0;
}
}
namespace A65_8{
int f(int &x, int &y){
  x = 9;
  y+= 4;
  return y;
}
int test(){
  int a = 9, b = 6;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 2;
    cout << ((b<=3) && ((a+=2) <= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A65_9{
int a = 4, b = 5, c = 2;
int g(int a){
 a = 4;
 b *= 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 9;
 c = 0;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A65_10{
int a = 0, b = 5, c = 6;
int g(){
 int a = 0;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 4;
 int c = 2;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A65_11{
namespace B1{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A65_12{
void test(){}

}
 

namespace A66_1{
void test(){cout << 12 % 9 * 8 * 9;}

}
namespace A66_2{
void test(){int d = 6;
cout << d - 5 * 4 / 8 * 9;
cout << ":" << "d" << ":" << 'd' 
  << ":" << d;}

}
namespace A66_3{
void test(){cout 
  << ( true>=7.0 and ! 7<= 6 || 2==2.0);}

}
namespace A66_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) || f(5));
  return 0;
}
}
namespace A66_5{
void test(){cout << (7 != 4 >= 9 == 9.0);}

}
namespace A66_6{
void test(){if (13 <= 16)
  cout << "w";
else
  cout << "g";}

}
namespace A66_7{
int f(int a, int b){
  int c = 81;
  if (b < -3)
    return 7;
  else if (a > 1)
     c = 9;
  else
    return 4;
  return c;
}
int test(){
  cout << f(-2, 4);
  return 0;
}
}
namespace A66_8{
int f(int &x, int &y){
  x = 1;
  y-= 5;
  return x;
}
int test(){
  int a = 4, b = 7;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 3;
    cout << ((b>=3) || ((a-=1) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A66_9{
int a = 9, b = 3, c = 4;
int f(int &b){
 int c;
 a = 3;
 b -= 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 2;
 c = 1;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A66_10{
int a = 4, b = 5, c = 7;
int f(){
 a = 4;
 int b = 2;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 6;
 c = 0;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A66_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A66_12{
void test(){}

}
 

namespace A67_1{
void test(){cout << 9 % 4 % 6 / 6;}

}
namespace A67_2{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" 
  << "d";
cout << ":" 
  << d + 48 % 15 * 5;}

}
namespace A67_3{
void test(){cout 
  << (! false<=4 ||  3.0< 8 and 8.0>=8);}

}
namespace A67_4{
bool f(int n){
  cout<<"f";
  return n<=-1;
}
int test(){
  cout<<(f(8) and f(1));
  return 0;
}
}
namespace A67_5{
void test(){cout << (8.0 > false >= 6 < 8);}

}
namespace A67_6{
void test(){if (12 != 5)
  cout << "i";
else
  cout << "j";}

}
namespace A67_7{
int f(int b){
  int x = 11;
  if (b <= 1)
    return 3;
  else if (b >= -4)
     return 6;
  else
     x = 8;
  return x;
}
int test(){
  cout << f(-6);
  return 0;
}
}
namespace A67_8{
int f(int &x, int &y){
  x = 6;
  y-= 5;
  return x;
}
int test(){
  int a = 7, b = 8;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 2;
    cout << ((a>5) && ((b+=2) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A67_9{
int a = 7, b = 0, c = 6;
int g(int &b){
 a = 5;
 b = 2;
 c = 2;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 0;
 c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A67_10{
int a = 9, b = 8, c = 8;
int g(){
 int a = 9;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 7;
 int c = 6;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A67_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A67_12{
void test(){}

}
 

namespace A68_1{
void test(){cout << 5 * 10 / 9 * 10;}

}
namespace A68_2{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A68_3{
void test(){cout 
  << ( 4.0==6.0 or ! true!= 5 or 7>9);}

}
namespace A68_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-8) && f(9));
  return 0;
}
}
namespace A68_5{
void test(){cout << (3.0 != 3 == 4.0 <= 2);}

}
namespace A68_6{
void test(){if (2 > 3)
  cout << "y";
else
  cout << "b";}

}
namespace A68_7{
int h(int a, int b){
  int c = 46;
  if (b < -1)
    c = 2;
  if (a <= 0)
     return 6;
  else
    c = 5;
  return c;
}
int test(){
  cout << h(-1, 0);
  return 0;
}
}
namespace A68_8{
int f(int &x, int &y){
  x = 6;
  y+= 1;
  return y;
}
int test(){
  int a = 2, b = 4;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 9;
    cout << ((a<4) || ((b-=1) < 6))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A68_9{
int a = 5, b = 3, c = 6;
int h(int a){
 int c;
 a += 5;
 b *= 1;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 1;
 int c = 4;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A68_10{
int a = 9, b = 2, c = 5;
int f(){
 int a = 9;
 b = 1;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 2;
 int c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A68_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A68_12{
void test(){}

}
 

namespace A69_1{
void test(){cout << 8 / 3 * 15 % 12;}

}
namespace A69_2{
void test(){int d = 5;
cout << d - 7 * 4 / 6 * 9;
cout << ":" << 'd' << ":" << d 
  << ":" << "d";}

}
namespace A69_3{
void test(){cout 
  << (! 4.0<6 and  2.0== false || 3<=2);}

}
namespace A69_4{
bool f(int n){
  cout<<"f";
  return n!=2;
}
int test(){
  cout<<(f(0) && f(4));
  return 0;
}
}
namespace A69_5{
void test(){cout << (true >= 2 == 2.0 > 6);}

}
namespace A69_6{
void test(){if (0 == 6)
  cout << "n";
else
  cout << "a";}

}
namespace A69_7{
int g(int a, int b){
  int c = 18;
  if (b == -5)
    c = 4;
  if (b != 2)
     return 1;
  else
    c = 7;
  return c;
}
int test(){
  cout << g(2, 3);
  return 0;
}
}
namespace A69_8{
int f(int &x, int &y){
  x = 8;
  y+= 8;
  return y;
}
int test(){
  int a = 4, b = 2;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 9;
    cout << ((a>6) || ((b+=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A69_9{
int a = 8, b = 9, c = 4;
int f(int a){
 a = 3;
 b -= 2;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 8;
 int c = 7;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A69_10{
int a = 8, b = 3, c = 1;
int h(){
 int a = 8;
 b = 5;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 5;
 c = 7;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A69_11{
namespace B1{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A69_12{
void test(){}

}
 

namespace A70_1{
void test(){cout << 15 % 8 / 10 % 15;}

}
namespace A70_2{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" 
  << ":" << c;}

}
namespace A70_3{
void test(){cout 
  << (! 4>=6.0 ||  true!= 3 and 6>3.0);}

}
namespace A70_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-3) and f(6));
  return 0;
}
}
namespace A70_5{
void test(){cout << (true < 9.0 <= 5 != 4);}

}
namespace A70_6{
void test(){if (3 <= 2)
  cout << "p";
else
  cout << "v";}

}
namespace A70_7{
int h(int a){
  int y = 39;
  if (a)
    return 4;
  if (a > -2)
     y = 9;
  else
     y = 1;
  return y;
}
int test(){
  cout << h(4);
  return 0;
}
}
namespace A70_8{
int f(int &x, int &y){
  x = 5;
  y-= 6;
  return x;
}
int test(){
  int a = 3, b = 7;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 5;
    cout << ((b>=7) && ((a-=2) > 3))
       << a << ":" << b << ":";
  }
  {
    a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A70_9{
int a = 2, b = 3, c = 9;
int h(int &b){
 int c;
 a = 3;
 b *= 5;
 c = 4;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 0;
 c = 1;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A70_10{
int a = 2, b = 6, c = 4;
int g(){
 a = 2;
 int b = 8;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 0;
 c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A70_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A70_12{
void test(){}

}
 

namespace A71_1{
void test(){cout << 6 / 12 % 12 * 5;}

}
namespace A71_2{
void test(){int d = 6;
cout << 'd' << ":" << "d" << ":" 
  << d;
cout << ":" 
  << d + 48 % 15 * 5;}

}
namespace A71_3{
void test(){cout 
  << ( 2<=5.0 && ! 8> true or 7.0>=7);}

}
namespace A71_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(2) || f(8));
  return 0;
}
}
namespace A71_5{
void test(){cout << (8 == 7.0 < false > 6.0);}

}
namespace A71_6{
void test(){if (4 < 1)
  cout << "l";
else
  cout << "o";}

}
namespace A71_7{
int g(int d){
  int z = 51;
  if (d < 3)
    return 0;
  else if (d != -3)
     return 2;
  else
     z = 5;
  return z;
}
int test(){
  cout << g(3);
  return 0;
}
}
namespace A71_8{
int f(int &x, int &y){
  x = 3;
  y-= 1;
  return x;
}
int test(){
  int a = 8, b = 9;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 4;
    cout << ((a<3) || ((b-=1) < 4))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A71_9{
int a = 5, b = 3, c = 0;
int f(int &a){
 a -= 2;
 b += 5;
 c = 3;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 7;
 int c = 4;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A71_10{
int a = 7, b = 3, c = 5;
int f(){
 a = 7;
 int b = 4;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 2;
 b = 0;
 int c = 8;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A71_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A71_12{
void test(){}

}
 

namespace A72_1{
void test(){cout << 4 * 6 * 4 / 3;}

}
namespace A72_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 53 / 6 * 6;}

}
namespace A72_3{
void test(){cout 
  << (! 8.0==5 or  false!= 4 && 9<9.0);}

}
namespace A72_4{
bool f(int n){
  cout<<"f";
  return n>3;
}
int test(){
  cout<<(f(-1) or f(7));
  return 0;
}
}
namespace A72_5{
void test(){cout << (5.0 <= 7 >= 3 != 9);}

}
namespace A72_6{
void test(){if (7 >= 18)
  cout << "c";
else
  cout << "z";}

}
namespace A72_7{
int f(int a, int b){
  int c = 13;
  if (a)
    return 3;
  else if (a >= -4)
     c = 8;
  else
    return 2;
  return c;
}
int test(){
  cout << f(-8, -8);
  return 0;
}
}
namespace A72_8{
int f(int &x, int &y){
  x = 2;
  y+= 9;
  return y;
}
int test(){
  int a = 3, b = 8;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 6;
    cout << ((a<=7) && ((b+=2) >= 3))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A72_9{
int a = 8, b = 2, c = 6;
int g(int b){
 int c;
 a = 1;
 b = 4;
 c = 5;
 return a + b + c;
}
int test(){
 a = 9;
 b = 0;
 int c = 2;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A72_10{
int a = 9, b = 1, c = 3;
int h(){
 a = 9;
 int b = 2;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 8;
 int c = 9;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A72_11{
namespace B1{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A72_12{
void test(){}

}
 

namespace A73_1{
void test(){cout << 15 % 3 / 6 % 3;}

}
namespace A73_2{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A73_3{
void test(){cout 
  << ( 3>7 and ! true!= 8.0 || 4>=2.0);}

}
namespace A73_4{
bool f(int n){
  cout<<"f";
  return n<4;
}
int test(){
  cout<<(f(-6) and f(-2));
  return 0;
}
}
namespace A73_5{
void test(){cout << (3 >= 2 <= 6.0 < false);}

}
namespace A73_6{
void test(){if (17 <= 11)
  cout << "e";
else
  cout << "f";}

}
namespace A73_7{
int h(int c){
  int z = 88;
  if (c == 5)
    return 7;
  if (c <= -1)
     z = 3;
  else
     return 3;
  return z;
}
int test(){
  cout << h(8);
  return 0;
}
}
namespace A73_8{
int f(int &x, int &y){
  x = 8;
  y-= 7;
  return y;
}
int test(){
  int a = 6, b = 2;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 5;
    cout << ((b<5) || ((a-=1) <= 5))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A73_9{
int a = 1, b = 8, c = 9;
int g(int a){
 a += 4;
 b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 3;
 c = 5;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A73_10{
int a = 4, b = 0, c = 7;
int g(){
 a = 4;
 int b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 0;
 int c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A73_11{
namespace B1{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A73_12{
void test(){}

}
 

namespace A74_1{
void test(){cout << 9 * 12 * 5 / 5;}

}
namespace A74_2{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A74_3{
void test(){cout 
  << ( 7.0==5 || ! 9.0<= false and 9<2);}

}
namespace A74_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) or f(-7));
  return 0;
}
}
namespace A74_5{
void test(){cout << (9 == 4.0 != 5.0 > 4);}

}
namespace A74_6{
void test(){if (14 >= 13)
  cout << "k";
else
  cout << "r";}

}
namespace A74_7{
int h(int a, int b){
  int c = 77;
  if (a < 5)
    return 0;
  if (a <= -2)
     c = 9;
  else
    c = 1;
  return c;
}
int test(){
  cout << h(-7, -4);
  return 0;
}
}
namespace A74_8{
int f(int &x, int &y){
  x = 3;
  y+= 4;
  return x;
}
int test(){
  int a = 3, b = 7;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 5;
    cout << ((a>=4) && ((b+=2) > 7))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A74_9{
int a = 4, b = 6, c = 1;
int h(int &b){
 int c;
 a *= 1;
 b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 7;
 int b = 4;
 c = 3;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A74_10{
int a = 6, b = 3, c = 7;
int f(){
 int a = 6;
 b = 1;
 int c = 8;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 5;
 c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A74_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A74_12{
void test(){}

}
 

namespace A75_1{
void test(){cout << 4 / 15 % 3 * 15;}

}
namespace A75_2{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A75_3{
void test(){cout 
  << ( 3.0!=false or ! 8== 6 or 5.0>=2);}

}
namespace A75_4{
bool f(int n){
  cout<<"f";
  return n!=-2;
}
int test(){
  cout<<(f(5) || f(-5));
  return 0;
}
}
namespace A75_5{
void test(){cout << (true == 7 >= 5 != 9.0);}

}
namespace A75_6{
void test(){if (9 > 10)
  cout << "x";
else
  cout << "d";}

}
namespace A75_7{
int f(int a){
  int w = 40;
  if (a != 0)
    w = 2;
  else if (a < -5)
     return 6;
  else
     w = 4;
  return w;
}
int test(){
  cout << f(0);
  return 0;
}
}
namespace A75_8{
int f(int &x, int &y){
  x = 1;
  y+= 8;
  return x;
}
int test(){
  int a = 4, b = 9;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 9;
    cout << ((b>6) && ((a-=1) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A75_9{
int a = 8, b = 6, c = 9;
int f(int a){
 a = 4;
 b -= 3;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 2;
 c = 0;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A75_10{
int a = 9, b = 0, c = 2;
int h(){
 int a = 9;
 b = 7;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 3;
 int c = 4;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A75_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A75_12{
void test(){}

}
 

namespace A76_1{
void test(){cout << 12 * 9 * 4 * 9;}

}
namespace A76_2{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" 
  << ":" << c;}

}
namespace A76_3{
void test(){cout 
  << ( 9<4.0 && ! 7<= 6.0 && true>5);}

}
namespace A76_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(3) && f(-4));
  return 0;
}
}
namespace A76_5{
void test(){cout << (8 <= 6 > 7.0 < false);}

}
namespace A76_6{
void test(){if (10 != 12)
  cout << "h";
else
  cout << "s";}

}
namespace A76_7{
int g(int d){
  int x = 19;
  if (d)
    x = 7;
  if (d >= 2)
     return 8;
  else
     return 1;
  return x;
}
int test(){
  cout << g(-1);
  return 0;
}
}
namespace A76_8{
int f(int &x, int &y){
  x = 6;
  y-= 5;
  return y;
}
int test(){
  int a = 3, b = 7;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 1;
    cout << ((a<=3) || ((b+=2) >= 3))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A76_9{
int a = 1, b = 9, c = 2;
int h(int &b){
 int c;
 a -= 2;
 b += 5;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 0;
 int b = 8;
 c = 7;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A76_10{
int a = 6, b = 4, c = 0;
int f(){
 a = 6;
 int b = 8;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 3;
 int c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A76_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A76_12{
void test(){}

}
 

namespace A77_1{
void test(){cout << 3 / 8 / 8 % 8;}

}
namespace A77_2{
void test(){int d = 5;
cout << "d" << ":" << 'd' << ":" 
  << d;
cout << ":" 
  << d - 53 % 15 * 6;}

}
namespace A77_3{
void test(){cout 
  << (! 2.0<3 or  true<= 4 || 8!=9.0);}

}
namespace A77_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) and f(1));
  return 0;
}
}
namespace A77_5{
void test(){cout << (8 >= 8.0 == 3 < 7);}

}
namespace A77_6{
void test(){if (5 == 17)
  cout << "q";
else
  cout << "u";}

}
namespace A77_7{
int f(int a, int b){
  int c = 21;
  if (b >= 3)
    return 8;
  else if (b != 1)
     return 9;
  else
    c = 7;
  return c;
}
int test(){
  cout << f(-6, -7);
  return 0;
}
}
namespace A77_8{
int f(int &x, int &y){
  x = 4;
  y+= 2;
  return x;
}
int test(){
  int a = 6, b = 9;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((a<=7) && ((b+=2) <= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A77_9{
int a = 4, b = 6, c = 5;
int f(int &a){
 int c;
 a *= 4;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 9;
 int c = 1;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A77_10{
int a = 7, b = 2, c = 4;
int h(){
 int a = 7;
 b = 1;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 6;
 b = 7;
 int c = 0;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A77_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A77_12{
void test(){}

}
 

namespace A78_1{
void test(){cout << 10 % 4 % 15 / 10;}

}
namespace A78_2{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' 
  << ":" << "b";}

}
namespace A78_3{
void test(){cout 
  << (! 6>=6.0 and  5.0== 3 and 6>false);}

}
namespace A78_4{
bool f(int n){
  cout<<"f";
  return n>=3;
}
int test(){
  cout<<(f(-2) || f(-8));
  return 0;
}
}
namespace A78_5{
void test(){cout << (true > 3.0 != 2.0 <= 5);}

}
namespace A78_6{
void test(){if (6 < 14)
  cout << "m";
else
  cout << "t";}

}
namespace A78_7{
int f(int b){
  int y = 44;
  if (b > 4)
    y = 0;
  else if (b <= 0)
     y = 9;
  else
     return 5;
  return y;
}
int test(){
  cout << f(-8);
  return 0;
}
}
namespace A78_8{
int f(int &x, int &y){
  x = 8;
  y-= 3;
  return y;
}
int test(){
  int a = 6, b = 9;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 4;
    cout << ((a>=4) || ((b-=1) > 5))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A78_9{
int a = 5, b = 3, c = 4;
int g(int b){
 a = 5;
 b = 1;
 c = 2;
 return a + b + c;
}
int test(){
 a = 8;
 b = 2;
 int c = 7;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A78_10{
int a = 2, b = 5, c = 9;
int g(){
 a = 2;
 int b = 8;
 c = 0;
 return a + b + c;
}
int test(){
 int a = 4;
 int b = 2;
 c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A78_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A78_12{
void test(){}

}
 

namespace A79_1{
void test(){cout << 8 % 10 % 12 / 6;}

}
namespace A79_2{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' 
  << ":" << d;}

}
namespace A79_3{
void test(){cout 
  << ( 7.0>=false && ! 7<= 4.0 && 2>5);}

}
namespace A79_4{
bool f(int n){
  cout<<"f";
  return n>-1;
}
int test(){
  cout<<(f(6) or f(3));
  return 0;
}
}
namespace A79_5{
void test(){cout << (4 > false == 2 < 8.0);}

}
namespace A79_6{
void test(){if (19 > 0)
  cout << "n";
else
  cout << "p";}

}
namespace A79_7{
int g(int a, int b){
  int c = 23;
  if (b)
    return 2;
  if (a == 4)
     c = 0;
  else
    return 6;
  return c;
}
int test(){
  cout << g(-8, -4);
  return 0;
}
}
namespace A79_8{
int f(int &x, int &y){
  x = 5;
  y-= 7;
  return x;
}
int test(){
  int a = 1, b = 3;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 4;
    cout << ((b>5) || ((a+=1) < 4))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A79_9{
int a = 6, b = 0, c = 0;
int h(int b){
 int c;
 a = 3;
 b += 2;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 8;
 c = 6;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A79_10{
int a = 7, b = 3, c = 5;
int h(){
 a = 7;
 int b = 6;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 1;
 int c = 8;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A79_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A79_12{
void test(){}

}
 

namespace A80_1{
void test(){cout << 6 * 6 / 10 * 4;}

}
namespace A80_2{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A80_3{
void test(){cout 
  << (! 3.0<true ||  4== 8.0 or 9!=8);}

}
namespace A80_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-7) && f(7));
  return 0;
}
}
namespace A80_5{
void test(){cout << (6 <= 6.0 != 5.0 >= true);}

}
namespace A80_6{
void test(){if (15 < 7)
  cout << "k";
else
  cout << "e";}

}
namespace A80_7{
int g(int a, int b){
  int c = 71;
  if (a)
    c = 3;
  else if (b > -3)
     return 4;
  else
    c = 5;
  return c;
}
int test(){
  cout << g(4, 6);
  return 0;
}
}
namespace A80_8{
int f(int &x, int &y){
  x = 9;
  y+= 2;
  return y;
}
int test(){
  int a = 1, b = 5;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 7;
    cout << ((b<6) && ((a-=2) >= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A80_9{
int a = 4, b = 2, c = 9;
int f(int &a){
 a -= 3;
 b *= 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 5;
 c = 1;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A80_10{
int a = 4, b = 3, c = 2;
int f(){
 int a = 4;
 b = 9;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 0;
 int b = 7;
 c = 5;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A80_11{
namespace B1{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A80_12{
void test(){}

}
 

namespace A81_1{
void test(){cout << 5 / 5 * 9 % 12;}

}
namespace A81_2{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 48 % 15 * 6;}

}
namespace A81_3{
void test(){cout 
  << (! 4!=7.0 and  6> 3 or false<=2.0);}

}
namespace A81_4{
bool f(int n){
  cout<<"f";
  return n<=-4;
}
int test(){
  cout<<(f(-5) || f(9));
  return 0;
}
}
namespace A81_5{
void test(){cout << (4.0 <= 9 >= 9 == 2);}

}
namespace A81_6{
void test(){if (10 != 15)
  cout << "t";
else
  cout << "s";}

}
namespace A81_7{
int g(int a){
  int v = 79;
  if (a != 5)
    v = 9;
  if (a < -1)
     return 5;
  else
     return 1;
  return v;
}
int test(){
  cout << g(3);
  return 0;
}
}
namespace A81_8{
int f(int &x, int &y){
  x = 8;
  y-= 5;
  return y;
}
int test(){
  int a = 1, b = 3;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 2;
    cout << ((b>6) && ((a-=1) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A81_9{
int a = 9, b = 5, c = 1;
int g(int &b){
 int c;
 a = 2;
 b = 1;
 c = 4;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 8;
 c = 2;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A81_10{
int a = 5, b = 9, c = 2;
int g(){
 int a = 5;
 b = 6;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 3;
 b = 8;
 int c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A81_11{
namespace B1{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A81_12{
void test(){}

}
 

namespace A82_1{
void test(){cout << 9 * 4 / 3 % 12;}

}
namespace A82_2{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A82_3{
void test(){cout 
  << (! 5.0==3.0 &&  2>= 5 && true<8);}

}
namespace A82_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-3) or f(0));
  return 0;
}
}
namespace A82_5{
void test(){cout << (false > 4 != 9.0 < 6);}

}
namespace A82_6{
void test(){if (19 == 5)
  cout << "v";
else
  cout << "w";}

}
namespace A82_7{
int f(int a, int b){
  int c = 72;
  if (b == -4)
    c = 3;
  if (a <= -1)
     return 8;
  else
    c = 9;
  return c;
}
int test(){
  cout << f(3, 7);
  return 0;
}
}
namespace A82_8{
int f(int &x, int &y){
  x = 7;
  y+= 8;
  return x;
}
int test(){
  int a = 4, b = 1;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 9;
    cout << ((b<3) || ((a+=2) < 7))
       << a << ":" << b << ":";
  }
  {
    a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A82_9{
int a = 6, b = 7, c = 4;
int f(int a){
 a = 3;
 b = 5;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 7;
 int c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A82_10{
int a = 1, b = 4, c = 9;
int f(){
 a = 1;
 int b = 1;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 5;
 b = 3;
 int c = 7;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A82_11{
namespace B1{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A82_12{
void test(){}

}
 

namespace A83_1{
void test(){cout << 5 / 9 % 15 * 5;}

}
namespace A83_2{
void test(){int a = 9;
cout << a + 6 * 8 / 9 * 7;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A83_3{
void test(){cout 
  << (! 7>true ||  9>= 4.0 || 9.0!=8);}

}
namespace A83_4{
bool f(int n){
  cout<<"f";
  return n==2;
}
int test(){
  cout<<(f(-1) && f(2));
  return 0;
}
}
namespace A83_5{
void test(){cout << (3.0 < 3 <= true != 5);}

}
namespace A83_6{
void test(){if (14 <= 2)
  cout << "x";
else
  cout << "c";}

}
namespace A83_7{
int h(int b){
  int u = 47;
  if (b)
    u = 4;
  else if (b == -2)
     u = 8;
  else
     return 2;
  return u;
}
int test(){
  cout << h(-6);
  return 0;
}
}
namespace A83_8{
int f(int &x, int &y){
  x = 5;
  y-= 3;
  return y;
}
int test(){
  int a = 2, b = 1;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 5;
    cout << ((b>=7) || ((a-=1) <= 3))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A83_9{
int a = 6, b = 0, c = 3;
int g(int a){
 a *= 4;
 b -= 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 9;
 c = 2;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A83_10{
int a = 4, b = 0, c = 8;
int g(){
 a = 4;
 int b = 2;
 int c = 9;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 1;
 c = 5;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A83_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A83_12{
void test(){}

}
 

namespace A84_1{
void test(){cout << 15 % 10 * 5 / 6;}

}
namespace A84_2{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A84_3{
void test(){cout 
  << (! false==8.0 or  3< 6.0 and 2<=7);}

}
namespace A84_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(5) and f(4));
  return 0;
}
}
namespace A84_5{
void test(){cout << (7 > 8 == 2.0 >= 7.0);}

}
namespace A84_6{
void test(){if (1 >= 9)
  cout << "h";
else
  cout << "j";}

}
namespace A84_7{
int h(int c){
  int w = 69;
  if (c >= 1)
    return 3;
  else if (c > 2)
     w = 7;
  else
     return 6;
  return w;
}
int test(){
  cout << h(9);
  return 0;
}
}
namespace A84_8{
int f(int &x, int &y){
  x = 4;
  y+= 8;
  return x;
}
int test(){
  int a = 3, b = 7;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 6;
    cout << ((b<=5) && ((a+=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A84_9{
int a = 8, b = 5, c = 2;
int h(int &b){
 int c;
 a += 1;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 4;
 int c = 1;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A84_10{
int a = 8, b = 0, c = 2;
int h(){
 int a = 8;
 b = 6;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 0;
 c = 7;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A84_11{
namespace B1{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A84_12{
void test(){}

}
 

namespace A85_1{
void test(){cout << 3 / 6 * 10 * 3;}

}
namespace A85_2{
void test(){int d = 6;
cout << d - 67 % 15 * 5;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A85_3{
void test(){cout 
  << ( 4!=5.0 or ! 9> true || 2.0>=5);}

}
namespace A85_4{
bool f(int n){
  cout<<"f";
  return n>=-3;
}
int test(){
  cout<<(f(-6) or f(-4));
  return 0;
}
}
namespace A85_5{
void test(){cout << (9.0 == 2.0 != 7 < 8);}

}
namespace A85_6{
void test(){if (18 > 0)
  cout << "q";
else
  cout << "m";}

}
namespace A85_7{
int h(int a, int b){
  int c = 48;
  if (a < 0)
    return 7;
  else if (b >= 1)
     return 2;
  else
    c = 0;
  return c;
}
int test(){
  cout << h(0, -9);
  return 0;
}
}
namespace A85_8{
int f(int &x, int &y){
  x = 4;
  y+= 3;
  return x;
}
int test(){
  int a = 7, b = 5;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 2;
    cout << ((a<4) || ((b-=2) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A85_9{
int a = 3, b = 0, c = 8;
int f(int b){
 int c;
 a += 2;
 b *= 5;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 9;
 int c = 5;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A85_10{
int a = 6, b = 2, c = 9;
int f(){
 a = 6;
 int b = 3;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 4;
 c = 5;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A85_11{
namespace B1{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A85_12{
void test(){}

}
 

namespace A86_1{
void test(){cout << 6 % 3 / 12 / 9;}

}
namespace A86_2{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A86_3{
void test(){cout 
  << ( 3.0<false && ! 6== 6.0 and 7<=2);}

}
namespace A86_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(8) || f(5));
  return 0;
}
}
namespace A86_5{
void test(){cout << (true >= 2 <= 8.0 > 6);}

}
namespace A86_6{
void test(){if (17 < 14)
  cout << "u";
else
  cout << "o";}

}
namespace A86_7{
int g(int a, int b){
  int c = 89;
  if (b > -3)
    return 4;
  else if (b != -5)
     c = 5;
  else
    return 6;
  return c;
}
int test(){
  cout << g(-9, -2);
  return 0;
}
}
namespace A86_8{
int f(int &x, int &y){
  x = 2;
  y-= 8;
  return y;
}
int test(){
  int a = 6, b = 4;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 3;
    cout << ((a<=3) && ((b+=1) > 4))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A86_9{
int a = 2, b = 1, c = 6;
int g(int &a){
 a = 4;
 b = 5;
 c = 1;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 3;
 c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A86_10{
int a = 9, b = 4, c = 8;
int h(){
 int a = 9;
 b = 6;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 1;
 int b = 0;
 c = 3;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A86_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A86_12{
void test(){}

}
 

namespace A87_1{
void test(){cout << 8 * 12 % 4 % 10;}

}
namespace A87_2{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A87_3{
void test(){cout 
  << ( 4.0==true || ! 6> 4 or 7.0<3);}

}
namespace A87_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(6) and f(-2));
  return 0;
}
}
namespace A87_5{
void test(){cout << (4.0 < false >= 5 == 4);}

}
namespace A87_6{
void test(){if (15 >= 17)
  cout << "l";
else
  cout << "g";}

}
namespace A87_7{
int h(int a, int b){
  int c = 94;
  if (b)
    c = 1;
  if (a <= 4)
     c = 0;
  else
    return 2;
  return c;
}
int test(){
  cout << h(-4, 5);
  return 0;
}
}
namespace A87_8{
int f(int &x, int &y){
  x = 1;
  y-= 1;
  return y;
}
int test(){
  int a = 7, b = 2;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 4;
    cout << ((b>7) && ((a-=1) >= 3))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A87_9{
int a = 0, b = 8, c = 5;
int h(int &a){
 a -= 3;
 b = 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 9;
 int c = 4;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A87_10{
int a = 7, b = 5, c = 7;
int g(){
 a = 7;
 int b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 3;
 int c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A87_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A87_12{
void test(){}

}
 

namespace A88_1{
void test(){cout << 4 * 15 * 6 * 15;}

}
namespace A88_2{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A88_3{
void test(){cout 
  << (! 9.0!=false and  9<= 8.0 && 8>=5);}

}
namespace A88_4{
bool f(int n){
  cout<<"f";
  return n!=1;
}
int test(){
  cout<<(f(9) && f(-1));
  return 0;
}
}
namespace A88_5{
void test(){cout << (3 <= 3.0 > 5.0 != false);}

}
namespace A88_6{
void test(){if (16 == 3)
  cout << "y";
else
  cout << "i";}

}
namespace A88_7{
int g(int d){
  int y = 10;
  if (d < 4)
    y = 0;
  if (d > -5)
     y = 0;
  else
     return 8;
  return y;
}
int test(){
  cout << g(-7);
  return 0;
}
}
namespace A88_8{
int f(int &x, int &y){
  x = 3;
  y+= 6;
  return x;
}
int test(){
  int a = 5, b = 4;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 3;
    cout << ((a>=4) || ((b+=2) <= 6))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A88_9{
int a = 7, b = 5, c = 8;
int g(int b){
 int c;
 a = 1;
 b = 4;
 c = 2;
 return a + b + c;
}
int test(){
 a = 3;
 b = 6;
 int c = 0;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A88_10{
int a = 9, b = 4, c = 5;
int h(){
 a = 9;
 int b = 6;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 6;
 int c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A88_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A88_12{
void test(){}

}
 

namespace A89_1{
void test(){cout << 12 / 8 % 9 / 8;}

}
namespace A89_2{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d 
  << ":" << 'd';}

}
namespace A89_3{
void test(){cout 
  << ( 6==3.0 || ! 8!= 8.0 or false<7);}

}
namespace A89_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(7) || f(-5));
  return 0;
}
}
namespace A89_5{
void test(){cout << (9 > 9 != 7 < 6.0);}

}
namespace A89_6{
void test(){if (12 <= 8)
  cout << "r";
else
  cout << "a";}

}
namespace A89_7{
int f(int b){
  int v = 66;
  if (b)
    v = 6;
  else if (b == -3)
     return 2;
  else
     v = 3;
  return v;
}
int test(){
  cout << f(2);
  return 0;
}
}
namespace A89_8{
int f(int &x, int &y){
  x = 1;
  y-= 2;
  return y;
}
int test(){
  int a = 5, b = 9;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 8;
    cout << ((b>6) || ((a+=2) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A89_9{
int a = 1, b = 2, c = 0;
int h(int b){
 a = 5;
 b -= 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 6;
 int c = 9;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A89_10{
int a = 9, b = 7, c = 8;
int f(){
 a = 9;
 int b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 7;
 int c = 4;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A89_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A89_12{
void test(){}

}
 

namespace A90_1{
void test(){cout << 10 % 5 / 8 % 4;}

}
namespace A90_2{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" 
  << c;
cout << ":" 
  << c + 67 % 15 * 5;}

}
namespace A90_3{
void test(){cout 
  << ( 3>=4 or ! 7.0<= 5 && 9.0>true);}

}
namespace A90_4{
bool f(int n){
  cout<<"f";
  return n<0;
}
int test(){
  cout<<(f(8) or f(1));
  return 0;
}
}
namespace A90_5{
void test(){cout << (true >= 4 == 7.0 <= 6);}

}
namespace A90_6{
void test(){if (3 != 19)
  cout << "z";
else
  cout << "f";}

}
namespace A90_7{
int h(int a){
  int z = 96;
  if (a <= -4)
    return 5;
  if (a != 3)
     z = 7;
  else
     return 9;
  return z;
}
int test(){
  cout << h(8);
  return 0;
}
}
namespace A90_8{
int f(int &x, int &y){
  x = 5;
  y+= 2;
  return x;
}
int test(){
  int a = 3, b = 6;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 9;
    cout << ((a<=5) && ((b-=1) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A90_9{
int a = 7, b = 4, c = 8;
int f(int &a){
 int c;
 a *= 2;
 b += 1;
 c = 5;
 return a + b + c;
}
int test(){
 a = 1;
 b = 3;
 int c = 2;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A90_10{
int a = 6, b = 9, c = 0;
int g(){
 int a = 6;
 b = 2;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 8;
 c = 3;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A90_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A90_12{
void test(){}

}
 

namespace A91_1{
void test(){cout << 5 / 9 * 3 * 8;}

}
namespace A91_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 59 % 15 * 6;}

}
namespace A91_3{
void test(){cout 
  << (! 6.0>=2.0 and  2== 9 || 5<=false);}

}
namespace A91_4{
bool f(int n){
  cout<<"f";
  return n<=-3;
}
int test(){
  cout<<(f(-6) && f(-7));
  return 0;
}
}
namespace A91_5{
void test(){cout << (7.0 < 2.0 <= 2 >= 8);}

}
namespace A91_6{
void test(){if (5 > 12)
  cout << "b";
else
  cout << "d";}

}
namespace A91_7{
int f(int a, int b){
  int c = 60;
  if (a > 2)
    return 4;
  else if (a >= 5)
     c = 3;
  else
    return 7;
  return c;
}
int test(){
  cout << f(8, -8);
  return 0;
}
}
namespace A91_8{
int f(int &x, int &y){
  x = 9;
  y+= 6;
  return y;
}
int test(){
  int a = 1, b = 4;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 2;
    cout << ((b>=6) || ((a-=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A91_9{
int a = 8, b = 9, c = 7;
int h(int &a){
 a = 5;
 b += 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 4;
 int c = 0;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A91_10{
int a = 5, b = 1, c = 9;
int g(){
 a = 5;
 int b = 3;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 6;
 c = 4;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A91_11{
namespace B1{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A91_12{
void test(){}

}
 

namespace A92_1{
void test(){cout << 10 * 15 / 15 / 6;}

}
namespace A92_2{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A92_3{
void test(){cout 
  << (! 4.0!=5.0 &&  true> 3 and 9<2);}

}
namespace A92_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-8) and f(0));
  return 0;
}
}
namespace A92_5{
void test(){cout << (3 != true > 8.0 == 5.0);}

}
namespace A92_6{
void test(){if (9 < 1)
  cout << "r";
else
  cout << "k";}

}
namespace A92_7{
int h(int a, int b){
  int c = 66;
  if (a == -2)
    c = 8;
  if (b < 3)
     c = 6;
  else
    return 5;
  return c;
}
int test(){
  cout << h(5, 9);
  return 0;
}
}
namespace A92_8{
int f(int &x, int &y){
  x = 8;
  y-= 5;
  return x;
}
int test(){
  int a = 6, b = 4;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 3;
    cout << ((a<3) && ((b+=2) < 4))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A92_9{
int a = 6, b = 2, c = 5;
int f(int b){
 int c;
 a *= 2;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 5;
 c = 7;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A92_10{
int a = 0, b = 2, c = 7;
int f(){
 a = 0;
 int b = 3;
 int c = 4;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 9;
 c = 5;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A92_11{
namespace B1{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A92_12{
void test(){}

}
 

namespace A93_1{
void test(){cout << 6 % 5 % 5 % 3;}

}
namespace A93_2{
void test(){int d = 2;
cout << d + 48 / 6 * 5;
cout << ":" << 'd' << ":" << "d" 
  << ":" << d;}

}
namespace A93_3{
void test(){cout 
  << (! 4>=true ||  5.0< 3.0 or 8==7);}

}
namespace A93_4{
bool f(int n){
  cout<<"f";
  return n>-4;
}
int test(){
  cout<<(f(2) or f(-9));
  return 0;
}
}
namespace A93_5{
void test(){cout << (false == 5 > 7 != 5);}

}
namespace A93_6{
void test(){if (0 != 18)
  cout << "m";
else
  cout << "e";}

}
namespace A93_7{
int f(int a, int b){
  int c = 43;
  if (a != -4)
    c = 1;
  else if (b == 1)
     return 9;
  else
    return 0;
  return c;
}
int test(){
  cout << f(1, 4);
  return 0;
}
}
namespace A93_8{
int f(int &x, int &y){
  x = 2;
  y-= 7;
  return x;
}
int test(){
  int a = 1, b = 5;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 5;
    cout << ((b<=5) && ((a+=2) >= 3))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A93_9{
int a = 8, b = 2, c = 0;
int g(int &b){
 int c;
 a -= 4;
 b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 a = 1;
 int b = 4;
 c = 3;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A93_10{
int a = 2, b = 0, c = 8;
int h(){
 int a = 2;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 2;
 int b = 4;
 c = 8;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A93_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A93_12{
void test(){}

}
 

namespace A94_1{
void test(){cout << 15 / 4 * 6 / 5;}

}
namespace A94_2{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" 
  << b;
cout << ":" 
  << b + 59 / 5 * 6;}

}
namespace A94_3{
void test(){cout 
  << ( false<=9.0 and ! 6> 8 || 2.0!=6);}

}
namespace A94_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(3) && f(-4));
  return 0;
}
}
namespace A94_5{
void test(){cout << (4 <= true >= 3.0 < 8);}

}
namespace A94_6{
void test(){if (6 == 6)
  cout << "h";
else
  cout << "j";}

}
namespace A94_7{
int g(int d){
  int x = 46;
  if (d >= -2)
    return 1;
  else if (d != 2)
     x = 4;
  else
     x = 5;
  return x;
}
int test(){
  cout << g(6);
  return 0;
}
}
namespace A94_8{
int f(int &x, int &y){
  x = 1;
  y+= 4;
  return y;
}
int test(){
  int a = 8, b = 6;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 2;
    cout << ((b<7) || ((a-=1) > 5))
       << a << ":" << b << ":";
  }
  {
    int a = 2;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A94_9{
int a = 6, b = 9, c = 6;
int f(int a){
 a = 1;
 b = 4;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 9;
 int c = 1;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A94_10{
int a = 1, b = 7, c = 9;
int h(){
 a = 1;
 int b = 6;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 6;
 c = 3;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A94_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A94_12{
void test(){}

}
 

namespace A95_1{
void test(){cout << 4 * 10 / 9 % 4;}

}
namespace A95_2{
void test(){int d = 4;
cout << d + 5 * 7 / 3 * 9;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A95_3{
void test(){cout 
  << (! 2!=true &&  3>= 7.0 && 8.0>7);}

}
namespace A95_4{
bool f(int n){
  cout<<"f";
  return n==1;
}
int test(){
  cout<<(f(4) and f(-3));
  return 0;
}
}
namespace A95_5{
void test(){cout << (9.0 != 2 <= 9 == false);}

}
namespace A95_6{
void test(){if (7 >= 4)
  cout << "w";
else
  cout << "d";}

}
namespace A95_7{
int g(int a, int b){
  int c = 35;
  if (a)
    c = 4;
  if (b < -1)
     c = 1;
  else
    return 3;
  return c;
}
int test(){
  cout << g(-7, -7);
  return 0;
}
}
namespace A95_8{
int f(int &x, int &y){
  x = 5;
  y-= 4;
  return y;
}
int test(){
  int a = 6, b = 8;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 1;
    cout << ((a>=4) && ((b+=2) < 7))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A95_9{
int a = 0, b = 7, c = 2;
int g(int &b){
 a *= 2;
 b -= 1;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 3;
 b = 4;
 c = 8;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A95_10{
int a = 4, b = 8, c = 5;
int g(){
 a = 4;
 int b = 0;
 int c = 9;
 return a + b + c;
}
int test(){
 a = 1;
 b = 2;
 int c = 7;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A95_11{
namespace B1{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A95_12{
void test(){}

}
 

namespace A96_1{
void test(){cout << 9 % 8 % 12 * 9;}

}
namespace A96_2{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A96_3{
void test(){cout 
  << ( 9<=4.0 or ! 4== 5 and 6.0<false);}

}
namespace A96_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(7) || f(-9));
  return 0;
}
}
namespace A96_5{
void test(){cout << (6.0 > 3 >= 6 < 4.0);}

}
namespace A96_6{
void test(){if (13 <= 13)
  cout << "i";
else
  cout << "s";}

}
namespace A96_7{
int f(int c){
  int u = 36;
  if (c)
    return 7;
  if (c >= 4)
     u = 3;
  else
     return 6;
  return u;
}
int test(){
  cout << f(0);
  return 0;
}
}
namespace A96_8{
int f(int &x, int &y){
  x = 3;
  y+= 3;
  return x;
}
int test(){
  int a = 8, b = 9;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 7;
    cout << ((a>5) || ((b-=1) <= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A96_9{
int a = 7, b = 5, c = 3;
int h(int a){
 int c;
 a = 2;
 b += 1;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 9;
 int b = 4;
 c = 8;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A96_10{
int a = 6, b = 7, c = 4;
int f(){
 int a = 6;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 2;
 int c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A96_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A96_12{
void test(){}

}
 

namespace A97_1{
void test(){cout << 12 * 3 / 10 % 15;}

}
namespace A97_2{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" 
  << a;
cout << ":" 
  << a - 67 / 6 * 5;}

}
namespace A97_3{
void test(){cout 
  << (! 5.0<=false or  3== 7 && 7.0<9);}

}
namespace A97_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(1) or f(-3));
  return 0;
}
}
namespace A97_5{
void test(){cout << (6 < 2.0 <= 5 > 5.0);}

}
namespace A97_6{
void test(){if (2 > 10)
  cout << "l";
else
  cout << "u";}

}
namespace A97_7{
int g(int a, int b){
  int c = 20;
  if (b)
    c = 8;
  if (a <= 3)
     return 9;
  else
    return 5;
  return c;
}
int test(){
  cout << g(9, -3);
  return 0;
}
}
namespace A97_8{
int f(int &x, int &y){
  x = 2;
  y-= 4;
  return y;
}
int test(){
  int a = 5, b = 2;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 6;
    cout << ((b<3) || ((a-=2) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A97_9{
int a = 2, b = 0, c = 6;
int h(int b){
 a -= 5;
 b = 4;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 3;
 c = 8;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A97_10{
int a = 8, b = 0, c = 4;
int f(){
 int a = 8;
 b = 1;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 0;
 c = 8;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A97_11{
namespace B1{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A97_12{
void test(){}

}
 

namespace A98_1{
void test(){cout << 8 % 12 % 8 * 12;}

}
namespace A98_2{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' 
  << ":" << "b";}

}
namespace A98_3{
void test(){cout 
  << ( 6.0>=true || ! 8!= 2.0 || 4>6);}

}
namespace A98_4{
bool f(int n){
  cout<<"f";
  return n>=4;
}
int test(){
  cout<<(f(9) || f(-4));
  return 0;
}
}
namespace A98_5{
void test(){cout << (4 >= false != 3 == 7.0);}

}
namespace A98_6{
void test(){if (8 >= 7)
  cout << "t";
else
  cout << "b";}

}
namespace A98_7{
int f(int c){
  int w = 65;
  if (c == -3)
    w = 0;
  else if (c <= -5)
     return 8;
  else
     return 4;
  return w;
}
int test(){
  cout << f(7);
  return 0;
}
}
namespace A98_8{
int f(int &x, int &y){
  x = 8;
  y+= 5;
  return x;
}
int test(){
  int a = 3, b = 7;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 9;
    cout << ((a>7) && ((b+=1) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A98_9{
int a = 5, b = 4, c = 0;
int f(int &a){
 int c;
 a = 1;
 b = 5;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 6;
 int b = 1;
 c = 2;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A98_10{
int a = 7, b = 3, c = 2;
int h(){
 a = 7;
 int b = 9;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 3;
 c = 7;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A98_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A98_12{
void test(){}

}
 

namespace A99_1{
void test(){cout << 3 / 6 * 4 / 10;}

}
namespace A99_2{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A99_3{
void test(){cout 
  << ( 2==5 && ! 8.0!= 3.0 and 7<false);}

}
namespace A99_4{
bool f(int n){
  cout<<"f";
  return n<=2;
}
int test(){
  cout<<(f(-2) and f(4));
  return 0;
}
}
namespace A99_5{
void test(){cout << (9 <= 9.0 >= true != 8);}

}
namespace A99_6{
void test(){if (11 != 11)
  cout << "v";
else
  cout << "z";}

}
namespace A99_7{
int h(int a, int b){
  int c = 70;
  if (a > -5)
    c = 7;
  else if (a >= 4)
     return 6;
  else
    c = 2;
  return c;
}
int test(){
  cout << h(-1, 1);
  return 0;
}
}
namespace A99_8{
int f(int &x, int &y){
  x = 3;
  y-= 5;
  return y;
}
int test(){
  int a = 7, b = 6;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((a>=4) && ((b-=2) > 7))
       << a << ":" << b << ":";
  }
  {
    int a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A99_9{
int a = 7, b = 9, c = 7;
int g(int a){
 int c;
 a += 3;
 b *= 1;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 2;
 c = 9;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A99_10{
int a = 9, b = 8, c = 1;
int g(){
 a = 9;
 int b = 2;
 c = 0;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 9;
 int c = 3;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A99_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A99_12{
void test(){}

}
 

namespace A100_1{
void test(){cout << 4 * 10 % 12 % 12;}

}
namespace A100_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 53 / 6 * 6;}

}
namespace A100_3{
void test(){cout 
  << (! 3<=true and  9.0> 4 or 5>=4.0);}

}
namespace A100_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(8) && f(0));
  return 0;
}
}
namespace A100_5{
void test(){cout << (2 < true > 4.0 == 3.0);}

}
namespace A100_6{
void test(){if (4 <= 16)
  cout << "y";
else
  cout << "a";}

}
namespace A100_7{
int h(int d){
  int x = 92;
  if (d)
    x = 1;
  if (d < -4)
     x = 9;
  else
     return 2;
  return x;
}
int test(){
  cout << h(4);
  return 0;
}
}
namespace A100_8{
int f(int &x, int &y){
  x = 4;
  y+= 2;
  return x;
}
int test(){
  int a = 6, b = 5;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 1;
    cout << ((b<=6) || ((a+=1) <= 3))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A100_9{
int a = 3, b = 6, c = 0;
int h(int &b){
 a += 5;
 b = 2;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 1;
 b = 5;
 int c = 8;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A100_10{
int a = 5, b = 7, c = 0;
int h(){
 int a = 5;
 b = 8;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 4;
 b = 6;
 int c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A100_11{
namespace B1{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A100_12{
void test(){}

}
 

namespace A101_1{
void test(){cout << 12 % 6 * 15 / 6;}

}
namespace A101_2{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' 
  << ":" << "d";}

}
namespace A101_3{
void test(){cout 
  << (! 9<=5.0 or  true> 8.0 || 8!=6);}

}
namespace A101_4{
bool f(int n){
  cout<<"f";
  return n!=-2;
}
int test(){
  cout<<(f(3) or f(-5));
  return 0;
}
}
namespace A101_5{
void test(){cout << (7 <= 8 != 8.0 == 4);}

}
namespace A101_6{
void test(){if (18 < 6)
  cout << "o";
else
  cout << "n";}

}
namespace A101_7{
int g(int b){
  int y = 80;
  if (b > 5)
    return 0;
  else if (b >= 0)
     y = 7;
  else
     return 5;
  return y;
}
int test(){
  cout << g(-9);
  return 0;
}
}
namespace A101_8{
int f(int &x, int &y){
  x = 9;
  y-= 8;
  return x;
}
int test(){
  int a = 2, b = 3;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 4;
    cout << ((b>6) || ((a-=2) <= 6))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A101_9{
int a = 4, b = 7, c = 6;
int f(int &a){
 int c;
 a *= 1;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 5;
 int c = 3;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A101_10{
int a = 1, b = 2, c = 8;
int g(){
 a = 1;
 int b = 9;
 int c = 0;
 return a + b + c;
}
int test(){
 a = 7;
 b = 3;
 int c = 4;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A101_11{
namespace B1{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A101_12{
void test(){}

}
 

namespace A102_1{
void test(){cout << 3 / 12 / 3 * 5;}

}
namespace A102_2{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A102_3{
void test(){cout 
  << (! 2<7 &&  false>= 7.0 && 3.0==5);}

}
namespace A102_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(6) || f(5));
  return 0;
}
}
namespace A102_5{
void test(){cout << (false >= 6.0 > 3 < 5);}

}
namespace A102_6{
void test(){if (10 == 16)
  cout << "x";
else
  cout << "p";}

}
namespace A102_7{
int f(int a, int b){
  int c = 56;
  if (b != 5)
    return 3;
  if (b == -2)
     c = 9;
  else
    return 7;
  return c;
}
int test(){
  cout << f(-5, 3);
  return 0;
}
}
namespace A102_8{
int f(int &x, int &y){
  x = 9;
  y+= 1;
  return y;
}
int test(){
  int a = 6, b = 5;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 6;
    cout << ((a<4) && ((b+=1) >= 5))
       << a << ":" << b << ":";
  }
  {
    int a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A102_9{
int a = 8, b = 0, c = 1;
int g(int b){
 a = 2;
 b -= 5;
 c = 2;
 return a + b + c;
}
int test(){
 a = 2;
 int b = 4;
 c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A102_10{
int a = 5, b = 6, c = 5;
int f(){
 a = 5;
 int b = 6;
 c = 0;
 return a + b + c;
}
int test(){
 int a = 9;
 int b = 2;
 c = 3;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A102_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A102_12{
void test(){}

}
 

namespace A103_1{
void test(){cout << 5 * 15 % 10 % 15;}

}
namespace A103_2{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A103_3{
void test(){cout 
  << (! 4<8 ||  false== 6.0 and 6>=4.0);}

}
namespace A103_4{
bool f(int n){
  cout<<"f";
  return n>-1;
}
int test(){
  cout<<(f(-6) and f(-7));
  return 0;
}
}
namespace A103_5{
void test(){cout << (6 <= 6.0 > 2 == true);}

}
namespace A103_6{
void test(){if (19 <= 4)
  cout << "c";
else
  cout << "f";}

}
namespace A103_7{
int h(int a){
  int z = 81;
  if (a)
    z = 9;
  if (a != -1)
     z = 1;
  else
     return 6;
  return z;
}
int test(){
  cout << h(5);
  return 0;
}
}
namespace A103_8{
int f(int &x, int &y){
  x = 2;
  y-= 4;
  return y;
}
int test(){
  int a = 5, b = 1;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 3;
    cout << ((a>=7) || ((b-=2) < 3))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A103_9{
int a = 0, b = 3, c = 1;
int h(int b){
 int c;
 a *= 3;
 b -= 5;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 5;
 c = 6;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A103_10{
int a = 4, b = 1, c = 8;
int f(){
 int a = 4;
 b = 7;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 1;
 int c = 4;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A103_11{
namespace B1{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A103_12{
void test(){}

}
 

namespace A104_1{
void test(){cout << 10 % 5 * 9 * 10;}

}
namespace A104_2{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a 
  << ":" << "a";}

}
namespace A104_3{
void test(){cout 
  << (! 3!=9.0 and  true> 9 or 2.0<=2);}

}
namespace A104_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-8) && f(-1));
  return 0;
}
}
namespace A104_5{
void test(){cout << (5.0 != 9 >= 7 < 9.0);}

}
namespace A104_6{
void test(){if (4 > 2)
  cout << "q";
else
  cout << "g";}

}
namespace A104_7{
int h(int a, int b){
  int c = 10;
  if (a < -3)
    c = 8;
  else if (a != 0)
     return 4;
  else
    c = 5;
  return c;
}
int test(){
  cout << h(-2, 2);
  return 0;
}
}
namespace A104_8{
int f(int &x, int &y){
  x = 9;
  y+= 1;
  return x;
}
int test(){
  int a = 5, b = 2;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 4, b = 8;
    cout << ((b<=5) && ((a+=1) > 7))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A104_9{
int a = 2, b = 9, c = 7;
int g(int &a){
 a = 4;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 4;
 int c = 1;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A104_10{
int a = 5, b = 3, c = 0;
int h(){
 int a = 5;
 b = 8;
 int c = 2;
 return a + b + c;
}
int test(){
 a = 9;
 b = 0;
 int c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A104_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b -= 1;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 1;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 1;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"412";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A104_12{
void test(){}

}
 

namespace A105_1{
void test(){cout << 15 / 9 / 5 / 9;}

}
namespace A105_2{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A105_3{
void test(){cout 
  << (! 7<3 and  7.0!= true && 6>=4.0);}

}
namespace A105_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(2) or f(3));
  return 0;
}
}
namespace A105_5{
void test(){cout << (8.0 > 2 >= 4 == false);}

}
namespace A105_6{
void test(){if (14 != 18)
  cout << "x";
else
  cout << "p";}

}
namespace A105_7{
int f(int d){
  int v = 23;
  if (d < 1)
    v = 2;
  if (d <= 3)
     return 3;
  else
     v = 8;
  return v;
}
int test(){
  cout << f(-4);
  return 0;
}
}
namespace A105_8{
int f(int &x, int &y){
  x = 6;
  y-= 8;
  return y;
}
int test(){
  int a = 2, b = 1;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 4;
    cout << ((a>=3) || ((b+=1) <= 4))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A105_9{
int a = 0, b = 5, c = 2;
int f(int b){
 a += 5;
 b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 a = 6;
 int b = 3;
 c = 8;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A105_10{
int a = 9, b = 1, c = 5;
int g(){
 a = 9;
 int b = 8;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 4;
 int b = 7;
 c = 3;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A105_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A105_12{
void test(){}

}
 

namespace A106_1{
void test(){cout << 8 * 3 * 6 * 4;}

}
namespace A106_2{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A106_3{
void test(){cout 
  << ( false>5.0 && ! 6.0<= 9 || 2==8);}

}
namespace A106_4{
bool f(int n){
  cout<<"f";
  return n==0;
}
int test(){
  cout<<(f(8) || f(-6));
  return 0;
}
}
namespace A106_5{
void test(){cout << (7.0 <= 3.0 < 6 != 5);}

}
namespace A106_6{
void test(){if (12 >= 10)
  cout << "n";
else
  cout << "h";}

}
namespace A106_7{
int g(int a, int b){
  int c = 27;
  if (a >= 2)
    c = 2;
  if (b > 1)
     return 0;
  else
    return 1;
  return c;
}
int test(){
  cout << g(7, 8);
  return 0;
}
}
namespace A106_8{
int f(int &x, int &y){
  x = 6;
  y+= 9;
  return x;
}
int test(){
  int a = 3, b = 5;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 7;
    cout << ((b<3) && ((a-=2) < 5))
       << a << ":" << b << ":";
  }
  {
    int a = 6;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A106_9{
int a = 8, b = 0, c = 7;
int f(int &a){
 int c;
 a = 2;
 b *= 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 1;
 c = 2;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A106_10{
int a = 9, b = 0, c = 8;
int h(){
 int a = 9;
 b = 2;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 5;
 b = 7;
 int c = 6;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A106_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A106_12{
void test(){}

}
 

namespace A107_1{
void test(){cout << 9 % 8 / 4 / 8;}

}
namespace A107_2{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A107_3{
void test(){cout 
  << ( 4<3.0 || ! 5>= 9.0 and 7>false);}

}
namespace A107_4{
bool f(int n){
  cout<<"f";
  return n<3;
}
int test(){
  cout<<(f(-4) && f(-8));
  return 0;
}
}
namespace A107_5{
void test(){cout << (8 < true != 7 > 3);}

}
namespace A107_6{
void test(){if (2 == 19)
  cout << "g";
else
  cout << "z";}

}
namespace A107_7{
int f(int a, int b){
  int c = 59;
  if (b)
    c = 6;
  else if (b <= -4)
     c = 0;
  else
    return 2;
  return c;
}
int test(){
  cout << f(6, -5);
  return 0;
}
}
namespace A107_8{
int f(int &x, int &y){
  x = 4;
  y+= 9;
  return x;
}
int test(){
  int a = 3, b = 1;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 5;
    cout << ((a>4) || ((b-=2) > 6))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A107_9{
int a = 5, b = 4, c = 9;
int h(int &a){
 a = 5;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 4;
 int c = 5;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A107_10{
int a = 4, b = 3, c = 5;
int g(){
 int a = 4;
 b = 9;
 int c = 3;
 return a + b + c;
}
int test(){
 a = 0;
 b = 6;
 int c = 4;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A107_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A107_12{
void test(){}

}
 

namespace A108_1{
void test(){cout << 6 / 4 % 8 % 3;}

}
namespace A108_2{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" 
  << b;
cout << ":" 
  << b + 59 / 5 * 6;}

}
namespace A108_3{
void test(){cout 
  << ( 4<=2.0 or ! 8.0== 5 or true!=3);}

}
namespace A108_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(0) and f(5));
  return 0;
}
}
namespace A108_5{
void test(){cout << (9 == 2.0 <= 4.0 >= false);}

}
namespace A108_6{
void test(){if (6 < 15)
  cout << "c";
else
  cout << "b";}

}
namespace A108_7{
int h(int a, int b){
  int c = 84;
  if (b < -2)
    c = 4;
  if (a == 0)
     return 6;
  else
    return 3;
  return c;
}
int test(){
  cout << h(-6, -6);
  return 0;
}
}
namespace A108_8{
int f(int &x, int &y){
  x = 7;
  y-= 6;
  return y;
}
int test(){
  int a = 4, b = 8;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((a<=7) && ((b+=1) >= 3))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A108_9{
int a = 9, b = 1, c = 2;
int g(int b){
 int c;
 a -= 3;
 b += 2;
 c = 1;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 3;
 c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A108_10{
int a = 8, b = 7, c = 2;
int f(){
 a = 8;
 int b = 1;
 c = 8;
 return a + b + c;
}
int test(){
 int a = 1;
 int b = 9;
 c = 3;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A108_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 1;
cout << f(n);
cout << n;}
}
void test(){cout<<"33";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A108_12{
void test(){}

}
 

namespace A109_1{
void test(){cout << 9 / 6 % 8 % 12;}

}
namespace A109_2{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" 
  << "d";
cout << ":" 
  << d + 48 % 15 * 5;}

}
namespace A109_3{
void test(){cout 
  << ( 8.0==2 && ! 9!= 8 or false<5.0);}

}
namespace A109_4{
bool f(int n){
  cout<<"f";
  return n!=3;
}
int test(){
  cout<<(f(7) and f(2));
  return 0;
}
}
namespace A109_5{
void test(){cout << (5.0 > 7 >= 8 <= true);}

}
namespace A109_6{
void test(){if (16 > 9)
  cout << "t";
else
  cout << "f";}

}
namespace A109_7{
int g(int c){
  int u = 53;
  if (c == -2)
    return 4;
  else if (c > -3)
     return 2;
  else
     u = 7;
  return u;
}
int test(){
  cout << g(1);
  return 0;
}
}
namespace A109_8{
int f(int &x, int &y){
  x = 8;
  y+= 4;
  return x;
}
int test(){
  int a = 5, b = 6;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 3;
    cout << ((a>=6) && ((b-=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A109_9{
int a = 6, b = 0, c = 9;
int g(int &a){
 a += 5;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 7;
 c = 1;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A109_10{
int a = 5, b = 2, c = 4;
int h(){
 a = 5;
 int b = 7;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 0;
 int b = 7;
 c = 1;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A109_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A109_12{
void test(){}

}
 

namespace A110_1{
void test(){cout << 12 % 15 / 4 / 3;}

}
namespace A110_2{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" 
  << "a";
cout << ":" 
  << a + 53 / 6 / 5;}

}
namespace A110_3{
void test(){cout 
  << ( 6>=3.0 or ! 2.0> 4 || 5<=true);}

}
namespace A110_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-2) && f(-5));
  return 0;
}
}
namespace A110_5{
void test(){cout << (6 != 7.0 == 2.0 < false);}

}
namespace A110_6{
void test(){if (8 < 11)
  cout << "u";
else
  cout << "s";}

}
namespace A110_7{
int g(int a){
  int u = 98;
  if (a < 0)
    return 5;
  else if (a > -5)
     u = 1;
  else
     return 3;
  return u;
}
int test(){
  cout << g(-3);
  return 0;
}
}
namespace A110_8{
int f(int &x, int &y){
  x = 1;
  y-= 2;
  return y;
}
int test(){
  int a = 4, b = 5;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 1;
    cout << ((b>5) || ((a+=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A110_9{
int a = 6, b = 2, c = 3;
int f(int b){
 int c;
 a *= 1;
 b = 2;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 5;
 int c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A110_10{
int a = 5, b = 9, c = 6;
int f(){
 int a = 5;
 b = 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 2;
 b = 8;
 int c = 0;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A110_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A110_12{
void test(){}

}
 

namespace A111_1{
void test(){cout << 3 * 3 * 15 * 9;}

}
namespace A111_2{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b 
  << ":" << 'b';}

}
namespace A111_3{
void test(){cout 
  << ( 9!=8 || ! 7.0>= 4.0 and 2<false);}

}
namespace A111_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-3) or f(9));
  return 0;
}
}
namespace A111_5{
void test(){cout << (4 < 5 > 9 != 9.0);}

}
namespace A111_6{
void test(){if (13 <= 13)
  cout << "y";
else
  cout << "k";}

}
namespace A111_7{
int f(int a, int b){
  int c = 68;
  if (b != 4)
    c = 9;
  else if (a > -3)
     return 8;
  else
    c = 1;
  return c;
}
int test(){
  cout << f(-3, -1);
  return 0;
}
}
namespace A111_8{
int f(int &x, int &y){
  x = 9;
  y+= 2;
  return y;
}
int test(){
  int a = 6, b = 8;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 2;
    cout << ((a<=6) || ((b-=2) < 5))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A111_9{
int a = 0, b = 8, c = 1;
int h(int a){
 int c;
 a = 4;
 b -= 5;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 4;
 int c = 2;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A111_10{
int a = 1, b = 7, c = 0;
int g(){
 a = 1;
 int b = 6;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 9;
 int b = 5;
 c = 2;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A111_11{
namespace B1{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"22";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A111_12{
void test(){}

}
 

namespace A112_1{
void test(){cout << 6 * 10 / 12 * 4;}

}
namespace A112_2{
void test(){int b = 4;
cout << "b" << ":" << b << ":" 
  << 'b';
cout << ":" 
  << b - 59 % 15 * 6;}

}
namespace A112_3{
void test(){cout 
  << (! 6.0>7 and  true<= 3 && 6==9.0);}

}
namespace A112_4{
bool f(int n){
  cout<<"f";
  return n>2;
}
int test(){
  cout<<(f(-7) || f(6));
  return 0;
}
}
namespace A112_5{
void test(){cout << (false >= 3 <= 2 == 2);}

}
namespace A112_6{
void test(){if (17 >= 7)
  cout << "r";
else
  cout << "l";}

}
namespace A112_7{
int h(int b){
  int x = 58;
  if (b)
    x = 6;
  if (b <= 5)
     return 8;
  else
     x = 9;
  return x;
}
int test(){
  cout << h(-2);
  return 0;
}
}
namespace A112_8{
int f(int &x, int &y){
  x = 1;
  y-= 7;
  return x;
}
int test(){
  int a = 8, b = 5;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 9;
    cout << ((b<4) && ((a+=1) > 7))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A112_9{
int a = 5, b = 6, c = 7;
int h(int &b){
 a += 2;
 b -= 1;
 c = 2;
 return a + b + c;
}
int test(){
 a = 3;
 b = 9;
 int c = 1;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A112_10{
int a = 8, b = 3, c = 6;
int g(){
 a = 8;
 int b = 7;
 int c = 9;
 return a + b + c;
}
int test(){
 a = 8;
 b = 1;
 int c = 0;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A112_11{
namespace B1{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A112_12{
void test(){}

}
 

namespace A113_1{
void test(){cout << 10 / 5 % 5 / 6;}

}
namespace A113_2{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" 
  << ":" << b;}

}
namespace A113_3{
void test(){cout 
  << ( 6.0!=false and ! 6> 4 && 8>=8.0);}

}
namespace A113_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) or f(1));
  return 0;
}
}
namespace A113_5{
void test(){cout << (4.0 > 6.0 != 3 <= 8.0);}

}
namespace A113_6{
void test(){if (9 != 5)
  cout << "j";
else
  cout << "d";}

}
namespace A113_7{
int g(int a, int b){
  int c = 99;
  if (a)
    c = 5;
  else if (b >= 3)
     return 7;
  else
    return 2;
  return c;
}
int test(){
  cout << g(2, 0);
  return 0;
}
}
namespace A113_8{
int f(int &x, int &y){
  x = 8;
  y-= 3;
  return y;
}
int test(){
  int a = 6, b = 7;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 2;
    cout << ((a<5) || ((b+=2) >= 4))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A113_9{
int a = 7, b = 2, c = 5;
int g(int b){
 a *= 3;
 b = 1;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 6;
 c = 3;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A113_10{
int a = 4, b = 3, c = 5;
int h(){
 a = 4;
 int b = 2;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 0;
 b = 4;
 int c = 2;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A113_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"416";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A113_12{
void test(){}

}
 

namespace A114_1{
void test(){cout << 5 % 8 * 10 % 10;}

}
namespace A114_2{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A114_3{
void test(){cout 
  << (! 5.0<=2 &&  true< 3.0 or 9==5);}

}
namespace A114_4{
bool f(int n){
  cout<<"f";
  return n<-4;
}
int test(){
  cout<<(f(4) || f(-1));
  return 0;
}
}
namespace A114_5{
void test(){cout << (3.0 == 5 >= 4 < true);}

}
namespace A114_6{
void test(){if (11 == 14)
  cout << "i";
else
  cout << "q";}

}
namespace A114_7{
int f(int a, int b){
  int c = 64;
  if (b <= -1)
    c = 3;
  if (a < 5)
     return 9;
  else
    c = 4;
  return c;
}
int test(){
  cout << f(5, 8);
  return 0;
}
}
namespace A114_8{
int f(int &x, int &y){
  x = 4;
  y+= 9;
  return x;
}
int test(){
  int a = 7, b = 6;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 5;
    cout << ((a<=3) && ((b-=1) <= 6))
       << a << ":" << b << ":";
  }
  {
    a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A114_9{
int a = 4, b = 8, c = 0;
int f(int &a){
 int c;
 a = 5;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 3;
 b = 7;
 int c = 2;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A114_10{
int a = 8, b = 5, c = 1;
int f(){
 a = 8;
 int b = 6;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 1;
 int c = 0;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A114_11{
namespace B1{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A114_12{
void test(){}

}
 

namespace A115_1{
void test(){cout << 15 / 9 % 6 * 8;}

}
namespace A115_2{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 59 / 5 / 6;}

}
namespace A115_3{
void test(){cout 
  << (! 9.0!=7 or  4.0<= 3 || 4>false);}

}
namespace A115_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-7) and f(7));
  return 0;
}
}
namespace A115_5{
void test(){cout << (8 <= 5.0 >= 6 > 9);}

}
namespace A115_6{
void test(){if (5 <= 17)
  cout << "v";
else
  cout << "w";}

}
namespace A115_7{
int f(int b){
  int v = 50;
  if (b != 1)
    return 0;
  if (b >= -1)
     v = 4;
  else
     return 0;
  return v;
}
int test(){
  cout << f(-5);
  return 0;
}
}
namespace A115_8{
int f(int &x, int &y){
  x = 8;
  y-= 4;
  return x;
}
int test(){
  int a = 1, b = 6;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 3;
    cout << ((b>=7) || ((a+=2) < 3))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A115_9{
int a = 1, b = 4, c = 8;
int f(int &a){
 a += 2;
 b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 a = 5;
 int b = 9;
 int c = 6;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A115_10{
int a = 2, b = 7, c = 9;
int h(){
 int a = 2;
 b = 4;
 int c = 5;
 return a + b + c;
}
int test(){
 a = 3;
 b = 6;
 int c = 8;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A115_11{
namespace B1{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"314";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A115_12{
void test(){}

}
 

namespace A116_1{
void test(){cout << 8 * 12 / 9 / 15;}

}
namespace A116_2{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" 
  << ":" << 'a';}

}
namespace A116_3{
void test(){cout 
  << (! 2.0==6 ||  true< 9 and 2>=7.0);}

}
namespace A116_4{
bool f(int n){
  cout<<"f";
  return n<=4;
}
int test(){
  cout<<(f(1) && f(-3));
  return 0;
}
}
namespace A116_5{
void test(){cout << (2.0 != false < 7 == 3);}

}
namespace A116_6{
void test(){if (7 > 12)
  cout << "e";
else
  cout << "o";}

}
namespace A116_7{
int h(int d){
  int z = 56;
  if (d == 3)
    z = 2;
  else if (d == 2)
     return 9;
  else
     z = 4;
  return z;
}
int test(){
  cout << h(-9);
  return 0;
}
}
namespace A116_8{
int f(int &x, int &y){
  x = 8;
  y+= 7;
  return y;
}
int test(){
  int a = 4, b = 1;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 6;
    cout << ((b>6) && ((a-=1) > 4))
       << a << ":" << b << ":";
  }
  {
    int a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A116_9{
int a = 9, b = 6, c = 1;
int h(int b){
 int c;
 a -= 4;
 b = 3;
 c = 5;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 0;
 c = 4;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A116_10{
int a = 1, b = 0, c = 7;
int f(){
 a = 1;
 int b = 8;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 5;
 int b = 4;
 c = 2;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A116_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A116_12{
void test(){}

}
 

namespace A117_1{
void test(){cout << 4 % 4 * 3 % 5;}

}
namespace A117_2{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' 
  << ":" << "c";}

}
namespace A117_3{
void test(){cout 
  << (! 7<=true or  8< 9.0 || 3.0==3);}

}
namespace A117_4{
bool f(int n){
  cout<<"f";
  return n==0;
}
int test(){
  cout<<(f(-5) && f(6));
  return 0;
}
}
namespace A117_5{
void test(){cout << (9 <= true != 6.0 < 8.0);}

}
namespace A117_6{
void test(){if (0 == 3)
  cout << "a";
else
  cout << "m";}

}
namespace A117_7{
int f(int c){
  int y = 13;
  if (c)
    y = 5;
  if (c != -4)
     return 8;
  else
     return 7;
  return y;
}
int test(){
  cout << f(-2);
  return 0;
}
}
namespace A117_8{
int f(int &x, int &y){
  x = 5;
  y-= 9;
  return x;
}
int test(){
  int a = 7, b = 8;
  b = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 2;
    cout << ((b>=3) || ((a+=2) < 3))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A117_9{
int a = 8, b = 5, c = 2;
int g(int b){
 int c;
 a = 1;
 b *= 2;
 c = 3;
 return a + b + c;
}
int test(){
 a = 3;
 int b = 9;
 int c = 5;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A117_10{
int a = 6, b = 9, c = 0;
int g(){
 int a = 6;
 b = 2;
 int c = 7;
 return a + b + c;
}
int test(){
 a = 9;
 int b = 3;
 c = 4;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A117_11{
namespace B1{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A117_12{
void test(){}

}
 

namespace A118_1{
void test(){cout << 5 % 3 % 4 % 12;}

}
namespace A118_2{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" 
  << d;
cout << ":" 
  << d - 59 / 5 / 6;}

}
namespace A118_3{
void test(){cout 
  << (! 5>5 and  false>= 5.0 or 3!=4.0);}

}
namespace A118_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(0) or f(3));
  return 0;
}
}
namespace A118_5{
void test(){cout << (6 >= 4.0 > 8 == 2);}

}
namespace A118_6{
void test(){if (15 >= 0)
  cout << "b";
else
  cout << "r";}

}
namespace A118_7{
int h(int a, int b){
  int c = 73;
  if (a)
    c = 1;
  if (b >= 2)
     return 5;
  else
    c = 0;
  return c;
}
int test(){
  cout << h(-2, 3);
  return 0;
}
}
namespace A118_8{
int f(int &x, int &y){
  x = 3;
  y+= 4;
  return y;
}
int test(){
  int a = 6, b = 8;
  a = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 9;
    cout << ((b<=4) && ((a-=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A118_9{
int a = 3, b = 1, c = 8;
int f(int &a){
 a = 1;
 b -= 2;
 c = 5;
 return a + b + c;
}
int test(){
 a = 4;
 b = 0;
 int c = 7;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A118_10{
int a = 5, b = 8, c = 1;
int h(){
 a = 5;
 int b = 6;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 2;
 int c = 0;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A118_11{
namespace B1{
void f(int &n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int n){
  if (n < 0) n = 0;
  else n = 1;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int n){
  if (n < 0) n = 0;
}
void test(){
int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"30";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A118_12{
void test(){}

}
 

namespace A119_1{
void test(){cout << 9 / 5 * 12 / 9;}

}
namespace A119_2{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" 
  << c;
cout << ":" 
  << c + 67 % 15 * 5;}

}
namespace A119_3{
void test(){cout 
  << (! 4<=2 &&  9>= 8.0 && false==2.0);}

}
namespace A119_4{
bool f(int n){
  cout<<"f";
  return n>=1;
}
int test(){
  cout<<(f(-2) and f(-4));
  return 0;
}
}
namespace A119_5{
void test(){cout << (false == 3.0 >= 7 < 5);}

}
namespace A119_6{
void test(){if (1 < 8)
  cout << "s";
else
  cout << "d";}

}
namespace A119_7{
int g(int a){
  int w = 82;
  if (a >= 4)
    w = 6;
  else if (a > 3)
     w = 1;
  else
     return 3;
  return w;
}
int test(){
  cout << g(2);
  return 0;
}
}
namespace A119_8{
int f(int &x, int &y){
  x = 1;
  y+= 7;
  return x;
}
int test(){
  int a = 4, b = 8;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 9, b = 5;
    cout << ((b<5) && ((a-=1) >= 5))
       << a << ":" << b << ":";
  }
  {
    a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A119_9{
int a = 2, b = 6, c = 7;
int g(int a){
 a = 4;
 b += 2;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 2;
 int c = 8;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A119_10{
int a = 1, b = 7, c = 6;
int f(){
 a = 1;
 int b = 3;
 c = 9;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 4;
 int c = 1;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A119_11{
namespace B1{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A119_12{
void test(){}

}
 

namespace A120_1{
void test(){cout << 12 * 10 / 8 * 3;}

}
namespace A120_2{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A120_3{
void test(){cout 
  << ( 7.0!=6 || ! true< 7 and 8>6.0);}

}
namespace A120_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-8) || f(9));
  return 0;
}
}
namespace A120_5{
void test(){cout << (true <= 7.0 != 9.0 > 4);}

}
namespace A120_6{
void test(){if (3 != 1)
  cout << "z";
else
  cout << "c";}

}
namespace A120_7{
int g(int a, int b){
  int c = 57;
  if (a <= -5)
    return 6;
  else if (b != 5)
     c = 8;
  else
    return 7;
  return c;
}
int test(){
  cout << g(-9, 0);
  return 0;
}
}
namespace A120_8{
int f(int &x, int &y){
  x = 7;
  y-= 3;
  return y;
}
int test(){
  int a = 2, b = 6;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 2;
    cout << ((b>7) || ((a+=2) > 6))
       << a << ":" << b << ":";
  }
  {
    int a = 5;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A120_9{
int a = 3, b = 5, c = 6;
int h(int &b){
 int c;
 a *= 1;
 b = 3;
 c = 4;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 0;
 c = 1;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A120_10{
int a = 3, b = 2, c = 0;
int g(){
 a = 3;
 int b = 8;
 int c = 6;
 return a + b + c;
}
int test(){
 a = 7;
 b = 5;
 int c = 9;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A120_11{
namespace B1{
void f(int &a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  if (a > b) {
    a = b;
    b = a;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int a, int &b){
  if (a > b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 3, m = 1;
f(n, m);
cout << n << m;}
}
void test(){cout<<"13";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A120_12{
void test(){}

}
 

namespace A121_1{
void test(){cout << 4 / 8 * 15 % 10;}

}
namespace A121_2{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a 
  << ":" << 'a';}

}
namespace A121_3{
void test(){cout 
  << (! 5<=8 &&  6.0< 4 && false>7.0);}

}
namespace A121_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(4) and f(8));
  return 0;
}
}
namespace A121_5{
void test(){cout << (9.0 != 6 > 3 >= 8.0);}

}
namespace A121_6{
void test(){if (9 >= 4)
  cout << "n";
else
  cout << "p";}

}
namespace A121_7{
int f(int a, int b){
  int c = 40;
  if (b > -3)
    return 0;
  if (b == -1)
     c = 1;
  else
    c = 2;
  return c;
}
int test(){
  cout << f(2, 5);
  return 0;
}
}
namespace A121_8{
int f(int &x, int &y){
  x = 6;
  y+= 8;
  return x;
}
int test(){
  int a = 7, b = 9;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 1, b = 4;
    cout << ((b<7) && ((a+=1) <= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A121_9{
int a = 3, b = 0, c = 8;
int h(int &a){
 int c;
 a = 2;
 b *= 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 5;
 b = 2;
 c = 1;
 cout << h(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A121_10{
int a = 0, b = 9, c = 3;
int f(){
 int a = 0;
 b = 2;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 4;
 c = 6;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A121_11{
namespace B1{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"433";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A121_12{
void test(){}

}
 

namespace A122_1{
void test(){cout << 8 * 15 % 5 / 6;}

}
namespace A122_2{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' 
  << ":" << b;}

}
namespace A122_3{
void test(){cout 
  << (! 8.0>=6 or  9!= true and 2==2.0);}

}
namespace A122_4{
bool f(int n){
  cout<<"f";
  return n<=-3;
}
int test(){
  cout<<(f(-1) || f(5));
  return 0;
}
}
namespace A122_5{
void test(){cout << (false <= 9 < 2.0 == 5.0);}

}
namespace A122_6{
void test(){if (18 < 9)
  cout << "k";
else
  cout << "o";}

}
namespace A122_7{
int g(int a, int b){
  int c = 55;
  if (b)
    return 8;
  else if (a == 4)
     return 6;
  else
    c = 7;
  return c;
}
int test(){
  cout << g(1, -8);
  return 0;
}
}
namespace A122_8{
int f(int &x, int &y){
  x = 5;
  y-= 2;
  return y;
}
int test(){
  int a = 3, b = 8;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 6, b = 9;
    cout << ((b<=5) || ((a-=2) > 5))
       << a << ":" << b << ":";
  }
  {
    a = 7;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A122_9{
int a = 4, b = 7, c = 6;
int g(int b){
 a += 1;
 b = 5;
 c = 4;
 return a + b + c;
}
int test(){
 int a = 9;
 b = 4;
 int c = 1;
 cout << g(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A122_10{
int a = 7, b = 5, c = 4;
int g(){
 a = 7;
 int b = 5;
 int c = 2;
 return a + b + c;
}
int test(){
 a = 6;
 b = 1;
 int c = 8;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A122_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  b += 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b += 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b += 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"415";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A122_12{
void test(){}

}
 

namespace A123_1{
void test(){cout << 15 % 4 / 3 * 8;}

}
namespace A123_2{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d 
  << ":" << 'd';}

}
namespace A123_3{
void test(){cout 
  << (! 3.0<=3 ||  7< 6 || false>=5.0);}

}
namespace A123_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(-9) or f(2));
  return 0;
}
}
namespace A123_5{
void test(){cout << (5 <= true != 8 == 7);}

}
namespace A123_6{
void test(){if (0 == 12)
  cout << "t";
else
  cout << "g";}

}
namespace A123_7{
int g(int c){
  int x = 89;
  if (c)
    x = 5;
  if (c < -5)
     return 2;
  else
     return 7;
  return x;
}
int test(){
  cout << g(-6);
  return 0;
}
}
namespace A123_8{
int f(int &x, int &y){
  x = 4;
  y+= 5;
  return y;
}
int test(){
  int a = 1, b = 9;
  b = f(a, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 3;
    cout << ((b>3) && ((a+=2) < 3))
       << a << ":" << b << ":";
  }
  {
    a = 8;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A123_9{
int a = 8, b = 3, c = 2;
int f(int &b){
 a = 3;
 b -= 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 5;
 int c = 7;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A123_10{
int a = 3, b = 9, c = 7;
int h(){
 a = 3;
 int b = 0;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 3;
 int b = 1;
 c = 9;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A123_11{
namespace B1{
int f(int a, int b){
  int t;
  t = a + b;
  b = b - 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  b -= 2;
  return a + b;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int a, int &b){
  int t = a + b;
  b -= 2;
  return t;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int &b){
  return a + b;
  b -= 2;
}
void test(){
int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"411";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A123_12{
void test(){}

}
 

namespace A124_1{
void test(){cout << 6 / 12 % 10 * 5;}

}
namespace A124_2{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" 
  << ":" << c;}

}
namespace A124_3{
void test(){cout 
  << ( 2==7 and ! 9!= 9.0 or true>4.0);}

}
namespace A124_4{
bool f(int n){
  cout<<"f";
  return n>-2;
}
int test(){
  cout<<(f(-6) && f(-4));
  return 0;
}
}
namespace A124_5{
void test(){cout << (3.0 < true > 2 >= 4.0);}

}
namespace A124_6{
void test(){if (2 > 7)
  cout << "y";
else
  cout << "i";}

}
namespace A124_7{
int h(int a, int b){
  int c = 58;
  if (a <= 2)
    c = 9;
  if (a < 1)
     return 5;
  else
    return 4;
  return c;
}
int test(){
  cout << h(7, -6);
  return 0;
}
}
namespace A124_8{
int f(int &x, int &y){
  x = 4;
  y-= 2;
  return x;
}
int test(){
  int a = 6, b = 9;
  a = f(b, b);
  cout << a << ":" << b <<':';
  {
    int a = 2, b = 6;
    cout << ((b>=6) || ((a-=1) >= 6))
       << a << ":" << b << ":";
  }
  {
    int a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A124_9{
int a = 9, b = 0, c = 0;
int g(int a){
 int c;
 a += 2;
 b = 3;
 c = 1;
 return a + b + c;
}
int test(){
 a = 7;
 int b = 6;
 c = 2;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A124_10{
int a = 2, b = 5, c = 4;
int h(){
 int a = 2;
 b = 6;
 int c = 8;
 return a + b + c;
}
int test(){
 a = 0;
 b = 0;
 int c = 3;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A124_11{
namespace B1{
void f(int &a, int &b){
  int t = b;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = t;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  int t = a;
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  a = b;
  b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A124_12{
void test(){}

}
 

namespace A125_1{
void test(){cout << 3 * 9 / 6 / 15;}

}
namespace A125_2{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A125_3{
void test(){cout 
  << ( 8<=false or ! 6.0< 3 || 5==7.0);}

}
namespace A125_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(5) and f(-8));
  return 0;
}
}
namespace A125_5{
void test(){cout << (4 <= 8 > 6.0 != 4);}

}
namespace A125_6{
void test(){if (16 != 14)
  cout << "l";
else
  cout << "u";}

}
namespace A125_7{
int f(int a){
  int w = 77;
  if (a <= 0)
    w = 8;
  else if (a > -2)
     return 9;
  else
     w = 6;
  return w;
}
int test(){
  cout << f(-5);
  return 0;
}
}
namespace A125_8{
int f(int &x, int &y){
  x = 3;
  y+= 5;
  return y;
}
int test(){
  int a = 1, b = 8;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 6;
    cout << ((b<4) || ((a-=1) <= 4))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A125_9{
int a = 9, b = 3, c = 5;
int h(int a){
 int c;
 a = 2;
 b -= 5;
 c = 4;
 return a + b + c;
}
int test(){
 a = 4;
 int b = 8;
 c = 1;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A125_10{
int a = 8, b = 2, c = 9;
int f(){
 a = 8;
 int b = 1;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 4;
 b = 7;
 int c = 6;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A125_11{
namespace B1{
int f(int &a, int &b){
  return a + b;
  a += 2;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B2{
int f(int a, int &b){
  int t;
  t = a + b;
  a = a + 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B3{
int f(int &a, int b){
  int t = a + b;
  a += 2;
  return t;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
namespace B4{
int f(int &a, int b){
  a += 2;
  return a + b;
}
void test(){
int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}
void test(){cout<<"644";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A125_12{
void test(){}

}
 

namespace A126_1{
void test(){cout << 10 % 6 * 9 % 4;}

}
namespace A126_2{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c 
  << ":" << "c";}

}
namespace A126_3{
void test(){cout 
  << ( 4>6 || ! true>= 2.0 and 8!=8.0);}

}
namespace A126_4{
bool f(int n){
  cout<<"f";
  return n<-1;
}
int test(){
  cout<<(f(-3) or f(7));
  return 0;
}
}
namespace A126_5{
void test(){cout << (7.0 < 7 >= false == 9);}

}
namespace A126_6{
void test(){if (10 <= 15)
  cout << "a";
else
  cout << "h";}

}
namespace A126_7{
int h(int d){
  int z = 84;
  if (d >= -3)
    return 4;
  else if (d <= 2)
     z = 3;
  else
     z = 1;
  return z;
}
int test(){
  cout << h(1);
  return 0;
}
}
namespace A126_8{
int f(int &x, int &y){
  x = 2;
  y-= 9;
  return x;
}
int test(){
  int a = 7, b = 8;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((a<=3) && ((b+=2) >= 7))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A126_9{
int a = 1, b = 0, c = 3;
int f(int &b){
 a *= 5;
 b = 3;
 c = 2;
 return a + b + c;
}
int test(){
 int a = 6;
 b = 9;
 int c = 2;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A126_10{
int a = 9, b = 3, c = 1;
int g(){
 int a = 9;
 b = 8;
 c = 6;
 return a + b + c;
}
int test(){
 int a = 4;
 int b = 2;
 c = 7;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A126_11{
namespace B1{
void f(int n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B2{
void f(int &n){
  if (n > 0) n = 0;
  else n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B3{
void f(int &n){
  if (n > 0) n = 0;
  else n = 0;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
namespace B4{
void f(int &n){
  if (n < 0) n = -n;
}
void test(){
int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}
void test(){cout<<"00";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A126_12{
void test(){}

}
 

namespace A127_1{
void test(){cout << 12 % 15 * 3 * 9;}

}
namespace A127_2{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" 
  << ":" << 'b';}

}
namespace A127_3{
void test(){cout 
  << (! true<=4.0 &&  3.0== 5 && 9!=7);}

}
namespace A127_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(1) && f(0));
  return 0;
}
}
namespace A127_5{
void test(){cout << (6 < 5.0 > false == 5);}

}
namespace A127_6{
void test(){if (8 <= 13)
  cout << "e";
else
  cout << "m";}

}
namespace A127_7{
int g(int b){
  int v = 64;
  if (b != -1)
    return 0;
  if (b == 5)
     return 9;
  else
     v = 0;
  return v;
}
int test(){
  cout << g(0);
  return 0;
}
}
namespace A127_8{
int f(int &x, int &y){
  x = 1;
  y-= 2;
  return x;
}
int test(){
  int a = 5, b = 3;
  a = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 7, b = 4;
    cout << ((a>7) && ((b+=1) > 5))
       << a << ":" << b << ":";
  }
  {
    a = 9;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A127_9{
int a = 5, b = 4, c = 7;
int h(int &a){
 a = 1;
 b -= 4;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 b = 9;
 int c = 2;
 cout << h(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A127_10{
int a = 5, b = 0, c = 3;
int h(){
 int a = 5;
 b = 0;
 c = 5;
 return a + b + c;
}
int test(){
 int a = 7;
 b = 1;
 int c = 6;
 cout << h() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A127_11{
namespace B1{
void f(int &a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B2{
void f(int a, int &b){
  if (a < b) {
    int t = a;
    a = b;
    b = t;
}  
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B3{
void f(int &a, int &b){
  if (a > b) a = b;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
namespace B4{
void f(int &a, int &b){
  if (a < b) a = b;
  else b = a;
}
void test(){
int n = 1, m = 3;
f(n, m);
cout << n << m;}
}
void test(){cout<<"31";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A127_12{
void test(){}

}
 

namespace A128_1{
void test(){cout << 6 / 6 % 15 / 6;}

}
namespace A128_2{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" 
  << c;
cout << ":" 
  << c + 48 % 15 * 6;}

}
namespace A128_3{
void test(){cout 
  << (! 5.0>3 and  2< false or 4>=9.0);}

}
namespace A128_4{
bool f(int n){
  cout<<"f";
  return n==0;
}
int test(){
  cout<<(f(6) || f(-2));
  return 0;
}
}
namespace A128_5{
void test(){cout << (2 != 9.0 >= 3.0 <= 3);}

}
namespace A128_6{
void test(){if (5 != 5)
  cout << "w";
else
  cout << "j";}

}
namespace A128_7{
int h(int a){
  int y = 49;
  if (a)
    return 6;
  if (a < 4)
     y = 5;
  else
     return 7;
  return y;
}
int test(){
  cout << h(-4);
  return 0;
}
}
namespace A128_8{
int f(int &x, int &y){
  x = 8;
  y+= 6;
  return y;
}
int test(){
  int a = 2, b = 8;
  b = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 3, b = 4;
    cout << ((b>=6) || ((a-=2) < 6))
       << a << ":" << b << ":";
  }
  {
    int a = 1;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A128_9{
int a = 0, b = 6, c = 1;
int f(int b){
 int c;
 a *= 2;
 b = 5;
 c = 4;
 return a + b + c;
}
int test(){
 a = 8;
 int b = 7;
 c = 4;
 cout << f(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A128_10{
int a = 8, b = 9, c = 2;
int g(){
 int a = 8;
 b = 4;
 c = 7;
 return a + b + c;
}
int test(){
 int a = 9;
 int b = 2;
 c = 4;
 cout << g() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A128_11{
namespace B1{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B2{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
namespace B4{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}
void test(){cout<<"443";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A128_12{
void test(){}

}
 

namespace A129_1{
void test(){cout << 4 * 3 / 5 % 3;}

}
namespace A129_2{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' 
  << ":" << d;}

}
namespace A129_3{
void test(){cout 
  << ( 7.0<=false or ! 3!= 9 and 6>=8.0);}

}
namespace A129_4{
bool f(int n){
  cout<<"f";
  return n;
}
int test(){
  cout<<(f(4) && f(9));
  return 0;
}
}
namespace A129_5{
void test(){cout << (3 == true != 8.0 > 7);}

}
namespace A129_6{
void test(){if (14 == 10)
  cout << "q";
else
  cout << "v";}

}
namespace A129_7{
int g(int a, int b){
  int c = 36;
  if (b)
    c = 3;
  else if (a != 3)
     return 4;
  else
    c = 3;
  return c;
}
int test(){
  cout << g(6, -7);
  return 0;
}
}
namespace A129_8{
int f(int &x, int &y){
  x = 9;
  y-= 5;
  return y;
}
int test(){
  int a = 7, b = 6;
  a = f(b, a);
  cout << a << ":" << b <<':';
  {
    int a = 5, b = 3;
    cout << ((b>=5) || ((a+=1) >= 4))
       << a << ":" << b << ":";
  }
  {
    a = 4;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A129_9{
int a = 5, b = 3, c = 8;
int g(int b){
 int c;
 a = 3;
 b += 4;
 c = 3;
 return a + b + c;
}
int test(){
 int a = 0;
 b = 6;
 c = 7;
 cout << g(b) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A129_10{
int a = 5, b = 6, c = 3;
int f(){
 a = 5;
 int b = 0;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 8;
 int b = 6;
 c = 9;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A129_11{
namespace B1{
int f(int &n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B2{
int f(int n){
  return n;
  n += 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B3{
int f(int n){
  return n + 2;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
namespace B4{
int f(int n){
  n += 2;
  return n;
}
void test(){
int n = 2;
cout << f(n);
cout << n;}
}
void test(){cout<<"44";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A129_12{
void test(){}

}
 

namespace A130_1{
void test(){cout << 5 * 5 * 9 * 10;}

}
namespace A130_2{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c 
  << ":" << 'c';}

}
namespace A130_3{
void test(){cout 
  << (! 7>4 ||  true< 2 && 9.0==3.0);}

}
namespace A130_4{
bool f(int n){
  cout<<"f";
  return n>=-2;
}
int test(){
  cout<<(f(-5) or f(-7));
  return 0;
}
}
namespace A130_5{
void test(){cout << (true <= 8 < 2.0 >= 6.0);}

}
namespace A130_6{
void test(){if (19 > 17)
  cout << "f";
else
  cout << "x";}

}
namespace A130_7{
int f(int b){
  int u = 41;
  if (b < 1)
    u = 2;
  else if (b <= -4)
     return 8;
  else
     u = 1;
  return u;
}
int test(){
  cout << f(9);
  return 0;
}
}
namespace A130_8{
int f(int &x, int &y){
  x = 2;
  y+= 1;
  return x;
}
int test(){
  int a = 7, b = 9;
  b = f(a, b);
  cout << a << ":" << b <<':';
  {
    int a = 8, b = 6;
    cout << ((a<4) && ((b-=2) > 3))
       << a << ":" << b << ":";
  }
  {
    int a = 3;
    cout << a << ':';
  }
  cout << a << ":" << b << endl;
  return 0;
}
}
namespace A130_9{
int a = 4, b = 9, c = 3;
int f(int &a){
 a = 5;
 b = 2;
 c = 1;
 return a + b + c;
}
int test(){
 int a = 2;
 int b = 1;
 c = 5;
 cout << f(a) << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A130_10{
int a = 8, b = 4, c = 0;
int f(){
 a = 8;
 int b = 7;
 int c = 1;
 return a + b + c;
}
int test(){
 a = 2;
 b = 3;
 int c = 5;
 cout << f() << ':';
 cout << a << ':' << b 
   << ':' << c;
 return 0;
}
}
namespace A130_11{
namespace B1{
int f(int a, int &b){
  return a + b;
  b += 3;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B2{
int f(int a, int b){
  int t;
  t = a + b;
  b = b + 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B3{
int f(int a, int &b){
  b += 3;
  return a + b;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
namespace B4{
int f(int a, int &b){
  int t = a + b;
  b += 3;
  return t;
}
void test(){
int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}
void test(){cout<<"324";cout<<":";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}
namespace A130_12{
void test(){}

}
 

int main(){
cout<<"call 1.bat\n";
cout<<"=1_1.py\n";
A1_1::test(); cout<<endl;
cout<<"=1_2.py\n";
A1_2::test(); cout<<endl;
cout<<"=1_3.py\n";
A1_3::test(); cout<<endl;
cout<<"=1_4.py\n";
A1_4::test(); cout<<endl;
cout<<"=1_5.py\n";
A1_5::test(); cout<<endl;
cout<<"=1_6.py\n";
A1_6::test(); cout<<endl;
cout<<"=1_7.py\n";
A1_7::test(); cout<<endl;
cout<<"=1_8.py\n";
A1_8::test(); cout<<endl;
cout<<"=1_9.py\n";
A1_9::test(); cout<<endl;
cout<<"=1_10.py\n";
A1_10::test(); cout<<endl;
cout<<"=1_11.py\n";
A1_11::test(); cout<<endl;
cout<<"=1_12.py\n";
A1_12::test(); cout<<endl;
cout<<"call 2.bat\n";
cout<<"=2_1.py\n";
A2_1::test(); cout<<endl;
cout<<"=2_2.py\n";
A2_2::test(); cout<<endl;
cout<<"=2_3.py\n";
A2_3::test(); cout<<endl;
cout<<"=2_4.py\n";
A2_4::test(); cout<<endl;
cout<<"=2_5.py\n";
A2_5::test(); cout<<endl;
cout<<"=2_6.py\n";
A2_6::test(); cout<<endl;
cout<<"=2_7.py\n";
A2_7::test(); cout<<endl;
cout<<"=2_8.py\n";
A2_8::test(); cout<<endl;
cout<<"=2_9.py\n";
A2_9::test(); cout<<endl;
cout<<"=2_10.py\n";
A2_10::test(); cout<<endl;
cout<<"=2_11.py\n";
A2_11::test(); cout<<endl;
cout<<"=2_12.py\n";
A2_12::test(); cout<<endl;
cout<<"call 3.bat\n";
cout<<"=3_1.py\n";
A3_1::test(); cout<<endl;
cout<<"=3_2.py\n";
A3_2::test(); cout<<endl;
cout<<"=3_3.py\n";
A3_3::test(); cout<<endl;
cout<<"=3_4.py\n";
A3_4::test(); cout<<endl;
cout<<"=3_5.py\n";
A3_5::test(); cout<<endl;
cout<<"=3_6.py\n";
A3_6::test(); cout<<endl;
cout<<"=3_7.py\n";
A3_7::test(); cout<<endl;
cout<<"=3_8.py\n";
A3_8::test(); cout<<endl;
cout<<"=3_9.py\n";
A3_9::test(); cout<<endl;
cout<<"=3_10.py\n";
A3_10::test(); cout<<endl;
cout<<"=3_11.py\n";
A3_11::test(); cout<<endl;
cout<<"=3_12.py\n";
A3_12::test(); cout<<endl;
cout<<"call 4.bat\n";
cout<<"=4_1.py\n";
A4_1::test(); cout<<endl;
cout<<"=4_2.py\n";
A4_2::test(); cout<<endl;
cout<<"=4_3.py\n";
A4_3::test(); cout<<endl;
cout<<"=4_4.py\n";
A4_4::test(); cout<<endl;
cout<<"=4_5.py\n";
A4_5::test(); cout<<endl;
cout<<"=4_6.py\n";
A4_6::test(); cout<<endl;
cout<<"=4_7.py\n";
A4_7::test(); cout<<endl;
cout<<"=4_8.py\n";
A4_8::test(); cout<<endl;
cout<<"=4_9.py\n";
A4_9::test(); cout<<endl;
cout<<"=4_10.py\n";
A4_10::test(); cout<<endl;
cout<<"=4_11.py\n";
A4_11::test(); cout<<endl;
cout<<"=4_12.py\n";
A4_12::test(); cout<<endl;
cout<<"call 5.bat\n";
cout<<"=5_1.py\n";
A5_1::test(); cout<<endl;
cout<<"=5_2.py\n";
A5_2::test(); cout<<endl;
cout<<"=5_3.py\n";
A5_3::test(); cout<<endl;
cout<<"=5_4.py\n";
A5_4::test(); cout<<endl;
cout<<"=5_5.py\n";
A5_5::test(); cout<<endl;
cout<<"=5_6.py\n";
A5_6::test(); cout<<endl;
cout<<"=5_7.py\n";
A5_7::test(); cout<<endl;
cout<<"=5_8.py\n";
A5_8::test(); cout<<endl;
cout<<"=5_9.py\n";
A5_9::test(); cout<<endl;
cout<<"=5_10.py\n";
A5_10::test(); cout<<endl;
cout<<"=5_11.py\n";
A5_11::test(); cout<<endl;
cout<<"=5_12.py\n";
A5_12::test(); cout<<endl;
cout<<"call 6.bat\n";
cout<<"=6_1.py\n";
A6_1::test(); cout<<endl;
cout<<"=6_2.py\n";
A6_2::test(); cout<<endl;
cout<<"=6_3.py\n";
A6_3::test(); cout<<endl;
cout<<"=6_4.py\n";
A6_4::test(); cout<<endl;
cout<<"=6_5.py\n";
A6_5::test(); cout<<endl;
cout<<"=6_6.py\n";
A6_6::test(); cout<<endl;
cout<<"=6_7.py\n";
A6_7::test(); cout<<endl;
cout<<"=6_8.py\n";
A6_8::test(); cout<<endl;
cout<<"=6_9.py\n";
A6_9::test(); cout<<endl;
cout<<"=6_10.py\n";
A6_10::test(); cout<<endl;
cout<<"=6_11.py\n";
A6_11::test(); cout<<endl;
cout<<"=6_12.py\n";
A6_12::test(); cout<<endl;
cout<<"call 7.bat\n";
cout<<"=7_1.py\n";
A7_1::test(); cout<<endl;
cout<<"=7_2.py\n";
A7_2::test(); cout<<endl;
cout<<"=7_3.py\n";
A7_3::test(); cout<<endl;
cout<<"=7_4.py\n";
A7_4::test(); cout<<endl;
cout<<"=7_5.py\n";
A7_5::test(); cout<<endl;
cout<<"=7_6.py\n";
A7_6::test(); cout<<endl;
cout<<"=7_7.py\n";
A7_7::test(); cout<<endl;
cout<<"=7_8.py\n";
A7_8::test(); cout<<endl;
cout<<"=7_9.py\n";
A7_9::test(); cout<<endl;
cout<<"=7_10.py\n";
A7_10::test(); cout<<endl;
cout<<"=7_11.py\n";
A7_11::test(); cout<<endl;
cout<<"=7_12.py\n";
A7_12::test(); cout<<endl;
cout<<"call 8.bat\n";
cout<<"=8_1.py\n";
A8_1::test(); cout<<endl;
cout<<"=8_2.py\n";
A8_2::test(); cout<<endl;
cout<<"=8_3.py\n";
A8_3::test(); cout<<endl;
cout<<"=8_4.py\n";
A8_4::test(); cout<<endl;
cout<<"=8_5.py\n";
A8_5::test(); cout<<endl;
cout<<"=8_6.py\n";
A8_6::test(); cout<<endl;
cout<<"=8_7.py\n";
A8_7::test(); cout<<endl;
cout<<"=8_8.py\n";
A8_8::test(); cout<<endl;
cout<<"=8_9.py\n";
A8_9::test(); cout<<endl;
cout<<"=8_10.py\n";
A8_10::test(); cout<<endl;
cout<<"=8_11.py\n";
A8_11::test(); cout<<endl;
cout<<"=8_12.py\n";
A8_12::test(); cout<<endl;
cout<<"call 9.bat\n";
cout<<"=9_1.py\n";
A9_1::test(); cout<<endl;
cout<<"=9_2.py\n";
A9_2::test(); cout<<endl;
cout<<"=9_3.py\n";
A9_3::test(); cout<<endl;
cout<<"=9_4.py\n";
A9_4::test(); cout<<endl;
cout<<"=9_5.py\n";
A9_5::test(); cout<<endl;
cout<<"=9_6.py\n";
A9_6::test(); cout<<endl;
cout<<"=9_7.py\n";
A9_7::test(); cout<<endl;
cout<<"=9_8.py\n";
A9_8::test(); cout<<endl;
cout<<"=9_9.py\n";
A9_9::test(); cout<<endl;
cout<<"=9_10.py\n";
A9_10::test(); cout<<endl;
cout<<"=9_11.py\n";
A9_11::test(); cout<<endl;
cout<<"=9_12.py\n";
A9_12::test(); cout<<endl;
cout<<"call 10.bat\n";
cout<<"=10_1.py\n";
A10_1::test(); cout<<endl;
cout<<"=10_2.py\n";
A10_2::test(); cout<<endl;
cout<<"=10_3.py\n";
A10_3::test(); cout<<endl;
cout<<"=10_4.py\n";
A10_4::test(); cout<<endl;
cout<<"=10_5.py\n";
A10_5::test(); cout<<endl;
cout<<"=10_6.py\n";
A10_6::test(); cout<<endl;
cout<<"=10_7.py\n";
A10_7::test(); cout<<endl;
cout<<"=10_8.py\n";
A10_8::test(); cout<<endl;
cout<<"=10_9.py\n";
A10_9::test(); cout<<endl;
cout<<"=10_10.py\n";
A10_10::test(); cout<<endl;
cout<<"=10_11.py\n";
A10_11::test(); cout<<endl;
cout<<"=10_12.py\n";
A10_12::test(); cout<<endl;
cout<<"call 11.bat\n";
cout<<"=11_1.py\n";
A11_1::test(); cout<<endl;
cout<<"=11_2.py\n";
A11_2::test(); cout<<endl;
cout<<"=11_3.py\n";
A11_3::test(); cout<<endl;
cout<<"=11_4.py\n";
A11_4::test(); cout<<endl;
cout<<"=11_5.py\n";
A11_5::test(); cout<<endl;
cout<<"=11_6.py\n";
A11_6::test(); cout<<endl;
cout<<"=11_7.py\n";
A11_7::test(); cout<<endl;
cout<<"=11_8.py\n";
A11_8::test(); cout<<endl;
cout<<"=11_9.py\n";
A11_9::test(); cout<<endl;
cout<<"=11_10.py\n";
A11_10::test(); cout<<endl;
cout<<"=11_11.py\n";
A11_11::test(); cout<<endl;
cout<<"=11_12.py\n";
A11_12::test(); cout<<endl;
cout<<"call 12.bat\n";
cout<<"=12_1.py\n";
A12_1::test(); cout<<endl;
cout<<"=12_2.py\n";
A12_2::test(); cout<<endl;
cout<<"=12_3.py\n";
A12_3::test(); cout<<endl;
cout<<"=12_4.py\n";
A12_4::test(); cout<<endl;
cout<<"=12_5.py\n";
A12_5::test(); cout<<endl;
cout<<"=12_6.py\n";
A12_6::test(); cout<<endl;
cout<<"=12_7.py\n";
A12_7::test(); cout<<endl;
cout<<"=12_8.py\n";
A12_8::test(); cout<<endl;
cout<<"=12_9.py\n";
A12_9::test(); cout<<endl;
cout<<"=12_10.py\n";
A12_10::test(); cout<<endl;
cout<<"=12_11.py\n";
A12_11::test(); cout<<endl;
cout<<"=12_12.py\n";
A12_12::test(); cout<<endl;
cout<<"call 13.bat\n";
cout<<"=13_1.py\n";
A13_1::test(); cout<<endl;
cout<<"=13_2.py\n";
A13_2::test(); cout<<endl;
cout<<"=13_3.py\n";
A13_3::test(); cout<<endl;
cout<<"=13_4.py\n";
A13_4::test(); cout<<endl;
cout<<"=13_5.py\n";
A13_5::test(); cout<<endl;
cout<<"=13_6.py\n";
A13_6::test(); cout<<endl;
cout<<"=13_7.py\n";
A13_7::test(); cout<<endl;
cout<<"=13_8.py\n";
A13_8::test(); cout<<endl;
cout<<"=13_9.py\n";
A13_9::test(); cout<<endl;
cout<<"=13_10.py\n";
A13_10::test(); cout<<endl;
cout<<"=13_11.py\n";
A13_11::test(); cout<<endl;
cout<<"=13_12.py\n";
A13_12::test(); cout<<endl;
cout<<"call 14.bat\n";
cout<<"=14_1.py\n";
A14_1::test(); cout<<endl;
cout<<"=14_2.py\n";
A14_2::test(); cout<<endl;
cout<<"=14_3.py\n";
A14_3::test(); cout<<endl;
cout<<"=14_4.py\n";
A14_4::test(); cout<<endl;
cout<<"=14_5.py\n";
A14_5::test(); cout<<endl;
cout<<"=14_6.py\n";
A14_6::test(); cout<<endl;
cout<<"=14_7.py\n";
A14_7::test(); cout<<endl;
cout<<"=14_8.py\n";
A14_8::test(); cout<<endl;
cout<<"=14_9.py\n";
A14_9::test(); cout<<endl;
cout<<"=14_10.py\n";
A14_10::test(); cout<<endl;
cout<<"=14_11.py\n";
A14_11::test(); cout<<endl;
cout<<"=14_12.py\n";
A14_12::test(); cout<<endl;
cout<<"call 15.bat\n";
cout<<"=15_1.py\n";
A15_1::test(); cout<<endl;
cout<<"=15_2.py\n";
A15_2::test(); cout<<endl;
cout<<"=15_3.py\n";
A15_3::test(); cout<<endl;
cout<<"=15_4.py\n";
A15_4::test(); cout<<endl;
cout<<"=15_5.py\n";
A15_5::test(); cout<<endl;
cout<<"=15_6.py\n";
A15_6::test(); cout<<endl;
cout<<"=15_7.py\n";
A15_7::test(); cout<<endl;
cout<<"=15_8.py\n";
A15_8::test(); cout<<endl;
cout<<"=15_9.py\n";
A15_9::test(); cout<<endl;
cout<<"=15_10.py\n";
A15_10::test(); cout<<endl;
cout<<"=15_11.py\n";
A15_11::test(); cout<<endl;
cout<<"=15_12.py\n";
A15_12::test(); cout<<endl;
cout<<"call 16.bat\n";
cout<<"=16_1.py\n";
A16_1::test(); cout<<endl;
cout<<"=16_2.py\n";
A16_2::test(); cout<<endl;
cout<<"=16_3.py\n";
A16_3::test(); cout<<endl;
cout<<"=16_4.py\n";
A16_4::test(); cout<<endl;
cout<<"=16_5.py\n";
A16_5::test(); cout<<endl;
cout<<"=16_6.py\n";
A16_6::test(); cout<<endl;
cout<<"=16_7.py\n";
A16_7::test(); cout<<endl;
cout<<"=16_8.py\n";
A16_8::test(); cout<<endl;
cout<<"=16_9.py\n";
A16_9::test(); cout<<endl;
cout<<"=16_10.py\n";
A16_10::test(); cout<<endl;
cout<<"=16_11.py\n";
A16_11::test(); cout<<endl;
cout<<"=16_12.py\n";
A16_12::test(); cout<<endl;
cout<<"call 17.bat\n";
cout<<"=17_1.py\n";
A17_1::test(); cout<<endl;
cout<<"=17_2.py\n";
A17_2::test(); cout<<endl;
cout<<"=17_3.py\n";
A17_3::test(); cout<<endl;
cout<<"=17_4.py\n";
A17_4::test(); cout<<endl;
cout<<"=17_5.py\n";
A17_5::test(); cout<<endl;
cout<<"=17_6.py\n";
A17_6::test(); cout<<endl;
cout<<"=17_7.py\n";
A17_7::test(); cout<<endl;
cout<<"=17_8.py\n";
A17_8::test(); cout<<endl;
cout<<"=17_9.py\n";
A17_9::test(); cout<<endl;
cout<<"=17_10.py\n";
A17_10::test(); cout<<endl;
cout<<"=17_11.py\n";
A17_11::test(); cout<<endl;
cout<<"=17_12.py\n";
A17_12::test(); cout<<endl;
cout<<"call 18.bat\n";
cout<<"=18_1.py\n";
A18_1::test(); cout<<endl;
cout<<"=18_2.py\n";
A18_2::test(); cout<<endl;
cout<<"=18_3.py\n";
A18_3::test(); cout<<endl;
cout<<"=18_4.py\n";
A18_4::test(); cout<<endl;
cout<<"=18_5.py\n";
A18_5::test(); cout<<endl;
cout<<"=18_6.py\n";
A18_6::test(); cout<<endl;
cout<<"=18_7.py\n";
A18_7::test(); cout<<endl;
cout<<"=18_8.py\n";
A18_8::test(); cout<<endl;
cout<<"=18_9.py\n";
A18_9::test(); cout<<endl;
cout<<"=18_10.py\n";
A18_10::test(); cout<<endl;
cout<<"=18_11.py\n";
A18_11::test(); cout<<endl;
cout<<"=18_12.py\n";
A18_12::test(); cout<<endl;
cout<<"call 19.bat\n";
cout<<"=19_1.py\n";
A19_1::test(); cout<<endl;
cout<<"=19_2.py\n";
A19_2::test(); cout<<endl;
cout<<"=19_3.py\n";
A19_3::test(); cout<<endl;
cout<<"=19_4.py\n";
A19_4::test(); cout<<endl;
cout<<"=19_5.py\n";
A19_5::test(); cout<<endl;
cout<<"=19_6.py\n";
A19_6::test(); cout<<endl;
cout<<"=19_7.py\n";
A19_7::test(); cout<<endl;
cout<<"=19_8.py\n";
A19_8::test(); cout<<endl;
cout<<"=19_9.py\n";
A19_9::test(); cout<<endl;
cout<<"=19_10.py\n";
A19_10::test(); cout<<endl;
cout<<"=19_11.py\n";
A19_11::test(); cout<<endl;
cout<<"=19_12.py\n";
A19_12::test(); cout<<endl;
cout<<"call 20.bat\n";
cout<<"=20_1.py\n";
A20_1::test(); cout<<endl;
cout<<"=20_2.py\n";
A20_2::test(); cout<<endl;
cout<<"=20_3.py\n";
A20_3::test(); cout<<endl;
cout<<"=20_4.py\n";
A20_4::test(); cout<<endl;
cout<<"=20_5.py\n";
A20_5::test(); cout<<endl;
cout<<"=20_6.py\n";
A20_6::test(); cout<<endl;
cout<<"=20_7.py\n";
A20_7::test(); cout<<endl;
cout<<"=20_8.py\n";
A20_8::test(); cout<<endl;
cout<<"=20_9.py\n";
A20_9::test(); cout<<endl;
cout<<"=20_10.py\n";
A20_10::test(); cout<<endl;
cout<<"=20_11.py\n";
A20_11::test(); cout<<endl;
cout<<"=20_12.py\n";
A20_12::test(); cout<<endl;
cout<<"call 21.bat\n";
cout<<"=21_1.py\n";
A21_1::test(); cout<<endl;
cout<<"=21_2.py\n";
A21_2::test(); cout<<endl;
cout<<"=21_3.py\n";
A21_3::test(); cout<<endl;
cout<<"=21_4.py\n";
A21_4::test(); cout<<endl;
cout<<"=21_5.py\n";
A21_5::test(); cout<<endl;
cout<<"=21_6.py\n";
A21_6::test(); cout<<endl;
cout<<"=21_7.py\n";
A21_7::test(); cout<<endl;
cout<<"=21_8.py\n";
A21_8::test(); cout<<endl;
cout<<"=21_9.py\n";
A21_9::test(); cout<<endl;
cout<<"=21_10.py\n";
A21_10::test(); cout<<endl;
cout<<"=21_11.py\n";
A21_11::test(); cout<<endl;
cout<<"=21_12.py\n";
A21_12::test(); cout<<endl;
cout<<"call 22.bat\n";
cout<<"=22_1.py\n";
A22_1::test(); cout<<endl;
cout<<"=22_2.py\n";
A22_2::test(); cout<<endl;
cout<<"=22_3.py\n";
A22_3::test(); cout<<endl;
cout<<"=22_4.py\n";
A22_4::test(); cout<<endl;
cout<<"=22_5.py\n";
A22_5::test(); cout<<endl;
cout<<"=22_6.py\n";
A22_6::test(); cout<<endl;
cout<<"=22_7.py\n";
A22_7::test(); cout<<endl;
cout<<"=22_8.py\n";
A22_8::test(); cout<<endl;
cout<<"=22_9.py\n";
A22_9::test(); cout<<endl;
cout<<"=22_10.py\n";
A22_10::test(); cout<<endl;
cout<<"=22_11.py\n";
A22_11::test(); cout<<endl;
cout<<"=22_12.py\n";
A22_12::test(); cout<<endl;
cout<<"call 23.bat\n";
cout<<"=23_1.py\n";
A23_1::test(); cout<<endl;
cout<<"=23_2.py\n";
A23_2::test(); cout<<endl;
cout<<"=23_3.py\n";
A23_3::test(); cout<<endl;
cout<<"=23_4.py\n";
A23_4::test(); cout<<endl;
cout<<"=23_5.py\n";
A23_5::test(); cout<<endl;
cout<<"=23_6.py\n";
A23_6::test(); cout<<endl;
cout<<"=23_7.py\n";
A23_7::test(); cout<<endl;
cout<<"=23_8.py\n";
A23_8::test(); cout<<endl;
cout<<"=23_9.py\n";
A23_9::test(); cout<<endl;
cout<<"=23_10.py\n";
A23_10::test(); cout<<endl;
cout<<"=23_11.py\n";
A23_11::test(); cout<<endl;
cout<<"=23_12.py\n";
A23_12::test(); cout<<endl;
cout<<"call 24.bat\n";
cout<<"=24_1.py\n";
A24_1::test(); cout<<endl;
cout<<"=24_2.py\n";
A24_2::test(); cout<<endl;
cout<<"=24_3.py\n";
A24_3::test(); cout<<endl;
cout<<"=24_4.py\n";
A24_4::test(); cout<<endl;
cout<<"=24_5.py\n";
A24_5::test(); cout<<endl;
cout<<"=24_6.py\n";
A24_6::test(); cout<<endl;
cout<<"=24_7.py\n";
A24_7::test(); cout<<endl;
cout<<"=24_8.py\n";
A24_8::test(); cout<<endl;
cout<<"=24_9.py\n";
A24_9::test(); cout<<endl;
cout<<"=24_10.py\n";
A24_10::test(); cout<<endl;
cout<<"=24_11.py\n";
A24_11::test(); cout<<endl;
cout<<"=24_12.py\n";
A24_12::test(); cout<<endl;
cout<<"call 25.bat\n";
cout<<"=25_1.py\n";
A25_1::test(); cout<<endl;
cout<<"=25_2.py\n";
A25_2::test(); cout<<endl;
cout<<"=25_3.py\n";
A25_3::test(); cout<<endl;
cout<<"=25_4.py\n";
A25_4::test(); cout<<endl;
cout<<"=25_5.py\n";
A25_5::test(); cout<<endl;
cout<<"=25_6.py\n";
A25_6::test(); cout<<endl;
cout<<"=25_7.py\n";
A25_7::test(); cout<<endl;
cout<<"=25_8.py\n";
A25_8::test(); cout<<endl;
cout<<"=25_9.py\n";
A25_9::test(); cout<<endl;
cout<<"=25_10.py\n";
A25_10::test(); cout<<endl;
cout<<"=25_11.py\n";
A25_11::test(); cout<<endl;
cout<<"=25_12.py\n";
A25_12::test(); cout<<endl;
cout<<"call 26.bat\n";
cout<<"=26_1.py\n";
A26_1::test(); cout<<endl;
cout<<"=26_2.py\n";
A26_2::test(); cout<<endl;
cout<<"=26_3.py\n";
A26_3::test(); cout<<endl;
cout<<"=26_4.py\n";
A26_4::test(); cout<<endl;
cout<<"=26_5.py\n";
A26_5::test(); cout<<endl;
cout<<"=26_6.py\n";
A26_6::test(); cout<<endl;
cout<<"=26_7.py\n";
A26_7::test(); cout<<endl;
cout<<"=26_8.py\n";
A26_8::test(); cout<<endl;
cout<<"=26_9.py\n";
A26_9::test(); cout<<endl;
cout<<"=26_10.py\n";
A26_10::test(); cout<<endl;
cout<<"=26_11.py\n";
A26_11::test(); cout<<endl;
cout<<"=26_12.py\n";
A26_12::test(); cout<<endl;
cout<<"call 27.bat\n";
cout<<"=27_1.py\n";
A27_1::test(); cout<<endl;
cout<<"=27_2.py\n";
A27_2::test(); cout<<endl;
cout<<"=27_3.py\n";
A27_3::test(); cout<<endl;
cout<<"=27_4.py\n";
A27_4::test(); cout<<endl;
cout<<"=27_5.py\n";
A27_5::test(); cout<<endl;
cout<<"=27_6.py\n";
A27_6::test(); cout<<endl;
cout<<"=27_7.py\n";
A27_7::test(); cout<<endl;
cout<<"=27_8.py\n";
A27_8::test(); cout<<endl;
cout<<"=27_9.py\n";
A27_9::test(); cout<<endl;
cout<<"=27_10.py\n";
A27_10::test(); cout<<endl;
cout<<"=27_11.py\n";
A27_11::test(); cout<<endl;
cout<<"=27_12.py\n";
A27_12::test(); cout<<endl;
cout<<"call 28.bat\n";
cout<<"=28_1.py\n";
A28_1::test(); cout<<endl;
cout<<"=28_2.py\n";
A28_2::test(); cout<<endl;
cout<<"=28_3.py\n";
A28_3::test(); cout<<endl;
cout<<"=28_4.py\n";
A28_4::test(); cout<<endl;
cout<<"=28_5.py\n";
A28_5::test(); cout<<endl;
cout<<"=28_6.py\n";
A28_6::test(); cout<<endl;
cout<<"=28_7.py\n";
A28_7::test(); cout<<endl;
cout<<"=28_8.py\n";
A28_8::test(); cout<<endl;
cout<<"=28_9.py\n";
A28_9::test(); cout<<endl;
cout<<"=28_10.py\n";
A28_10::test(); cout<<endl;
cout<<"=28_11.py\n";
A28_11::test(); cout<<endl;
cout<<"=28_12.py\n";
A28_12::test(); cout<<endl;
cout<<"call 29.bat\n";
cout<<"=29_1.py\n";
A29_1::test(); cout<<endl;
cout<<"=29_2.py\n";
A29_2::test(); cout<<endl;
cout<<"=29_3.py\n";
A29_3::test(); cout<<endl;
cout<<"=29_4.py\n";
A29_4::test(); cout<<endl;
cout<<"=29_5.py\n";
A29_5::test(); cout<<endl;
cout<<"=29_6.py\n";
A29_6::test(); cout<<endl;
cout<<"=29_7.py\n";
A29_7::test(); cout<<endl;
cout<<"=29_8.py\n";
A29_8::test(); cout<<endl;
cout<<"=29_9.py\n";
A29_9::test(); cout<<endl;
cout<<"=29_10.py\n";
A29_10::test(); cout<<endl;
cout<<"=29_11.py\n";
A29_11::test(); cout<<endl;
cout<<"=29_12.py\n";
A29_12::test(); cout<<endl;
cout<<"call 30.bat\n";
cout<<"=30_1.py\n";
A30_1::test(); cout<<endl;
cout<<"=30_2.py\n";
A30_2::test(); cout<<endl;
cout<<"=30_3.py\n";
A30_3::test(); cout<<endl;
cout<<"=30_4.py\n";
A30_4::test(); cout<<endl;
cout<<"=30_5.py\n";
A30_5::test(); cout<<endl;
cout<<"=30_6.py\n";
A30_6::test(); cout<<endl;
cout<<"=30_7.py\n";
A30_7::test(); cout<<endl;
cout<<"=30_8.py\n";
A30_8::test(); cout<<endl;
cout<<"=30_9.py\n";
A30_9::test(); cout<<endl;
cout<<"=30_10.py\n";
A30_10::test(); cout<<endl;
cout<<"=30_11.py\n";
A30_11::test(); cout<<endl;
cout<<"=30_12.py\n";
A30_12::test(); cout<<endl;
cout<<"call 31.bat\n";
cout<<"=31_1.py\n";
A31_1::test(); cout<<endl;
cout<<"=31_2.py\n";
A31_2::test(); cout<<endl;
cout<<"=31_3.py\n";
A31_3::test(); cout<<endl;
cout<<"=31_4.py\n";
A31_4::test(); cout<<endl;
cout<<"=31_5.py\n";
A31_5::test(); cout<<endl;
cout<<"=31_6.py\n";
A31_6::test(); cout<<endl;
cout<<"=31_7.py\n";
A31_7::test(); cout<<endl;
cout<<"=31_8.py\n";
A31_8::test(); cout<<endl;
cout<<"=31_9.py\n";
A31_9::test(); cout<<endl;
cout<<"=31_10.py\n";
A31_10::test(); cout<<endl;
cout<<"=31_11.py\n";
A31_11::test(); cout<<endl;
cout<<"=31_12.py\n";
A31_12::test(); cout<<endl;
cout<<"call 32.bat\n";
cout<<"=32_1.py\n";
A32_1::test(); cout<<endl;
cout<<"=32_2.py\n";
A32_2::test(); cout<<endl;
cout<<"=32_3.py\n";
A32_3::test(); cout<<endl;
cout<<"=32_4.py\n";
A32_4::test(); cout<<endl;
cout<<"=32_5.py\n";
A32_5::test(); cout<<endl;
cout<<"=32_6.py\n";
A32_6::test(); cout<<endl;
cout<<"=32_7.py\n";
A32_7::test(); cout<<endl;
cout<<"=32_8.py\n";
A32_8::test(); cout<<endl;
cout<<"=32_9.py\n";
A32_9::test(); cout<<endl;
cout<<"=32_10.py\n";
A32_10::test(); cout<<endl;
cout<<"=32_11.py\n";
A32_11::test(); cout<<endl;
cout<<"=32_12.py\n";
A32_12::test(); cout<<endl;
cout<<"call 33.bat\n";
cout<<"=33_1.py\n";
A33_1::test(); cout<<endl;
cout<<"=33_2.py\n";
A33_2::test(); cout<<endl;
cout<<"=33_3.py\n";
A33_3::test(); cout<<endl;
cout<<"=33_4.py\n";
A33_4::test(); cout<<endl;
cout<<"=33_5.py\n";
A33_5::test(); cout<<endl;
cout<<"=33_6.py\n";
A33_6::test(); cout<<endl;
cout<<"=33_7.py\n";
A33_7::test(); cout<<endl;
cout<<"=33_8.py\n";
A33_8::test(); cout<<endl;
cout<<"=33_9.py\n";
A33_9::test(); cout<<endl;
cout<<"=33_10.py\n";
A33_10::test(); cout<<endl;
cout<<"=33_11.py\n";
A33_11::test(); cout<<endl;
cout<<"=33_12.py\n";
A33_12::test(); cout<<endl;
cout<<"call 34.bat\n";
cout<<"=34_1.py\n";
A34_1::test(); cout<<endl;
cout<<"=34_2.py\n";
A34_2::test(); cout<<endl;
cout<<"=34_3.py\n";
A34_3::test(); cout<<endl;
cout<<"=34_4.py\n";
A34_4::test(); cout<<endl;
cout<<"=34_5.py\n";
A34_5::test(); cout<<endl;
cout<<"=34_6.py\n";
A34_6::test(); cout<<endl;
cout<<"=34_7.py\n";
A34_7::test(); cout<<endl;
cout<<"=34_8.py\n";
A34_8::test(); cout<<endl;
cout<<"=34_9.py\n";
A34_9::test(); cout<<endl;
cout<<"=34_10.py\n";
A34_10::test(); cout<<endl;
cout<<"=34_11.py\n";
A34_11::test(); cout<<endl;
cout<<"=34_12.py\n";
A34_12::test(); cout<<endl;
cout<<"call 35.bat\n";
cout<<"=35_1.py\n";
A35_1::test(); cout<<endl;
cout<<"=35_2.py\n";
A35_2::test(); cout<<endl;
cout<<"=35_3.py\n";
A35_3::test(); cout<<endl;
cout<<"=35_4.py\n";
A35_4::test(); cout<<endl;
cout<<"=35_5.py\n";
A35_5::test(); cout<<endl;
cout<<"=35_6.py\n";
A35_6::test(); cout<<endl;
cout<<"=35_7.py\n";
A35_7::test(); cout<<endl;
cout<<"=35_8.py\n";
A35_8::test(); cout<<endl;
cout<<"=35_9.py\n";
A35_9::test(); cout<<endl;
cout<<"=35_10.py\n";
A35_10::test(); cout<<endl;
cout<<"=35_11.py\n";
A35_11::test(); cout<<endl;
cout<<"=35_12.py\n";
A35_12::test(); cout<<endl;
cout<<"call 36.bat\n";
cout<<"=36_1.py\n";
A36_1::test(); cout<<endl;
cout<<"=36_2.py\n";
A36_2::test(); cout<<endl;
cout<<"=36_3.py\n";
A36_3::test(); cout<<endl;
cout<<"=36_4.py\n";
A36_4::test(); cout<<endl;
cout<<"=36_5.py\n";
A36_5::test(); cout<<endl;
cout<<"=36_6.py\n";
A36_6::test(); cout<<endl;
cout<<"=36_7.py\n";
A36_7::test(); cout<<endl;
cout<<"=36_8.py\n";
A36_8::test(); cout<<endl;
cout<<"=36_9.py\n";
A36_9::test(); cout<<endl;
cout<<"=36_10.py\n";
A36_10::test(); cout<<endl;
cout<<"=36_11.py\n";
A36_11::test(); cout<<endl;
cout<<"=36_12.py\n";
A36_12::test(); cout<<endl;
cout<<"call 37.bat\n";
cout<<"=37_1.py\n";
A37_1::test(); cout<<endl;
cout<<"=37_2.py\n";
A37_2::test(); cout<<endl;
cout<<"=37_3.py\n";
A37_3::test(); cout<<endl;
cout<<"=37_4.py\n";
A37_4::test(); cout<<endl;
cout<<"=37_5.py\n";
A37_5::test(); cout<<endl;
cout<<"=37_6.py\n";
A37_6::test(); cout<<endl;
cout<<"=37_7.py\n";
A37_7::test(); cout<<endl;
cout<<"=37_8.py\n";
A37_8::test(); cout<<endl;
cout<<"=37_9.py\n";
A37_9::test(); cout<<endl;
cout<<"=37_10.py\n";
A37_10::test(); cout<<endl;
cout<<"=37_11.py\n";
A37_11::test(); cout<<endl;
cout<<"=37_12.py\n";
A37_12::test(); cout<<endl;
cout<<"call 38.bat\n";
cout<<"=38_1.py\n";
A38_1::test(); cout<<endl;
cout<<"=38_2.py\n";
A38_2::test(); cout<<endl;
cout<<"=38_3.py\n";
A38_3::test(); cout<<endl;
cout<<"=38_4.py\n";
A38_4::test(); cout<<endl;
cout<<"=38_5.py\n";
A38_5::test(); cout<<endl;
cout<<"=38_6.py\n";
A38_6::test(); cout<<endl;
cout<<"=38_7.py\n";
A38_7::test(); cout<<endl;
cout<<"=38_8.py\n";
A38_8::test(); cout<<endl;
cout<<"=38_9.py\n";
A38_9::test(); cout<<endl;
cout<<"=38_10.py\n";
A38_10::test(); cout<<endl;
cout<<"=38_11.py\n";
A38_11::test(); cout<<endl;
cout<<"=38_12.py\n";
A38_12::test(); cout<<endl;
cout<<"call 39.bat\n";
cout<<"=39_1.py\n";
A39_1::test(); cout<<endl;
cout<<"=39_2.py\n";
A39_2::test(); cout<<endl;
cout<<"=39_3.py\n";
A39_3::test(); cout<<endl;
cout<<"=39_4.py\n";
A39_4::test(); cout<<endl;
cout<<"=39_5.py\n";
A39_5::test(); cout<<endl;
cout<<"=39_6.py\n";
A39_6::test(); cout<<endl;
cout<<"=39_7.py\n";
A39_7::test(); cout<<endl;
cout<<"=39_8.py\n";
A39_8::test(); cout<<endl;
cout<<"=39_9.py\n";
A39_9::test(); cout<<endl;
cout<<"=39_10.py\n";
A39_10::test(); cout<<endl;
cout<<"=39_11.py\n";
A39_11::test(); cout<<endl;
cout<<"=39_12.py\n";
A39_12::test(); cout<<endl;
cout<<"call 40.bat\n";
cout<<"=40_1.py\n";
A40_1::test(); cout<<endl;
cout<<"=40_2.py\n";
A40_2::test(); cout<<endl;
cout<<"=40_3.py\n";
A40_3::test(); cout<<endl;
cout<<"=40_4.py\n";
A40_4::test(); cout<<endl;
cout<<"=40_5.py\n";
A40_5::test(); cout<<endl;
cout<<"=40_6.py\n";
A40_6::test(); cout<<endl;
cout<<"=40_7.py\n";
A40_7::test(); cout<<endl;
cout<<"=40_8.py\n";
A40_8::test(); cout<<endl;
cout<<"=40_9.py\n";
A40_9::test(); cout<<endl;
cout<<"=40_10.py\n";
A40_10::test(); cout<<endl;
cout<<"=40_11.py\n";
A40_11::test(); cout<<endl;
cout<<"=40_12.py\n";
A40_12::test(); cout<<endl;
cout<<"call 41.bat\n";
cout<<"=41_1.py\n";
A41_1::test(); cout<<endl;
cout<<"=41_2.py\n";
A41_2::test(); cout<<endl;
cout<<"=41_3.py\n";
A41_3::test(); cout<<endl;
cout<<"=41_4.py\n";
A41_4::test(); cout<<endl;
cout<<"=41_5.py\n";
A41_5::test(); cout<<endl;
cout<<"=41_6.py\n";
A41_6::test(); cout<<endl;
cout<<"=41_7.py\n";
A41_7::test(); cout<<endl;
cout<<"=41_8.py\n";
A41_8::test(); cout<<endl;
cout<<"=41_9.py\n";
A41_9::test(); cout<<endl;
cout<<"=41_10.py\n";
A41_10::test(); cout<<endl;
cout<<"=41_11.py\n";
A41_11::test(); cout<<endl;
cout<<"=41_12.py\n";
A41_12::test(); cout<<endl;
cout<<"call 42.bat\n";
cout<<"=42_1.py\n";
A42_1::test(); cout<<endl;
cout<<"=42_2.py\n";
A42_2::test(); cout<<endl;
cout<<"=42_3.py\n";
A42_3::test(); cout<<endl;
cout<<"=42_4.py\n";
A42_4::test(); cout<<endl;
cout<<"=42_5.py\n";
A42_5::test(); cout<<endl;
cout<<"=42_6.py\n";
A42_6::test(); cout<<endl;
cout<<"=42_7.py\n";
A42_7::test(); cout<<endl;
cout<<"=42_8.py\n";
A42_8::test(); cout<<endl;
cout<<"=42_9.py\n";
A42_9::test(); cout<<endl;
cout<<"=42_10.py\n";
A42_10::test(); cout<<endl;
cout<<"=42_11.py\n";
A42_11::test(); cout<<endl;
cout<<"=42_12.py\n";
A42_12::test(); cout<<endl;
cout<<"call 43.bat\n";
cout<<"=43_1.py\n";
A43_1::test(); cout<<endl;
cout<<"=43_2.py\n";
A43_2::test(); cout<<endl;
cout<<"=43_3.py\n";
A43_3::test(); cout<<endl;
cout<<"=43_4.py\n";
A43_4::test(); cout<<endl;
cout<<"=43_5.py\n";
A43_5::test(); cout<<endl;
cout<<"=43_6.py\n";
A43_6::test(); cout<<endl;
cout<<"=43_7.py\n";
A43_7::test(); cout<<endl;
cout<<"=43_8.py\n";
A43_8::test(); cout<<endl;
cout<<"=43_9.py\n";
A43_9::test(); cout<<endl;
cout<<"=43_10.py\n";
A43_10::test(); cout<<endl;
cout<<"=43_11.py\n";
A43_11::test(); cout<<endl;
cout<<"=43_12.py\n";
A43_12::test(); cout<<endl;
cout<<"call 44.bat\n";
cout<<"=44_1.py\n";
A44_1::test(); cout<<endl;
cout<<"=44_2.py\n";
A44_2::test(); cout<<endl;
cout<<"=44_3.py\n";
A44_3::test(); cout<<endl;
cout<<"=44_4.py\n";
A44_4::test(); cout<<endl;
cout<<"=44_5.py\n";
A44_5::test(); cout<<endl;
cout<<"=44_6.py\n";
A44_6::test(); cout<<endl;
cout<<"=44_7.py\n";
A44_7::test(); cout<<endl;
cout<<"=44_8.py\n";
A44_8::test(); cout<<endl;
cout<<"=44_9.py\n";
A44_9::test(); cout<<endl;
cout<<"=44_10.py\n";
A44_10::test(); cout<<endl;
cout<<"=44_11.py\n";
A44_11::test(); cout<<endl;
cout<<"=44_12.py\n";
A44_12::test(); cout<<endl;
cout<<"call 45.bat\n";
cout<<"=45_1.py\n";
A45_1::test(); cout<<endl;
cout<<"=45_2.py\n";
A45_2::test(); cout<<endl;
cout<<"=45_3.py\n";
A45_3::test(); cout<<endl;
cout<<"=45_4.py\n";
A45_4::test(); cout<<endl;
cout<<"=45_5.py\n";
A45_5::test(); cout<<endl;
cout<<"=45_6.py\n";
A45_6::test(); cout<<endl;
cout<<"=45_7.py\n";
A45_7::test(); cout<<endl;
cout<<"=45_8.py\n";
A45_8::test(); cout<<endl;
cout<<"=45_9.py\n";
A45_9::test(); cout<<endl;
cout<<"=45_10.py\n";
A45_10::test(); cout<<endl;
cout<<"=45_11.py\n";
A45_11::test(); cout<<endl;
cout<<"=45_12.py\n";
A45_12::test(); cout<<endl;
cout<<"call 46.bat\n";
cout<<"=46_1.py\n";
A46_1::test(); cout<<endl;
cout<<"=46_2.py\n";
A46_2::test(); cout<<endl;
cout<<"=46_3.py\n";
A46_3::test(); cout<<endl;
cout<<"=46_4.py\n";
A46_4::test(); cout<<endl;
cout<<"=46_5.py\n";
A46_5::test(); cout<<endl;
cout<<"=46_6.py\n";
A46_6::test(); cout<<endl;
cout<<"=46_7.py\n";
A46_7::test(); cout<<endl;
cout<<"=46_8.py\n";
A46_8::test(); cout<<endl;
cout<<"=46_9.py\n";
A46_9::test(); cout<<endl;
cout<<"=46_10.py\n";
A46_10::test(); cout<<endl;
cout<<"=46_11.py\n";
A46_11::test(); cout<<endl;
cout<<"=46_12.py\n";
A46_12::test(); cout<<endl;
cout<<"call 47.bat\n";
cout<<"=47_1.py\n";
A47_1::test(); cout<<endl;
cout<<"=47_2.py\n";
A47_2::test(); cout<<endl;
cout<<"=47_3.py\n";
A47_3::test(); cout<<endl;
cout<<"=47_4.py\n";
A47_4::test(); cout<<endl;
cout<<"=47_5.py\n";
A47_5::test(); cout<<endl;
cout<<"=47_6.py\n";
A47_6::test(); cout<<endl;
cout<<"=47_7.py\n";
A47_7::test(); cout<<endl;
cout<<"=47_8.py\n";
A47_8::test(); cout<<endl;
cout<<"=47_9.py\n";
A47_9::test(); cout<<endl;
cout<<"=47_10.py\n";
A47_10::test(); cout<<endl;
cout<<"=47_11.py\n";
A47_11::test(); cout<<endl;
cout<<"=47_12.py\n";
A47_12::test(); cout<<endl;
cout<<"call 48.bat\n";
cout<<"=48_1.py\n";
A48_1::test(); cout<<endl;
cout<<"=48_2.py\n";
A48_2::test(); cout<<endl;
cout<<"=48_3.py\n";
A48_3::test(); cout<<endl;
cout<<"=48_4.py\n";
A48_4::test(); cout<<endl;
cout<<"=48_5.py\n";
A48_5::test(); cout<<endl;
cout<<"=48_6.py\n";
A48_6::test(); cout<<endl;
cout<<"=48_7.py\n";
A48_7::test(); cout<<endl;
cout<<"=48_8.py\n";
A48_8::test(); cout<<endl;
cout<<"=48_9.py\n";
A48_9::test(); cout<<endl;
cout<<"=48_10.py\n";
A48_10::test(); cout<<endl;
cout<<"=48_11.py\n";
A48_11::test(); cout<<endl;
cout<<"=48_12.py\n";
A48_12::test(); cout<<endl;
cout<<"call 49.bat\n";
cout<<"=49_1.py\n";
A49_1::test(); cout<<endl;
cout<<"=49_2.py\n";
A49_2::test(); cout<<endl;
cout<<"=49_3.py\n";
A49_3::test(); cout<<endl;
cout<<"=49_4.py\n";
A49_4::test(); cout<<endl;
cout<<"=49_5.py\n";
A49_5::test(); cout<<endl;
cout<<"=49_6.py\n";
A49_6::test(); cout<<endl;
cout<<"=49_7.py\n";
A49_7::test(); cout<<endl;
cout<<"=49_8.py\n";
A49_8::test(); cout<<endl;
cout<<"=49_9.py\n";
A49_9::test(); cout<<endl;
cout<<"=49_10.py\n";
A49_10::test(); cout<<endl;
cout<<"=49_11.py\n";
A49_11::test(); cout<<endl;
cout<<"=49_12.py\n";
A49_12::test(); cout<<endl;
cout<<"call 50.bat\n";
cout<<"=50_1.py\n";
A50_1::test(); cout<<endl;
cout<<"=50_2.py\n";
A50_2::test(); cout<<endl;
cout<<"=50_3.py\n";
A50_3::test(); cout<<endl;
cout<<"=50_4.py\n";
A50_4::test(); cout<<endl;
cout<<"=50_5.py\n";
A50_5::test(); cout<<endl;
cout<<"=50_6.py\n";
A50_6::test(); cout<<endl;
cout<<"=50_7.py\n";
A50_7::test(); cout<<endl;
cout<<"=50_8.py\n";
A50_8::test(); cout<<endl;
cout<<"=50_9.py\n";
A50_9::test(); cout<<endl;
cout<<"=50_10.py\n";
A50_10::test(); cout<<endl;
cout<<"=50_11.py\n";
A50_11::test(); cout<<endl;
cout<<"=50_12.py\n";
A50_12::test(); cout<<endl;
cout<<"call 51.bat\n";
cout<<"=51_1.py\n";
A51_1::test(); cout<<endl;
cout<<"=51_2.py\n";
A51_2::test(); cout<<endl;
cout<<"=51_3.py\n";
A51_3::test(); cout<<endl;
cout<<"=51_4.py\n";
A51_4::test(); cout<<endl;
cout<<"=51_5.py\n";
A51_5::test(); cout<<endl;
cout<<"=51_6.py\n";
A51_6::test(); cout<<endl;
cout<<"=51_7.py\n";
A51_7::test(); cout<<endl;
cout<<"=51_8.py\n";
A51_8::test(); cout<<endl;
cout<<"=51_9.py\n";
A51_9::test(); cout<<endl;
cout<<"=51_10.py\n";
A51_10::test(); cout<<endl;
cout<<"=51_11.py\n";
A51_11::test(); cout<<endl;
cout<<"=51_12.py\n";
A51_12::test(); cout<<endl;
cout<<"call 52.bat\n";
cout<<"=52_1.py\n";
A52_1::test(); cout<<endl;
cout<<"=52_2.py\n";
A52_2::test(); cout<<endl;
cout<<"=52_3.py\n";
A52_3::test(); cout<<endl;
cout<<"=52_4.py\n";
A52_4::test(); cout<<endl;
cout<<"=52_5.py\n";
A52_5::test(); cout<<endl;
cout<<"=52_6.py\n";
A52_6::test(); cout<<endl;
cout<<"=52_7.py\n";
A52_7::test(); cout<<endl;
cout<<"=52_8.py\n";
A52_8::test(); cout<<endl;
cout<<"=52_9.py\n";
A52_9::test(); cout<<endl;
cout<<"=52_10.py\n";
A52_10::test(); cout<<endl;
cout<<"=52_11.py\n";
A52_11::test(); cout<<endl;
cout<<"=52_12.py\n";
A52_12::test(); cout<<endl;
cout<<"call 53.bat\n";
cout<<"=53_1.py\n";
A53_1::test(); cout<<endl;
cout<<"=53_2.py\n";
A53_2::test(); cout<<endl;
cout<<"=53_3.py\n";
A53_3::test(); cout<<endl;
cout<<"=53_4.py\n";
A53_4::test(); cout<<endl;
cout<<"=53_5.py\n";
A53_5::test(); cout<<endl;
cout<<"=53_6.py\n";
A53_6::test(); cout<<endl;
cout<<"=53_7.py\n";
A53_7::test(); cout<<endl;
cout<<"=53_8.py\n";
A53_8::test(); cout<<endl;
cout<<"=53_9.py\n";
A53_9::test(); cout<<endl;
cout<<"=53_10.py\n";
A53_10::test(); cout<<endl;
cout<<"=53_11.py\n";
A53_11::test(); cout<<endl;
cout<<"=53_12.py\n";
A53_12::test(); cout<<endl;
cout<<"call 54.bat\n";
cout<<"=54_1.py\n";
A54_1::test(); cout<<endl;
cout<<"=54_2.py\n";
A54_2::test(); cout<<endl;
cout<<"=54_3.py\n";
A54_3::test(); cout<<endl;
cout<<"=54_4.py\n";
A54_4::test(); cout<<endl;
cout<<"=54_5.py\n";
A54_5::test(); cout<<endl;
cout<<"=54_6.py\n";
A54_6::test(); cout<<endl;
cout<<"=54_7.py\n";
A54_7::test(); cout<<endl;
cout<<"=54_8.py\n";
A54_8::test(); cout<<endl;
cout<<"=54_9.py\n";
A54_9::test(); cout<<endl;
cout<<"=54_10.py\n";
A54_10::test(); cout<<endl;
cout<<"=54_11.py\n";
A54_11::test(); cout<<endl;
cout<<"=54_12.py\n";
A54_12::test(); cout<<endl;
cout<<"call 55.bat\n";
cout<<"=55_1.py\n";
A55_1::test(); cout<<endl;
cout<<"=55_2.py\n";
A55_2::test(); cout<<endl;
cout<<"=55_3.py\n";
A55_3::test(); cout<<endl;
cout<<"=55_4.py\n";
A55_4::test(); cout<<endl;
cout<<"=55_5.py\n";
A55_5::test(); cout<<endl;
cout<<"=55_6.py\n";
A55_6::test(); cout<<endl;
cout<<"=55_7.py\n";
A55_7::test(); cout<<endl;
cout<<"=55_8.py\n";
A55_8::test(); cout<<endl;
cout<<"=55_9.py\n";
A55_9::test(); cout<<endl;
cout<<"=55_10.py\n";
A55_10::test(); cout<<endl;
cout<<"=55_11.py\n";
A55_11::test(); cout<<endl;
cout<<"=55_12.py\n";
A55_12::test(); cout<<endl;
cout<<"call 56.bat\n";
cout<<"=56_1.py\n";
A56_1::test(); cout<<endl;
cout<<"=56_2.py\n";
A56_2::test(); cout<<endl;
cout<<"=56_3.py\n";
A56_3::test(); cout<<endl;
cout<<"=56_4.py\n";
A56_4::test(); cout<<endl;
cout<<"=56_5.py\n";
A56_5::test(); cout<<endl;
cout<<"=56_6.py\n";
A56_6::test(); cout<<endl;
cout<<"=56_7.py\n";
A56_7::test(); cout<<endl;
cout<<"=56_8.py\n";
A56_8::test(); cout<<endl;
cout<<"=56_9.py\n";
A56_9::test(); cout<<endl;
cout<<"=56_10.py\n";
A56_10::test(); cout<<endl;
cout<<"=56_11.py\n";
A56_11::test(); cout<<endl;
cout<<"=56_12.py\n";
A56_12::test(); cout<<endl;
cout<<"call 57.bat\n";
cout<<"=57_1.py\n";
A57_1::test(); cout<<endl;
cout<<"=57_2.py\n";
A57_2::test(); cout<<endl;
cout<<"=57_3.py\n";
A57_3::test(); cout<<endl;
cout<<"=57_4.py\n";
A57_4::test(); cout<<endl;
cout<<"=57_5.py\n";
A57_5::test(); cout<<endl;
cout<<"=57_6.py\n";
A57_6::test(); cout<<endl;
cout<<"=57_7.py\n";
A57_7::test(); cout<<endl;
cout<<"=57_8.py\n";
A57_8::test(); cout<<endl;
cout<<"=57_9.py\n";
A57_9::test(); cout<<endl;
cout<<"=57_10.py\n";
A57_10::test(); cout<<endl;
cout<<"=57_11.py\n";
A57_11::test(); cout<<endl;
cout<<"=57_12.py\n";
A57_12::test(); cout<<endl;
cout<<"call 58.bat\n";
cout<<"=58_1.py\n";
A58_1::test(); cout<<endl;
cout<<"=58_2.py\n";
A58_2::test(); cout<<endl;
cout<<"=58_3.py\n";
A58_3::test(); cout<<endl;
cout<<"=58_4.py\n";
A58_4::test(); cout<<endl;
cout<<"=58_5.py\n";
A58_5::test(); cout<<endl;
cout<<"=58_6.py\n";
A58_6::test(); cout<<endl;
cout<<"=58_7.py\n";
A58_7::test(); cout<<endl;
cout<<"=58_8.py\n";
A58_8::test(); cout<<endl;
cout<<"=58_9.py\n";
A58_9::test(); cout<<endl;
cout<<"=58_10.py\n";
A58_10::test(); cout<<endl;
cout<<"=58_11.py\n";
A58_11::test(); cout<<endl;
cout<<"=58_12.py\n";
A58_12::test(); cout<<endl;
cout<<"call 59.bat\n";
cout<<"=59_1.py\n";
A59_1::test(); cout<<endl;
cout<<"=59_2.py\n";
A59_2::test(); cout<<endl;
cout<<"=59_3.py\n";
A59_3::test(); cout<<endl;
cout<<"=59_4.py\n";
A59_4::test(); cout<<endl;
cout<<"=59_5.py\n";
A59_5::test(); cout<<endl;
cout<<"=59_6.py\n";
A59_6::test(); cout<<endl;
cout<<"=59_7.py\n";
A59_7::test(); cout<<endl;
cout<<"=59_8.py\n";
A59_8::test(); cout<<endl;
cout<<"=59_9.py\n";
A59_9::test(); cout<<endl;
cout<<"=59_10.py\n";
A59_10::test(); cout<<endl;
cout<<"=59_11.py\n";
A59_11::test(); cout<<endl;
cout<<"=59_12.py\n";
A59_12::test(); cout<<endl;
cout<<"call 60.bat\n";
cout<<"=60_1.py\n";
A60_1::test(); cout<<endl;
cout<<"=60_2.py\n";
A60_2::test(); cout<<endl;
cout<<"=60_3.py\n";
A60_3::test(); cout<<endl;
cout<<"=60_4.py\n";
A60_4::test(); cout<<endl;
cout<<"=60_5.py\n";
A60_5::test(); cout<<endl;
cout<<"=60_6.py\n";
A60_6::test(); cout<<endl;
cout<<"=60_7.py\n";
A60_7::test(); cout<<endl;
cout<<"=60_8.py\n";
A60_8::test(); cout<<endl;
cout<<"=60_9.py\n";
A60_9::test(); cout<<endl;
cout<<"=60_10.py\n";
A60_10::test(); cout<<endl;
cout<<"=60_11.py\n";
A60_11::test(); cout<<endl;
cout<<"=60_12.py\n";
A60_12::test(); cout<<endl;
cout<<"call 61.bat\n";
cout<<"=61_1.py\n";
A61_1::test(); cout<<endl;
cout<<"=61_2.py\n";
A61_2::test(); cout<<endl;
cout<<"=61_3.py\n";
A61_3::test(); cout<<endl;
cout<<"=61_4.py\n";
A61_4::test(); cout<<endl;
cout<<"=61_5.py\n";
A61_5::test(); cout<<endl;
cout<<"=61_6.py\n";
A61_6::test(); cout<<endl;
cout<<"=61_7.py\n";
A61_7::test(); cout<<endl;
cout<<"=61_8.py\n";
A61_8::test(); cout<<endl;
cout<<"=61_9.py\n";
A61_9::test(); cout<<endl;
cout<<"=61_10.py\n";
A61_10::test(); cout<<endl;
cout<<"=61_11.py\n";
A61_11::test(); cout<<endl;
cout<<"=61_12.py\n";
A61_12::test(); cout<<endl;
cout<<"call 62.bat\n";
cout<<"=62_1.py\n";
A62_1::test(); cout<<endl;
cout<<"=62_2.py\n";
A62_2::test(); cout<<endl;
cout<<"=62_3.py\n";
A62_3::test(); cout<<endl;
cout<<"=62_4.py\n";
A62_4::test(); cout<<endl;
cout<<"=62_5.py\n";
A62_5::test(); cout<<endl;
cout<<"=62_6.py\n";
A62_6::test(); cout<<endl;
cout<<"=62_7.py\n";
A62_7::test(); cout<<endl;
cout<<"=62_8.py\n";
A62_8::test(); cout<<endl;
cout<<"=62_9.py\n";
A62_9::test(); cout<<endl;
cout<<"=62_10.py\n";
A62_10::test(); cout<<endl;
cout<<"=62_11.py\n";
A62_11::test(); cout<<endl;
cout<<"=62_12.py\n";
A62_12::test(); cout<<endl;
cout<<"call 63.bat\n";
cout<<"=63_1.py\n";
A63_1::test(); cout<<endl;
cout<<"=63_2.py\n";
A63_2::test(); cout<<endl;
cout<<"=63_3.py\n";
A63_3::test(); cout<<endl;
cout<<"=63_4.py\n";
A63_4::test(); cout<<endl;
cout<<"=63_5.py\n";
A63_5::test(); cout<<endl;
cout<<"=63_6.py\n";
A63_6::test(); cout<<endl;
cout<<"=63_7.py\n";
A63_7::test(); cout<<endl;
cout<<"=63_8.py\n";
A63_8::test(); cout<<endl;
cout<<"=63_9.py\n";
A63_9::test(); cout<<endl;
cout<<"=63_10.py\n";
A63_10::test(); cout<<endl;
cout<<"=63_11.py\n";
A63_11::test(); cout<<endl;
cout<<"=63_12.py\n";
A63_12::test(); cout<<endl;
cout<<"call 64.bat\n";
cout<<"=64_1.py\n";
A64_1::test(); cout<<endl;
cout<<"=64_2.py\n";
A64_2::test(); cout<<endl;
cout<<"=64_3.py\n";
A64_3::test(); cout<<endl;
cout<<"=64_4.py\n";
A64_4::test(); cout<<endl;
cout<<"=64_5.py\n";
A64_5::test(); cout<<endl;
cout<<"=64_6.py\n";
A64_6::test(); cout<<endl;
cout<<"=64_7.py\n";
A64_7::test(); cout<<endl;
cout<<"=64_8.py\n";
A64_8::test(); cout<<endl;
cout<<"=64_9.py\n";
A64_9::test(); cout<<endl;
cout<<"=64_10.py\n";
A64_10::test(); cout<<endl;
cout<<"=64_11.py\n";
A64_11::test(); cout<<endl;
cout<<"=64_12.py\n";
A64_12::test(); cout<<endl;
cout<<"call 65.bat\n";
cout<<"=65_1.py\n";
A65_1::test(); cout<<endl;
cout<<"=65_2.py\n";
A65_2::test(); cout<<endl;
cout<<"=65_3.py\n";
A65_3::test(); cout<<endl;
cout<<"=65_4.py\n";
A65_4::test(); cout<<endl;
cout<<"=65_5.py\n";
A65_5::test(); cout<<endl;
cout<<"=65_6.py\n";
A65_6::test(); cout<<endl;
cout<<"=65_7.py\n";
A65_7::test(); cout<<endl;
cout<<"=65_8.py\n";
A65_8::test(); cout<<endl;
cout<<"=65_9.py\n";
A65_9::test(); cout<<endl;
cout<<"=65_10.py\n";
A65_10::test(); cout<<endl;
cout<<"=65_11.py\n";
A65_11::test(); cout<<endl;
cout<<"=65_12.py\n";
A65_12::test(); cout<<endl;
cout<<"call 66.bat\n";
cout<<"=66_1.py\n";
A66_1::test(); cout<<endl;
cout<<"=66_2.py\n";
A66_2::test(); cout<<endl;
cout<<"=66_3.py\n";
A66_3::test(); cout<<endl;
cout<<"=66_4.py\n";
A66_4::test(); cout<<endl;
cout<<"=66_5.py\n";
A66_5::test(); cout<<endl;
cout<<"=66_6.py\n";
A66_6::test(); cout<<endl;
cout<<"=66_7.py\n";
A66_7::test(); cout<<endl;
cout<<"=66_8.py\n";
A66_8::test(); cout<<endl;
cout<<"=66_9.py\n";
A66_9::test(); cout<<endl;
cout<<"=66_10.py\n";
A66_10::test(); cout<<endl;
cout<<"=66_11.py\n";
A66_11::test(); cout<<endl;
cout<<"=66_12.py\n";
A66_12::test(); cout<<endl;
cout<<"call 67.bat\n";
cout<<"=67_1.py\n";
A67_1::test(); cout<<endl;
cout<<"=67_2.py\n";
A67_2::test(); cout<<endl;
cout<<"=67_3.py\n";
A67_3::test(); cout<<endl;
cout<<"=67_4.py\n";
A67_4::test(); cout<<endl;
cout<<"=67_5.py\n";
A67_5::test(); cout<<endl;
cout<<"=67_6.py\n";
A67_6::test(); cout<<endl;
cout<<"=67_7.py\n";
A67_7::test(); cout<<endl;
cout<<"=67_8.py\n";
A67_8::test(); cout<<endl;
cout<<"=67_9.py\n";
A67_9::test(); cout<<endl;
cout<<"=67_10.py\n";
A67_10::test(); cout<<endl;
cout<<"=67_11.py\n";
A67_11::test(); cout<<endl;
cout<<"=67_12.py\n";
A67_12::test(); cout<<endl;
cout<<"call 68.bat\n";
cout<<"=68_1.py\n";
A68_1::test(); cout<<endl;
cout<<"=68_2.py\n";
A68_2::test(); cout<<endl;
cout<<"=68_3.py\n";
A68_3::test(); cout<<endl;
cout<<"=68_4.py\n";
A68_4::test(); cout<<endl;
cout<<"=68_5.py\n";
A68_5::test(); cout<<endl;
cout<<"=68_6.py\n";
A68_6::test(); cout<<endl;
cout<<"=68_7.py\n";
A68_7::test(); cout<<endl;
cout<<"=68_8.py\n";
A68_8::test(); cout<<endl;
cout<<"=68_9.py\n";
A68_9::test(); cout<<endl;
cout<<"=68_10.py\n";
A68_10::test(); cout<<endl;
cout<<"=68_11.py\n";
A68_11::test(); cout<<endl;
cout<<"=68_12.py\n";
A68_12::test(); cout<<endl;
cout<<"call 69.bat\n";
cout<<"=69_1.py\n";
A69_1::test(); cout<<endl;
cout<<"=69_2.py\n";
A69_2::test(); cout<<endl;
cout<<"=69_3.py\n";
A69_3::test(); cout<<endl;
cout<<"=69_4.py\n";
A69_4::test(); cout<<endl;
cout<<"=69_5.py\n";
A69_5::test(); cout<<endl;
cout<<"=69_6.py\n";
A69_6::test(); cout<<endl;
cout<<"=69_7.py\n";
A69_7::test(); cout<<endl;
cout<<"=69_8.py\n";
A69_8::test(); cout<<endl;
cout<<"=69_9.py\n";
A69_9::test(); cout<<endl;
cout<<"=69_10.py\n";
A69_10::test(); cout<<endl;
cout<<"=69_11.py\n";
A69_11::test(); cout<<endl;
cout<<"=69_12.py\n";
A69_12::test(); cout<<endl;
cout<<"call 70.bat\n";
cout<<"=70_1.py\n";
A70_1::test(); cout<<endl;
cout<<"=70_2.py\n";
A70_2::test(); cout<<endl;
cout<<"=70_3.py\n";
A70_3::test(); cout<<endl;
cout<<"=70_4.py\n";
A70_4::test(); cout<<endl;
cout<<"=70_5.py\n";
A70_5::test(); cout<<endl;
cout<<"=70_6.py\n";
A70_6::test(); cout<<endl;
cout<<"=70_7.py\n";
A70_7::test(); cout<<endl;
cout<<"=70_8.py\n";
A70_8::test(); cout<<endl;
cout<<"=70_9.py\n";
A70_9::test(); cout<<endl;
cout<<"=70_10.py\n";
A70_10::test(); cout<<endl;
cout<<"=70_11.py\n";
A70_11::test(); cout<<endl;
cout<<"=70_12.py\n";
A70_12::test(); cout<<endl;
cout<<"call 71.bat\n";
cout<<"=71_1.py\n";
A71_1::test(); cout<<endl;
cout<<"=71_2.py\n";
A71_2::test(); cout<<endl;
cout<<"=71_3.py\n";
A71_3::test(); cout<<endl;
cout<<"=71_4.py\n";
A71_4::test(); cout<<endl;
cout<<"=71_5.py\n";
A71_5::test(); cout<<endl;
cout<<"=71_6.py\n";
A71_6::test(); cout<<endl;
cout<<"=71_7.py\n";
A71_7::test(); cout<<endl;
cout<<"=71_8.py\n";
A71_8::test(); cout<<endl;
cout<<"=71_9.py\n";
A71_9::test(); cout<<endl;
cout<<"=71_10.py\n";
A71_10::test(); cout<<endl;
cout<<"=71_11.py\n";
A71_11::test(); cout<<endl;
cout<<"=71_12.py\n";
A71_12::test(); cout<<endl;
cout<<"call 72.bat\n";
cout<<"=72_1.py\n";
A72_1::test(); cout<<endl;
cout<<"=72_2.py\n";
A72_2::test(); cout<<endl;
cout<<"=72_3.py\n";
A72_3::test(); cout<<endl;
cout<<"=72_4.py\n";
A72_4::test(); cout<<endl;
cout<<"=72_5.py\n";
A72_5::test(); cout<<endl;
cout<<"=72_6.py\n";
A72_6::test(); cout<<endl;
cout<<"=72_7.py\n";
A72_7::test(); cout<<endl;
cout<<"=72_8.py\n";
A72_8::test(); cout<<endl;
cout<<"=72_9.py\n";
A72_9::test(); cout<<endl;
cout<<"=72_10.py\n";
A72_10::test(); cout<<endl;
cout<<"=72_11.py\n";
A72_11::test(); cout<<endl;
cout<<"=72_12.py\n";
A72_12::test(); cout<<endl;
cout<<"call 73.bat\n";
cout<<"=73_1.py\n";
A73_1::test(); cout<<endl;
cout<<"=73_2.py\n";
A73_2::test(); cout<<endl;
cout<<"=73_3.py\n";
A73_3::test(); cout<<endl;
cout<<"=73_4.py\n";
A73_4::test(); cout<<endl;
cout<<"=73_5.py\n";
A73_5::test(); cout<<endl;
cout<<"=73_6.py\n";
A73_6::test(); cout<<endl;
cout<<"=73_7.py\n";
A73_7::test(); cout<<endl;
cout<<"=73_8.py\n";
A73_8::test(); cout<<endl;
cout<<"=73_9.py\n";
A73_9::test(); cout<<endl;
cout<<"=73_10.py\n";
A73_10::test(); cout<<endl;
cout<<"=73_11.py\n";
A73_11::test(); cout<<endl;
cout<<"=73_12.py\n";
A73_12::test(); cout<<endl;
cout<<"call 74.bat\n";
cout<<"=74_1.py\n";
A74_1::test(); cout<<endl;
cout<<"=74_2.py\n";
A74_2::test(); cout<<endl;
cout<<"=74_3.py\n";
A74_3::test(); cout<<endl;
cout<<"=74_4.py\n";
A74_4::test(); cout<<endl;
cout<<"=74_5.py\n";
A74_5::test(); cout<<endl;
cout<<"=74_6.py\n";
A74_6::test(); cout<<endl;
cout<<"=74_7.py\n";
A74_7::test(); cout<<endl;
cout<<"=74_8.py\n";
A74_8::test(); cout<<endl;
cout<<"=74_9.py\n";
A74_9::test(); cout<<endl;
cout<<"=74_10.py\n";
A74_10::test(); cout<<endl;
cout<<"=74_11.py\n";
A74_11::test(); cout<<endl;
cout<<"=74_12.py\n";
A74_12::test(); cout<<endl;
cout<<"call 75.bat\n";
cout<<"=75_1.py\n";
A75_1::test(); cout<<endl;
cout<<"=75_2.py\n";
A75_2::test(); cout<<endl;
cout<<"=75_3.py\n";
A75_3::test(); cout<<endl;
cout<<"=75_4.py\n";
A75_4::test(); cout<<endl;
cout<<"=75_5.py\n";
A75_5::test(); cout<<endl;
cout<<"=75_6.py\n";
A75_6::test(); cout<<endl;
cout<<"=75_7.py\n";
A75_7::test(); cout<<endl;
cout<<"=75_8.py\n";
A75_8::test(); cout<<endl;
cout<<"=75_9.py\n";
A75_9::test(); cout<<endl;
cout<<"=75_10.py\n";
A75_10::test(); cout<<endl;
cout<<"=75_11.py\n";
A75_11::test(); cout<<endl;
cout<<"=75_12.py\n";
A75_12::test(); cout<<endl;
cout<<"call 76.bat\n";
cout<<"=76_1.py\n";
A76_1::test(); cout<<endl;
cout<<"=76_2.py\n";
A76_2::test(); cout<<endl;
cout<<"=76_3.py\n";
A76_3::test(); cout<<endl;
cout<<"=76_4.py\n";
A76_4::test(); cout<<endl;
cout<<"=76_5.py\n";
A76_5::test(); cout<<endl;
cout<<"=76_6.py\n";
A76_6::test(); cout<<endl;
cout<<"=76_7.py\n";
A76_7::test(); cout<<endl;
cout<<"=76_8.py\n";
A76_8::test(); cout<<endl;
cout<<"=76_9.py\n";
A76_9::test(); cout<<endl;
cout<<"=76_10.py\n";
A76_10::test(); cout<<endl;
cout<<"=76_11.py\n";
A76_11::test(); cout<<endl;
cout<<"=76_12.py\n";
A76_12::test(); cout<<endl;
cout<<"call 77.bat\n";
cout<<"=77_1.py\n";
A77_1::test(); cout<<endl;
cout<<"=77_2.py\n";
A77_2::test(); cout<<endl;
cout<<"=77_3.py\n";
A77_3::test(); cout<<endl;
cout<<"=77_4.py\n";
A77_4::test(); cout<<endl;
cout<<"=77_5.py\n";
A77_5::test(); cout<<endl;
cout<<"=77_6.py\n";
A77_6::test(); cout<<endl;
cout<<"=77_7.py\n";
A77_7::test(); cout<<endl;
cout<<"=77_8.py\n";
A77_8::test(); cout<<endl;
cout<<"=77_9.py\n";
A77_9::test(); cout<<endl;
cout<<"=77_10.py\n";
A77_10::test(); cout<<endl;
cout<<"=77_11.py\n";
A77_11::test(); cout<<endl;
cout<<"=77_12.py\n";
A77_12::test(); cout<<endl;
cout<<"call 78.bat\n";
cout<<"=78_1.py\n";
A78_1::test(); cout<<endl;
cout<<"=78_2.py\n";
A78_2::test(); cout<<endl;
cout<<"=78_3.py\n";
A78_3::test(); cout<<endl;
cout<<"=78_4.py\n";
A78_4::test(); cout<<endl;
cout<<"=78_5.py\n";
A78_5::test(); cout<<endl;
cout<<"=78_6.py\n";
A78_6::test(); cout<<endl;
cout<<"=78_7.py\n";
A78_7::test(); cout<<endl;
cout<<"=78_8.py\n";
A78_8::test(); cout<<endl;
cout<<"=78_9.py\n";
A78_9::test(); cout<<endl;
cout<<"=78_10.py\n";
A78_10::test(); cout<<endl;
cout<<"=78_11.py\n";
A78_11::test(); cout<<endl;
cout<<"=78_12.py\n";
A78_12::test(); cout<<endl;
cout<<"call 79.bat\n";
cout<<"=79_1.py\n";
A79_1::test(); cout<<endl;
cout<<"=79_2.py\n";
A79_2::test(); cout<<endl;
cout<<"=79_3.py\n";
A79_3::test(); cout<<endl;
cout<<"=79_4.py\n";
A79_4::test(); cout<<endl;
cout<<"=79_5.py\n";
A79_5::test(); cout<<endl;
cout<<"=79_6.py\n";
A79_6::test(); cout<<endl;
cout<<"=79_7.py\n";
A79_7::test(); cout<<endl;
cout<<"=79_8.py\n";
A79_8::test(); cout<<endl;
cout<<"=79_9.py\n";
A79_9::test(); cout<<endl;
cout<<"=79_10.py\n";
A79_10::test(); cout<<endl;
cout<<"=79_11.py\n";
A79_11::test(); cout<<endl;
cout<<"=79_12.py\n";
A79_12::test(); cout<<endl;
cout<<"call 80.bat\n";
cout<<"=80_1.py\n";
A80_1::test(); cout<<endl;
cout<<"=80_2.py\n";
A80_2::test(); cout<<endl;
cout<<"=80_3.py\n";
A80_3::test(); cout<<endl;
cout<<"=80_4.py\n";
A80_4::test(); cout<<endl;
cout<<"=80_5.py\n";
A80_5::test(); cout<<endl;
cout<<"=80_6.py\n";
A80_6::test(); cout<<endl;
cout<<"=80_7.py\n";
A80_7::test(); cout<<endl;
cout<<"=80_8.py\n";
A80_8::test(); cout<<endl;
cout<<"=80_9.py\n";
A80_9::test(); cout<<endl;
cout<<"=80_10.py\n";
A80_10::test(); cout<<endl;
cout<<"=80_11.py\n";
A80_11::test(); cout<<endl;
cout<<"=80_12.py\n";
A80_12::test(); cout<<endl;
cout<<"call 81.bat\n";
cout<<"=81_1.py\n";
A81_1::test(); cout<<endl;
cout<<"=81_2.py\n";
A81_2::test(); cout<<endl;
cout<<"=81_3.py\n";
A81_3::test(); cout<<endl;
cout<<"=81_4.py\n";
A81_4::test(); cout<<endl;
cout<<"=81_5.py\n";
A81_5::test(); cout<<endl;
cout<<"=81_6.py\n";
A81_6::test(); cout<<endl;
cout<<"=81_7.py\n";
A81_7::test(); cout<<endl;
cout<<"=81_8.py\n";
A81_8::test(); cout<<endl;
cout<<"=81_9.py\n";
A81_9::test(); cout<<endl;
cout<<"=81_10.py\n";
A81_10::test(); cout<<endl;
cout<<"=81_11.py\n";
A81_11::test(); cout<<endl;
cout<<"=81_12.py\n";
A81_12::test(); cout<<endl;
cout<<"call 82.bat\n";
cout<<"=82_1.py\n";
A82_1::test(); cout<<endl;
cout<<"=82_2.py\n";
A82_2::test(); cout<<endl;
cout<<"=82_3.py\n";
A82_3::test(); cout<<endl;
cout<<"=82_4.py\n";
A82_4::test(); cout<<endl;
cout<<"=82_5.py\n";
A82_5::test(); cout<<endl;
cout<<"=82_6.py\n";
A82_6::test(); cout<<endl;
cout<<"=82_7.py\n";
A82_7::test(); cout<<endl;
cout<<"=82_8.py\n";
A82_8::test(); cout<<endl;
cout<<"=82_9.py\n";
A82_9::test(); cout<<endl;
cout<<"=82_10.py\n";
A82_10::test(); cout<<endl;
cout<<"=82_11.py\n";
A82_11::test(); cout<<endl;
cout<<"=82_12.py\n";
A82_12::test(); cout<<endl;
cout<<"call 83.bat\n";
cout<<"=83_1.py\n";
A83_1::test(); cout<<endl;
cout<<"=83_2.py\n";
A83_2::test(); cout<<endl;
cout<<"=83_3.py\n";
A83_3::test(); cout<<endl;
cout<<"=83_4.py\n";
A83_4::test(); cout<<endl;
cout<<"=83_5.py\n";
A83_5::test(); cout<<endl;
cout<<"=83_6.py\n";
A83_6::test(); cout<<endl;
cout<<"=83_7.py\n";
A83_7::test(); cout<<endl;
cout<<"=83_8.py\n";
A83_8::test(); cout<<endl;
cout<<"=83_9.py\n";
A83_9::test(); cout<<endl;
cout<<"=83_10.py\n";
A83_10::test(); cout<<endl;
cout<<"=83_11.py\n";
A83_11::test(); cout<<endl;
cout<<"=83_12.py\n";
A83_12::test(); cout<<endl;
cout<<"call 84.bat\n";
cout<<"=84_1.py\n";
A84_1::test(); cout<<endl;
cout<<"=84_2.py\n";
A84_2::test(); cout<<endl;
cout<<"=84_3.py\n";
A84_3::test(); cout<<endl;
cout<<"=84_4.py\n";
A84_4::test(); cout<<endl;
cout<<"=84_5.py\n";
A84_5::test(); cout<<endl;
cout<<"=84_6.py\n";
A84_6::test(); cout<<endl;
cout<<"=84_7.py\n";
A84_7::test(); cout<<endl;
cout<<"=84_8.py\n";
A84_8::test(); cout<<endl;
cout<<"=84_9.py\n";
A84_9::test(); cout<<endl;
cout<<"=84_10.py\n";
A84_10::test(); cout<<endl;
cout<<"=84_11.py\n";
A84_11::test(); cout<<endl;
cout<<"=84_12.py\n";
A84_12::test(); cout<<endl;
cout<<"call 85.bat\n";
cout<<"=85_1.py\n";
A85_1::test(); cout<<endl;
cout<<"=85_2.py\n";
A85_2::test(); cout<<endl;
cout<<"=85_3.py\n";
A85_3::test(); cout<<endl;
cout<<"=85_4.py\n";
A85_4::test(); cout<<endl;
cout<<"=85_5.py\n";
A85_5::test(); cout<<endl;
cout<<"=85_6.py\n";
A85_6::test(); cout<<endl;
cout<<"=85_7.py\n";
A85_7::test(); cout<<endl;
cout<<"=85_8.py\n";
A85_8::test(); cout<<endl;
cout<<"=85_9.py\n";
A85_9::test(); cout<<endl;
cout<<"=85_10.py\n";
A85_10::test(); cout<<endl;
cout<<"=85_11.py\n";
A85_11::test(); cout<<endl;
cout<<"=85_12.py\n";
A85_12::test(); cout<<endl;
cout<<"call 86.bat\n";
cout<<"=86_1.py\n";
A86_1::test(); cout<<endl;
cout<<"=86_2.py\n";
A86_2::test(); cout<<endl;
cout<<"=86_3.py\n";
A86_3::test(); cout<<endl;
cout<<"=86_4.py\n";
A86_4::test(); cout<<endl;
cout<<"=86_5.py\n";
A86_5::test(); cout<<endl;
cout<<"=86_6.py\n";
A86_6::test(); cout<<endl;
cout<<"=86_7.py\n";
A86_7::test(); cout<<endl;
cout<<"=86_8.py\n";
A86_8::test(); cout<<endl;
cout<<"=86_9.py\n";
A86_9::test(); cout<<endl;
cout<<"=86_10.py\n";
A86_10::test(); cout<<endl;
cout<<"=86_11.py\n";
A86_11::test(); cout<<endl;
cout<<"=86_12.py\n";
A86_12::test(); cout<<endl;
cout<<"call 87.bat\n";
cout<<"=87_1.py\n";
A87_1::test(); cout<<endl;
cout<<"=87_2.py\n";
A87_2::test(); cout<<endl;
cout<<"=87_3.py\n";
A87_3::test(); cout<<endl;
cout<<"=87_4.py\n";
A87_4::test(); cout<<endl;
cout<<"=87_5.py\n";
A87_5::test(); cout<<endl;
cout<<"=87_6.py\n";
A87_6::test(); cout<<endl;
cout<<"=87_7.py\n";
A87_7::test(); cout<<endl;
cout<<"=87_8.py\n";
A87_8::test(); cout<<endl;
cout<<"=87_9.py\n";
A87_9::test(); cout<<endl;
cout<<"=87_10.py\n";
A87_10::test(); cout<<endl;
cout<<"=87_11.py\n";
A87_11::test(); cout<<endl;
cout<<"=87_12.py\n";
A87_12::test(); cout<<endl;
cout<<"call 88.bat\n";
cout<<"=88_1.py\n";
A88_1::test(); cout<<endl;
cout<<"=88_2.py\n";
A88_2::test(); cout<<endl;
cout<<"=88_3.py\n";
A88_3::test(); cout<<endl;
cout<<"=88_4.py\n";
A88_4::test(); cout<<endl;
cout<<"=88_5.py\n";
A88_5::test(); cout<<endl;
cout<<"=88_6.py\n";
A88_6::test(); cout<<endl;
cout<<"=88_7.py\n";
A88_7::test(); cout<<endl;
cout<<"=88_8.py\n";
A88_8::test(); cout<<endl;
cout<<"=88_9.py\n";
A88_9::test(); cout<<endl;
cout<<"=88_10.py\n";
A88_10::test(); cout<<endl;
cout<<"=88_11.py\n";
A88_11::test(); cout<<endl;
cout<<"=88_12.py\n";
A88_12::test(); cout<<endl;
cout<<"call 89.bat\n";
cout<<"=89_1.py\n";
A89_1::test(); cout<<endl;
cout<<"=89_2.py\n";
A89_2::test(); cout<<endl;
cout<<"=89_3.py\n";
A89_3::test(); cout<<endl;
cout<<"=89_4.py\n";
A89_4::test(); cout<<endl;
cout<<"=89_5.py\n";
A89_5::test(); cout<<endl;
cout<<"=89_6.py\n";
A89_6::test(); cout<<endl;
cout<<"=89_7.py\n";
A89_7::test(); cout<<endl;
cout<<"=89_8.py\n";
A89_8::test(); cout<<endl;
cout<<"=89_9.py\n";
A89_9::test(); cout<<endl;
cout<<"=89_10.py\n";
A89_10::test(); cout<<endl;
cout<<"=89_11.py\n";
A89_11::test(); cout<<endl;
cout<<"=89_12.py\n";
A89_12::test(); cout<<endl;
cout<<"call 90.bat\n";
cout<<"=90_1.py\n";
A90_1::test(); cout<<endl;
cout<<"=90_2.py\n";
A90_2::test(); cout<<endl;
cout<<"=90_3.py\n";
A90_3::test(); cout<<endl;
cout<<"=90_4.py\n";
A90_4::test(); cout<<endl;
cout<<"=90_5.py\n";
A90_5::test(); cout<<endl;
cout<<"=90_6.py\n";
A90_6::test(); cout<<endl;
cout<<"=90_7.py\n";
A90_7::test(); cout<<endl;
cout<<"=90_8.py\n";
A90_8::test(); cout<<endl;
cout<<"=90_9.py\n";
A90_9::test(); cout<<endl;
cout<<"=90_10.py\n";
A90_10::test(); cout<<endl;
cout<<"=90_11.py\n";
A90_11::test(); cout<<endl;
cout<<"=90_12.py\n";
A90_12::test(); cout<<endl;
cout<<"call 91.bat\n";
cout<<"=91_1.py\n";
A91_1::test(); cout<<endl;
cout<<"=91_2.py\n";
A91_2::test(); cout<<endl;
cout<<"=91_3.py\n";
A91_3::test(); cout<<endl;
cout<<"=91_4.py\n";
A91_4::test(); cout<<endl;
cout<<"=91_5.py\n";
A91_5::test(); cout<<endl;
cout<<"=91_6.py\n";
A91_6::test(); cout<<endl;
cout<<"=91_7.py\n";
A91_7::test(); cout<<endl;
cout<<"=91_8.py\n";
A91_8::test(); cout<<endl;
cout<<"=91_9.py\n";
A91_9::test(); cout<<endl;
cout<<"=91_10.py\n";
A91_10::test(); cout<<endl;
cout<<"=91_11.py\n";
A91_11::test(); cout<<endl;
cout<<"=91_12.py\n";
A91_12::test(); cout<<endl;
cout<<"call 92.bat\n";
cout<<"=92_1.py\n";
A92_1::test(); cout<<endl;
cout<<"=92_2.py\n";
A92_2::test(); cout<<endl;
cout<<"=92_3.py\n";
A92_3::test(); cout<<endl;
cout<<"=92_4.py\n";
A92_4::test(); cout<<endl;
cout<<"=92_5.py\n";
A92_5::test(); cout<<endl;
cout<<"=92_6.py\n";
A92_6::test(); cout<<endl;
cout<<"=92_7.py\n";
A92_7::test(); cout<<endl;
cout<<"=92_8.py\n";
A92_8::test(); cout<<endl;
cout<<"=92_9.py\n";
A92_9::test(); cout<<endl;
cout<<"=92_10.py\n";
A92_10::test(); cout<<endl;
cout<<"=92_11.py\n";
A92_11::test(); cout<<endl;
cout<<"=92_12.py\n";
A92_12::test(); cout<<endl;
cout<<"call 93.bat\n";
cout<<"=93_1.py\n";
A93_1::test(); cout<<endl;
cout<<"=93_2.py\n";
A93_2::test(); cout<<endl;
cout<<"=93_3.py\n";
A93_3::test(); cout<<endl;
cout<<"=93_4.py\n";
A93_4::test(); cout<<endl;
cout<<"=93_5.py\n";
A93_5::test(); cout<<endl;
cout<<"=93_6.py\n";
A93_6::test(); cout<<endl;
cout<<"=93_7.py\n";
A93_7::test(); cout<<endl;
cout<<"=93_8.py\n";
A93_8::test(); cout<<endl;
cout<<"=93_9.py\n";
A93_9::test(); cout<<endl;
cout<<"=93_10.py\n";
A93_10::test(); cout<<endl;
cout<<"=93_11.py\n";
A93_11::test(); cout<<endl;
cout<<"=93_12.py\n";
A93_12::test(); cout<<endl;
cout<<"call 94.bat\n";
cout<<"=94_1.py\n";
A94_1::test(); cout<<endl;
cout<<"=94_2.py\n";
A94_2::test(); cout<<endl;
cout<<"=94_3.py\n";
A94_3::test(); cout<<endl;
cout<<"=94_4.py\n";
A94_4::test(); cout<<endl;
cout<<"=94_5.py\n";
A94_5::test(); cout<<endl;
cout<<"=94_6.py\n";
A94_6::test(); cout<<endl;
cout<<"=94_7.py\n";
A94_7::test(); cout<<endl;
cout<<"=94_8.py\n";
A94_8::test(); cout<<endl;
cout<<"=94_9.py\n";
A94_9::test(); cout<<endl;
cout<<"=94_10.py\n";
A94_10::test(); cout<<endl;
cout<<"=94_11.py\n";
A94_11::test(); cout<<endl;
cout<<"=94_12.py\n";
A94_12::test(); cout<<endl;
cout<<"call 95.bat\n";
cout<<"=95_1.py\n";
A95_1::test(); cout<<endl;
cout<<"=95_2.py\n";
A95_2::test(); cout<<endl;
cout<<"=95_3.py\n";
A95_3::test(); cout<<endl;
cout<<"=95_4.py\n";
A95_4::test(); cout<<endl;
cout<<"=95_5.py\n";
A95_5::test(); cout<<endl;
cout<<"=95_6.py\n";
A95_6::test(); cout<<endl;
cout<<"=95_7.py\n";
A95_7::test(); cout<<endl;
cout<<"=95_8.py\n";
A95_8::test(); cout<<endl;
cout<<"=95_9.py\n";
A95_9::test(); cout<<endl;
cout<<"=95_10.py\n";
A95_10::test(); cout<<endl;
cout<<"=95_11.py\n";
A95_11::test(); cout<<endl;
cout<<"=95_12.py\n";
A95_12::test(); cout<<endl;
cout<<"call 96.bat\n";
cout<<"=96_1.py\n";
A96_1::test(); cout<<endl;
cout<<"=96_2.py\n";
A96_2::test(); cout<<endl;
cout<<"=96_3.py\n";
A96_3::test(); cout<<endl;
cout<<"=96_4.py\n";
A96_4::test(); cout<<endl;
cout<<"=96_5.py\n";
A96_5::test(); cout<<endl;
cout<<"=96_6.py\n";
A96_6::test(); cout<<endl;
cout<<"=96_7.py\n";
A96_7::test(); cout<<endl;
cout<<"=96_8.py\n";
A96_8::test(); cout<<endl;
cout<<"=96_9.py\n";
A96_9::test(); cout<<endl;
cout<<"=96_10.py\n";
A96_10::test(); cout<<endl;
cout<<"=96_11.py\n";
A96_11::test(); cout<<endl;
cout<<"=96_12.py\n";
A96_12::test(); cout<<endl;
cout<<"call 97.bat\n";
cout<<"=97_1.py\n";
A97_1::test(); cout<<endl;
cout<<"=97_2.py\n";
A97_2::test(); cout<<endl;
cout<<"=97_3.py\n";
A97_3::test(); cout<<endl;
cout<<"=97_4.py\n";
A97_4::test(); cout<<endl;
cout<<"=97_5.py\n";
A97_5::test(); cout<<endl;
cout<<"=97_6.py\n";
A97_6::test(); cout<<endl;
cout<<"=97_7.py\n";
A97_7::test(); cout<<endl;
cout<<"=97_8.py\n";
A97_8::test(); cout<<endl;
cout<<"=97_9.py\n";
A97_9::test(); cout<<endl;
cout<<"=97_10.py\n";
A97_10::test(); cout<<endl;
cout<<"=97_11.py\n";
A97_11::test(); cout<<endl;
cout<<"=97_12.py\n";
A97_12::test(); cout<<endl;
cout<<"call 98.bat\n";
cout<<"=98_1.py\n";
A98_1::test(); cout<<endl;
cout<<"=98_2.py\n";
A98_2::test(); cout<<endl;
cout<<"=98_3.py\n";
A98_3::test(); cout<<endl;
cout<<"=98_4.py\n";
A98_4::test(); cout<<endl;
cout<<"=98_5.py\n";
A98_5::test(); cout<<endl;
cout<<"=98_6.py\n";
A98_6::test(); cout<<endl;
cout<<"=98_7.py\n";
A98_7::test(); cout<<endl;
cout<<"=98_8.py\n";
A98_8::test(); cout<<endl;
cout<<"=98_9.py\n";
A98_9::test(); cout<<endl;
cout<<"=98_10.py\n";
A98_10::test(); cout<<endl;
cout<<"=98_11.py\n";
A98_11::test(); cout<<endl;
cout<<"=98_12.py\n";
A98_12::test(); cout<<endl;
cout<<"call 99.bat\n";
cout<<"=99_1.py\n";
A99_1::test(); cout<<endl;
cout<<"=99_2.py\n";
A99_2::test(); cout<<endl;
cout<<"=99_3.py\n";
A99_3::test(); cout<<endl;
cout<<"=99_4.py\n";
A99_4::test(); cout<<endl;
cout<<"=99_5.py\n";
A99_5::test(); cout<<endl;
cout<<"=99_6.py\n";
A99_6::test(); cout<<endl;
cout<<"=99_7.py\n";
A99_7::test(); cout<<endl;
cout<<"=99_8.py\n";
A99_8::test(); cout<<endl;
cout<<"=99_9.py\n";
A99_9::test(); cout<<endl;
cout<<"=99_10.py\n";
A99_10::test(); cout<<endl;
cout<<"=99_11.py\n";
A99_11::test(); cout<<endl;
cout<<"=99_12.py\n";
A99_12::test(); cout<<endl;
cout<<"call 100.bat\n";
cout<<"=100_1.py\n";
A100_1::test(); cout<<endl;
cout<<"=100_2.py\n";
A100_2::test(); cout<<endl;
cout<<"=100_3.py\n";
A100_3::test(); cout<<endl;
cout<<"=100_4.py\n";
A100_4::test(); cout<<endl;
cout<<"=100_5.py\n";
A100_5::test(); cout<<endl;
cout<<"=100_6.py\n";
A100_6::test(); cout<<endl;
cout<<"=100_7.py\n";
A100_7::test(); cout<<endl;
cout<<"=100_8.py\n";
A100_8::test(); cout<<endl;
cout<<"=100_9.py\n";
A100_9::test(); cout<<endl;
cout<<"=100_10.py\n";
A100_10::test(); cout<<endl;
cout<<"=100_11.py\n";
A100_11::test(); cout<<endl;
cout<<"=100_12.py\n";
A100_12::test(); cout<<endl;
cout<<"call 101.bat\n";
cout<<"=101_1.py\n";
A101_1::test(); cout<<endl;
cout<<"=101_2.py\n";
A101_2::test(); cout<<endl;
cout<<"=101_3.py\n";
A101_3::test(); cout<<endl;
cout<<"=101_4.py\n";
A101_4::test(); cout<<endl;
cout<<"=101_5.py\n";
A101_5::test(); cout<<endl;
cout<<"=101_6.py\n";
A101_6::test(); cout<<endl;
cout<<"=101_7.py\n";
A101_7::test(); cout<<endl;
cout<<"=101_8.py\n";
A101_8::test(); cout<<endl;
cout<<"=101_9.py\n";
A101_9::test(); cout<<endl;
cout<<"=101_10.py\n";
A101_10::test(); cout<<endl;
cout<<"=101_11.py\n";
A101_11::test(); cout<<endl;
cout<<"=101_12.py\n";
A101_12::test(); cout<<endl;
cout<<"call 102.bat\n";
cout<<"=102_1.py\n";
A102_1::test(); cout<<endl;
cout<<"=102_2.py\n";
A102_2::test(); cout<<endl;
cout<<"=102_3.py\n";
A102_3::test(); cout<<endl;
cout<<"=102_4.py\n";
A102_4::test(); cout<<endl;
cout<<"=102_5.py\n";
A102_5::test(); cout<<endl;
cout<<"=102_6.py\n";
A102_6::test(); cout<<endl;
cout<<"=102_7.py\n";
A102_7::test(); cout<<endl;
cout<<"=102_8.py\n";
A102_8::test(); cout<<endl;
cout<<"=102_9.py\n";
A102_9::test(); cout<<endl;
cout<<"=102_10.py\n";
A102_10::test(); cout<<endl;
cout<<"=102_11.py\n";
A102_11::test(); cout<<endl;
cout<<"=102_12.py\n";
A102_12::test(); cout<<endl;
cout<<"call 103.bat\n";
cout<<"=103_1.py\n";
A103_1::test(); cout<<endl;
cout<<"=103_2.py\n";
A103_2::test(); cout<<endl;
cout<<"=103_3.py\n";
A103_3::test(); cout<<endl;
cout<<"=103_4.py\n";
A103_4::test(); cout<<endl;
cout<<"=103_5.py\n";
A103_5::test(); cout<<endl;
cout<<"=103_6.py\n";
A103_6::test(); cout<<endl;
cout<<"=103_7.py\n";
A103_7::test(); cout<<endl;
cout<<"=103_8.py\n";
A103_8::test(); cout<<endl;
cout<<"=103_9.py\n";
A103_9::test(); cout<<endl;
cout<<"=103_10.py\n";
A103_10::test(); cout<<endl;
cout<<"=103_11.py\n";
A103_11::test(); cout<<endl;
cout<<"=103_12.py\n";
A103_12::test(); cout<<endl;
cout<<"call 104.bat\n";
cout<<"=104_1.py\n";
A104_1::test(); cout<<endl;
cout<<"=104_2.py\n";
A104_2::test(); cout<<endl;
cout<<"=104_3.py\n";
A104_3::test(); cout<<endl;
cout<<"=104_4.py\n";
A104_4::test(); cout<<endl;
cout<<"=104_5.py\n";
A104_5::test(); cout<<endl;
cout<<"=104_6.py\n";
A104_6::test(); cout<<endl;
cout<<"=104_7.py\n";
A104_7::test(); cout<<endl;
cout<<"=104_8.py\n";
A104_8::test(); cout<<endl;
cout<<"=104_9.py\n";
A104_9::test(); cout<<endl;
cout<<"=104_10.py\n";
A104_10::test(); cout<<endl;
cout<<"=104_11.py\n";
A104_11::test(); cout<<endl;
cout<<"=104_12.py\n";
A104_12::test(); cout<<endl;
cout<<"call 105.bat\n";
cout<<"=105_1.py\n";
A105_1::test(); cout<<endl;
cout<<"=105_2.py\n";
A105_2::test(); cout<<endl;
cout<<"=105_3.py\n";
A105_3::test(); cout<<endl;
cout<<"=105_4.py\n";
A105_4::test(); cout<<endl;
cout<<"=105_5.py\n";
A105_5::test(); cout<<endl;
cout<<"=105_6.py\n";
A105_6::test(); cout<<endl;
cout<<"=105_7.py\n";
A105_7::test(); cout<<endl;
cout<<"=105_8.py\n";
A105_8::test(); cout<<endl;
cout<<"=105_9.py\n";
A105_9::test(); cout<<endl;
cout<<"=105_10.py\n";
A105_10::test(); cout<<endl;
cout<<"=105_11.py\n";
A105_11::test(); cout<<endl;
cout<<"=105_12.py\n";
A105_12::test(); cout<<endl;
cout<<"call 106.bat\n";
cout<<"=106_1.py\n";
A106_1::test(); cout<<endl;
cout<<"=106_2.py\n";
A106_2::test(); cout<<endl;
cout<<"=106_3.py\n";
A106_3::test(); cout<<endl;
cout<<"=106_4.py\n";
A106_4::test(); cout<<endl;
cout<<"=106_5.py\n";
A106_5::test(); cout<<endl;
cout<<"=106_6.py\n";
A106_6::test(); cout<<endl;
cout<<"=106_7.py\n";
A106_7::test(); cout<<endl;
cout<<"=106_8.py\n";
A106_8::test(); cout<<endl;
cout<<"=106_9.py\n";
A106_9::test(); cout<<endl;
cout<<"=106_10.py\n";
A106_10::test(); cout<<endl;
cout<<"=106_11.py\n";
A106_11::test(); cout<<endl;
cout<<"=106_12.py\n";
A106_12::test(); cout<<endl;
cout<<"call 107.bat\n";
cout<<"=107_1.py\n";
A107_1::test(); cout<<endl;
cout<<"=107_2.py\n";
A107_2::test(); cout<<endl;
cout<<"=107_3.py\n";
A107_3::test(); cout<<endl;
cout<<"=107_4.py\n";
A107_4::test(); cout<<endl;
cout<<"=107_5.py\n";
A107_5::test(); cout<<endl;
cout<<"=107_6.py\n";
A107_6::test(); cout<<endl;
cout<<"=107_7.py\n";
A107_7::test(); cout<<endl;
cout<<"=107_8.py\n";
A107_8::test(); cout<<endl;
cout<<"=107_9.py\n";
A107_9::test(); cout<<endl;
cout<<"=107_10.py\n";
A107_10::test(); cout<<endl;
cout<<"=107_11.py\n";
A107_11::test(); cout<<endl;
cout<<"=107_12.py\n";
A107_12::test(); cout<<endl;
cout<<"call 108.bat\n";
cout<<"=108_1.py\n";
A108_1::test(); cout<<endl;
cout<<"=108_2.py\n";
A108_2::test(); cout<<endl;
cout<<"=108_3.py\n";
A108_3::test(); cout<<endl;
cout<<"=108_4.py\n";
A108_4::test(); cout<<endl;
cout<<"=108_5.py\n";
A108_5::test(); cout<<endl;
cout<<"=108_6.py\n";
A108_6::test(); cout<<endl;
cout<<"=108_7.py\n";
A108_7::test(); cout<<endl;
cout<<"=108_8.py\n";
A108_8::test(); cout<<endl;
cout<<"=108_9.py\n";
A108_9::test(); cout<<endl;
cout<<"=108_10.py\n";
A108_10::test(); cout<<endl;
cout<<"=108_11.py\n";
A108_11::test(); cout<<endl;
cout<<"=108_12.py\n";
A108_12::test(); cout<<endl;
cout<<"call 109.bat\n";
cout<<"=109_1.py\n";
A109_1::test(); cout<<endl;
cout<<"=109_2.py\n";
A109_2::test(); cout<<endl;
cout<<"=109_3.py\n";
A109_3::test(); cout<<endl;
cout<<"=109_4.py\n";
A109_4::test(); cout<<endl;
cout<<"=109_5.py\n";
A109_5::test(); cout<<endl;
cout<<"=109_6.py\n";
A109_6::test(); cout<<endl;
cout<<"=109_7.py\n";
A109_7::test(); cout<<endl;
cout<<"=109_8.py\n";
A109_8::test(); cout<<endl;
cout<<"=109_9.py\n";
A109_9::test(); cout<<endl;
cout<<"=109_10.py\n";
A109_10::test(); cout<<endl;
cout<<"=109_11.py\n";
A109_11::test(); cout<<endl;
cout<<"=109_12.py\n";
A109_12::test(); cout<<endl;
cout<<"call 110.bat\n";
cout<<"=110_1.py\n";
A110_1::test(); cout<<endl;
cout<<"=110_2.py\n";
A110_2::test(); cout<<endl;
cout<<"=110_3.py\n";
A110_3::test(); cout<<endl;
cout<<"=110_4.py\n";
A110_4::test(); cout<<endl;
cout<<"=110_5.py\n";
A110_5::test(); cout<<endl;
cout<<"=110_6.py\n";
A110_6::test(); cout<<endl;
cout<<"=110_7.py\n";
A110_7::test(); cout<<endl;
cout<<"=110_8.py\n";
A110_8::test(); cout<<endl;
cout<<"=110_9.py\n";
A110_9::test(); cout<<endl;
cout<<"=110_10.py\n";
A110_10::test(); cout<<endl;
cout<<"=110_11.py\n";
A110_11::test(); cout<<endl;
cout<<"=110_12.py\n";
A110_12::test(); cout<<endl;
cout<<"call 111.bat\n";
cout<<"=111_1.py\n";
A111_1::test(); cout<<endl;
cout<<"=111_2.py\n";
A111_2::test(); cout<<endl;
cout<<"=111_3.py\n";
A111_3::test(); cout<<endl;
cout<<"=111_4.py\n";
A111_4::test(); cout<<endl;
cout<<"=111_5.py\n";
A111_5::test(); cout<<endl;
cout<<"=111_6.py\n";
A111_6::test(); cout<<endl;
cout<<"=111_7.py\n";
A111_7::test(); cout<<endl;
cout<<"=111_8.py\n";
A111_8::test(); cout<<endl;
cout<<"=111_9.py\n";
A111_9::test(); cout<<endl;
cout<<"=111_10.py\n";
A111_10::test(); cout<<endl;
cout<<"=111_11.py\n";
A111_11::test(); cout<<endl;
cout<<"=111_12.py\n";
A111_12::test(); cout<<endl;
cout<<"call 112.bat\n";
cout<<"=112_1.py\n";
A112_1::test(); cout<<endl;
cout<<"=112_2.py\n";
A112_2::test(); cout<<endl;
cout<<"=112_3.py\n";
A112_3::test(); cout<<endl;
cout<<"=112_4.py\n";
A112_4::test(); cout<<endl;
cout<<"=112_5.py\n";
A112_5::test(); cout<<endl;
cout<<"=112_6.py\n";
A112_6::test(); cout<<endl;
cout<<"=112_7.py\n";
A112_7::test(); cout<<endl;
cout<<"=112_8.py\n";
A112_8::test(); cout<<endl;
cout<<"=112_9.py\n";
A112_9::test(); cout<<endl;
cout<<"=112_10.py\n";
A112_10::test(); cout<<endl;
cout<<"=112_11.py\n";
A112_11::test(); cout<<endl;
cout<<"=112_12.py\n";
A112_12::test(); cout<<endl;
cout<<"call 113.bat\n";
cout<<"=113_1.py\n";
A113_1::test(); cout<<endl;
cout<<"=113_2.py\n";
A113_2::test(); cout<<endl;
cout<<"=113_3.py\n";
A113_3::test(); cout<<endl;
cout<<"=113_4.py\n";
A113_4::test(); cout<<endl;
cout<<"=113_5.py\n";
A113_5::test(); cout<<endl;
cout<<"=113_6.py\n";
A113_6::test(); cout<<endl;
cout<<"=113_7.py\n";
A113_7::test(); cout<<endl;
cout<<"=113_8.py\n";
A113_8::test(); cout<<endl;
cout<<"=113_9.py\n";
A113_9::test(); cout<<endl;
cout<<"=113_10.py\n";
A113_10::test(); cout<<endl;
cout<<"=113_11.py\n";
A113_11::test(); cout<<endl;
cout<<"=113_12.py\n";
A113_12::test(); cout<<endl;
cout<<"call 114.bat\n";
cout<<"=114_1.py\n";
A114_1::test(); cout<<endl;
cout<<"=114_2.py\n";
A114_2::test(); cout<<endl;
cout<<"=114_3.py\n";
A114_3::test(); cout<<endl;
cout<<"=114_4.py\n";
A114_4::test(); cout<<endl;
cout<<"=114_5.py\n";
A114_5::test(); cout<<endl;
cout<<"=114_6.py\n";
A114_6::test(); cout<<endl;
cout<<"=114_7.py\n";
A114_7::test(); cout<<endl;
cout<<"=114_8.py\n";
A114_8::test(); cout<<endl;
cout<<"=114_9.py\n";
A114_9::test(); cout<<endl;
cout<<"=114_10.py\n";
A114_10::test(); cout<<endl;
cout<<"=114_11.py\n";
A114_11::test(); cout<<endl;
cout<<"=114_12.py\n";
A114_12::test(); cout<<endl;
cout<<"call 115.bat\n";
cout<<"=115_1.py\n";
A115_1::test(); cout<<endl;
cout<<"=115_2.py\n";
A115_2::test(); cout<<endl;
cout<<"=115_3.py\n";
A115_3::test(); cout<<endl;
cout<<"=115_4.py\n";
A115_4::test(); cout<<endl;
cout<<"=115_5.py\n";
A115_5::test(); cout<<endl;
cout<<"=115_6.py\n";
A115_6::test(); cout<<endl;
cout<<"=115_7.py\n";
A115_7::test(); cout<<endl;
cout<<"=115_8.py\n";
A115_8::test(); cout<<endl;
cout<<"=115_9.py\n";
A115_9::test(); cout<<endl;
cout<<"=115_10.py\n";
A115_10::test(); cout<<endl;
cout<<"=115_11.py\n";
A115_11::test(); cout<<endl;
cout<<"=115_12.py\n";
A115_12::test(); cout<<endl;
cout<<"call 116.bat\n";
cout<<"=116_1.py\n";
A116_1::test(); cout<<endl;
cout<<"=116_2.py\n";
A116_2::test(); cout<<endl;
cout<<"=116_3.py\n";
A116_3::test(); cout<<endl;
cout<<"=116_4.py\n";
A116_4::test(); cout<<endl;
cout<<"=116_5.py\n";
A116_5::test(); cout<<endl;
cout<<"=116_6.py\n";
A116_6::test(); cout<<endl;
cout<<"=116_7.py\n";
A116_7::test(); cout<<endl;
cout<<"=116_8.py\n";
A116_8::test(); cout<<endl;
cout<<"=116_9.py\n";
A116_9::test(); cout<<endl;
cout<<"=116_10.py\n";
A116_10::test(); cout<<endl;
cout<<"=116_11.py\n";
A116_11::test(); cout<<endl;
cout<<"=116_12.py\n";
A116_12::test(); cout<<endl;
cout<<"call 117.bat\n";
cout<<"=117_1.py\n";
A117_1::test(); cout<<endl;
cout<<"=117_2.py\n";
A117_2::test(); cout<<endl;
cout<<"=117_3.py\n";
A117_3::test(); cout<<endl;
cout<<"=117_4.py\n";
A117_4::test(); cout<<endl;
cout<<"=117_5.py\n";
A117_5::test(); cout<<endl;
cout<<"=117_6.py\n";
A117_6::test(); cout<<endl;
cout<<"=117_7.py\n";
A117_7::test(); cout<<endl;
cout<<"=117_8.py\n";
A117_8::test(); cout<<endl;
cout<<"=117_9.py\n";
A117_9::test(); cout<<endl;
cout<<"=117_10.py\n";
A117_10::test(); cout<<endl;
cout<<"=117_11.py\n";
A117_11::test(); cout<<endl;
cout<<"=117_12.py\n";
A117_12::test(); cout<<endl;
cout<<"call 118.bat\n";
cout<<"=118_1.py\n";
A118_1::test(); cout<<endl;
cout<<"=118_2.py\n";
A118_2::test(); cout<<endl;
cout<<"=118_3.py\n";
A118_3::test(); cout<<endl;
cout<<"=118_4.py\n";
A118_4::test(); cout<<endl;
cout<<"=118_5.py\n";
A118_5::test(); cout<<endl;
cout<<"=118_6.py\n";
A118_6::test(); cout<<endl;
cout<<"=118_7.py\n";
A118_7::test(); cout<<endl;
cout<<"=118_8.py\n";
A118_8::test(); cout<<endl;
cout<<"=118_9.py\n";
A118_9::test(); cout<<endl;
cout<<"=118_10.py\n";
A118_10::test(); cout<<endl;
cout<<"=118_11.py\n";
A118_11::test(); cout<<endl;
cout<<"=118_12.py\n";
A118_12::test(); cout<<endl;
cout<<"call 119.bat\n";
cout<<"=119_1.py\n";
A119_1::test(); cout<<endl;
cout<<"=119_2.py\n";
A119_2::test(); cout<<endl;
cout<<"=119_3.py\n";
A119_3::test(); cout<<endl;
cout<<"=119_4.py\n";
A119_4::test(); cout<<endl;
cout<<"=119_5.py\n";
A119_5::test(); cout<<endl;
cout<<"=119_6.py\n";
A119_6::test(); cout<<endl;
cout<<"=119_7.py\n";
A119_7::test(); cout<<endl;
cout<<"=119_8.py\n";
A119_8::test(); cout<<endl;
cout<<"=119_9.py\n";
A119_9::test(); cout<<endl;
cout<<"=119_10.py\n";
A119_10::test(); cout<<endl;
cout<<"=119_11.py\n";
A119_11::test(); cout<<endl;
cout<<"=119_12.py\n";
A119_12::test(); cout<<endl;
cout<<"call 120.bat\n";
cout<<"=120_1.py\n";
A120_1::test(); cout<<endl;
cout<<"=120_2.py\n";
A120_2::test(); cout<<endl;
cout<<"=120_3.py\n";
A120_3::test(); cout<<endl;
cout<<"=120_4.py\n";
A120_4::test(); cout<<endl;
cout<<"=120_5.py\n";
A120_5::test(); cout<<endl;
cout<<"=120_6.py\n";
A120_6::test(); cout<<endl;
cout<<"=120_7.py\n";
A120_7::test(); cout<<endl;
cout<<"=120_8.py\n";
A120_8::test(); cout<<endl;
cout<<"=120_9.py\n";
A120_9::test(); cout<<endl;
cout<<"=120_10.py\n";
A120_10::test(); cout<<endl;
cout<<"=120_11.py\n";
A120_11::test(); cout<<endl;
cout<<"=120_12.py\n";
A120_12::test(); cout<<endl;
cout<<"call 121.bat\n";
cout<<"=121_1.py\n";
A121_1::test(); cout<<endl;
cout<<"=121_2.py\n";
A121_2::test(); cout<<endl;
cout<<"=121_3.py\n";
A121_3::test(); cout<<endl;
cout<<"=121_4.py\n";
A121_4::test(); cout<<endl;
cout<<"=121_5.py\n";
A121_5::test(); cout<<endl;
cout<<"=121_6.py\n";
A121_6::test(); cout<<endl;
cout<<"=121_7.py\n";
A121_7::test(); cout<<endl;
cout<<"=121_8.py\n";
A121_8::test(); cout<<endl;
cout<<"=121_9.py\n";
A121_9::test(); cout<<endl;
cout<<"=121_10.py\n";
A121_10::test(); cout<<endl;
cout<<"=121_11.py\n";
A121_11::test(); cout<<endl;
cout<<"=121_12.py\n";
A121_12::test(); cout<<endl;
cout<<"call 122.bat\n";
cout<<"=122_1.py\n";
A122_1::test(); cout<<endl;
cout<<"=122_2.py\n";
A122_2::test(); cout<<endl;
cout<<"=122_3.py\n";
A122_3::test(); cout<<endl;
cout<<"=122_4.py\n";
A122_4::test(); cout<<endl;
cout<<"=122_5.py\n";
A122_5::test(); cout<<endl;
cout<<"=122_6.py\n";
A122_6::test(); cout<<endl;
cout<<"=122_7.py\n";
A122_7::test(); cout<<endl;
cout<<"=122_8.py\n";
A122_8::test(); cout<<endl;
cout<<"=122_9.py\n";
A122_9::test(); cout<<endl;
cout<<"=122_10.py\n";
A122_10::test(); cout<<endl;
cout<<"=122_11.py\n";
A122_11::test(); cout<<endl;
cout<<"=122_12.py\n";
A122_12::test(); cout<<endl;
cout<<"call 123.bat\n";
cout<<"=123_1.py\n";
A123_1::test(); cout<<endl;
cout<<"=123_2.py\n";
A123_2::test(); cout<<endl;
cout<<"=123_3.py\n";
A123_3::test(); cout<<endl;
cout<<"=123_4.py\n";
A123_4::test(); cout<<endl;
cout<<"=123_5.py\n";
A123_5::test(); cout<<endl;
cout<<"=123_6.py\n";
A123_6::test(); cout<<endl;
cout<<"=123_7.py\n";
A123_7::test(); cout<<endl;
cout<<"=123_8.py\n";
A123_8::test(); cout<<endl;
cout<<"=123_9.py\n";
A123_9::test(); cout<<endl;
cout<<"=123_10.py\n";
A123_10::test(); cout<<endl;
cout<<"=123_11.py\n";
A123_11::test(); cout<<endl;
cout<<"=123_12.py\n";
A123_12::test(); cout<<endl;
cout<<"call 124.bat\n";
cout<<"=124_1.py\n";
A124_1::test(); cout<<endl;
cout<<"=124_2.py\n";
A124_2::test(); cout<<endl;
cout<<"=124_3.py\n";
A124_3::test(); cout<<endl;
cout<<"=124_4.py\n";
A124_4::test(); cout<<endl;
cout<<"=124_5.py\n";
A124_5::test(); cout<<endl;
cout<<"=124_6.py\n";
A124_6::test(); cout<<endl;
cout<<"=124_7.py\n";
A124_7::test(); cout<<endl;
cout<<"=124_8.py\n";
A124_8::test(); cout<<endl;
cout<<"=124_9.py\n";
A124_9::test(); cout<<endl;
cout<<"=124_10.py\n";
A124_10::test(); cout<<endl;
cout<<"=124_11.py\n";
A124_11::test(); cout<<endl;
cout<<"=124_12.py\n";
A124_12::test(); cout<<endl;
cout<<"call 125.bat\n";
cout<<"=125_1.py\n";
A125_1::test(); cout<<endl;
cout<<"=125_2.py\n";
A125_2::test(); cout<<endl;
cout<<"=125_3.py\n";
A125_3::test(); cout<<endl;
cout<<"=125_4.py\n";
A125_4::test(); cout<<endl;
cout<<"=125_5.py\n";
A125_5::test(); cout<<endl;
cout<<"=125_6.py\n";
A125_6::test(); cout<<endl;
cout<<"=125_7.py\n";
A125_7::test(); cout<<endl;
cout<<"=125_8.py\n";
A125_8::test(); cout<<endl;
cout<<"=125_9.py\n";
A125_9::test(); cout<<endl;
cout<<"=125_10.py\n";
A125_10::test(); cout<<endl;
cout<<"=125_11.py\n";
A125_11::test(); cout<<endl;
cout<<"=125_12.py\n";
A125_12::test(); cout<<endl;
cout<<"call 126.bat\n";
cout<<"=126_1.py\n";
A126_1::test(); cout<<endl;
cout<<"=126_2.py\n";
A126_2::test(); cout<<endl;
cout<<"=126_3.py\n";
A126_3::test(); cout<<endl;
cout<<"=126_4.py\n";
A126_4::test(); cout<<endl;
cout<<"=126_5.py\n";
A126_5::test(); cout<<endl;
cout<<"=126_6.py\n";
A126_6::test(); cout<<endl;
cout<<"=126_7.py\n";
A126_7::test(); cout<<endl;
cout<<"=126_8.py\n";
A126_8::test(); cout<<endl;
cout<<"=126_9.py\n";
A126_9::test(); cout<<endl;
cout<<"=126_10.py\n";
A126_10::test(); cout<<endl;
cout<<"=126_11.py\n";
A126_11::test(); cout<<endl;
cout<<"=126_12.py\n";
A126_12::test(); cout<<endl;
cout<<"call 127.bat\n";
cout<<"=127_1.py\n";
A127_1::test(); cout<<endl;
cout<<"=127_2.py\n";
A127_2::test(); cout<<endl;
cout<<"=127_3.py\n";
A127_3::test(); cout<<endl;
cout<<"=127_4.py\n";
A127_4::test(); cout<<endl;
cout<<"=127_5.py\n";
A127_5::test(); cout<<endl;
cout<<"=127_6.py\n";
A127_6::test(); cout<<endl;
cout<<"=127_7.py\n";
A127_7::test(); cout<<endl;
cout<<"=127_8.py\n";
A127_8::test(); cout<<endl;
cout<<"=127_9.py\n";
A127_9::test(); cout<<endl;
cout<<"=127_10.py\n";
A127_10::test(); cout<<endl;
cout<<"=127_11.py\n";
A127_11::test(); cout<<endl;
cout<<"=127_12.py\n";
A127_12::test(); cout<<endl;
cout<<"call 128.bat\n";
cout<<"=128_1.py\n";
A128_1::test(); cout<<endl;
cout<<"=128_2.py\n";
A128_2::test(); cout<<endl;
cout<<"=128_3.py\n";
A128_3::test(); cout<<endl;
cout<<"=128_4.py\n";
A128_4::test(); cout<<endl;
cout<<"=128_5.py\n";
A128_5::test(); cout<<endl;
cout<<"=128_6.py\n";
A128_6::test(); cout<<endl;
cout<<"=128_7.py\n";
A128_7::test(); cout<<endl;
cout<<"=128_8.py\n";
A128_8::test(); cout<<endl;
cout<<"=128_9.py\n";
A128_9::test(); cout<<endl;
cout<<"=128_10.py\n";
A128_10::test(); cout<<endl;
cout<<"=128_11.py\n";
A128_11::test(); cout<<endl;
cout<<"=128_12.py\n";
A128_12::test(); cout<<endl;
cout<<"call 129.bat\n";
cout<<"=129_1.py\n";
A129_1::test(); cout<<endl;
cout<<"=129_2.py\n";
A129_2::test(); cout<<endl;
cout<<"=129_3.py\n";
A129_3::test(); cout<<endl;
cout<<"=129_4.py\n";
A129_4::test(); cout<<endl;
cout<<"=129_5.py\n";
A129_5::test(); cout<<endl;
cout<<"=129_6.py\n";
A129_6::test(); cout<<endl;
cout<<"=129_7.py\n";
A129_7::test(); cout<<endl;
cout<<"=129_8.py\n";
A129_8::test(); cout<<endl;
cout<<"=129_9.py\n";
A129_9::test(); cout<<endl;
cout<<"=129_10.py\n";
A129_10::test(); cout<<endl;
cout<<"=129_11.py\n";
A129_11::test(); cout<<endl;
cout<<"=129_12.py\n";
A129_12::test(); cout<<endl;
cout<<"call 130.bat\n";
cout<<"=130_1.py\n";
A130_1::test(); cout<<endl;
cout<<"=130_2.py\n";
A130_2::test(); cout<<endl;
cout<<"=130_3.py\n";
A130_3::test(); cout<<endl;
cout<<"=130_4.py\n";
A130_4::test(); cout<<endl;
cout<<"=130_5.py\n";
A130_5::test(); cout<<endl;
cout<<"=130_6.py\n";
A130_6::test(); cout<<endl;
cout<<"=130_7.py\n";
A130_7::test(); cout<<endl;
cout<<"=130_8.py\n";
A130_8::test(); cout<<endl;
cout<<"=130_9.py\n";
A130_9::test(); cout<<endl;
cout<<"=130_10.py\n";
A130_10::test(); cout<<endl;
cout<<"=130_11.py\n";
A130_11::test(); cout<<endl;
cout<<"=130_12.py\n";
A130_12::test(); cout<<endl;

return 0;
}

