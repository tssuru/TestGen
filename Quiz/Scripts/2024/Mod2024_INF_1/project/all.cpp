        #include <iostream>
        using namespace std;    
        
namespace A100_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A100_0{
void test(){cout << (10 * 3 % 3 / 4);}
}
namespace A100_1{
void test(){int a = 9;
cout << a + 6 * 8 / 9 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A100_2{
void test(){cout << ( 7 != 4.0 || ! 9 > 4 or true <= 2.0);}
}
namespace A100_4{
void test(){cout << (8 < 3 > true == 9.0);}
}
namespace A100_5{
void test(){if (14 <= 13)
    cout << "q";
else
    cout << "y";}
}
namespace A100_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) or f(-7));
    return 0;
}
}
namespace A100_6{


int h(int a, int b){
    int c = 39;
    if (b < 5)
        return 5;
    if (a > -4)
         c = 6;
    else 
        c = 8;
    return c;
}

int test(){
    cout << h(1, 3);
    return 0;
}
}
namespace A100_7{



int f(int &x, int &y){
    x = 4;
    y+= 9;
    return y;
}

int test(){
    int a = 1, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 2;
        cout << ((b<=7) || ((a+=2) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A100_9{



int a = 2, b = 3, c = 9;

int g(int &b){
    int c;
    a = 2;
    b -= 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 1;
    int c = 8;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A100_10{



int a = 2, b = 3, c = 5;

int f(){
    int a = 2;
    b = 7;
    int c = 1;
    return a + b + c;
}

int test(){
    a = 9;
    b = 6;
    int c = 0;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A101_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A101_0{
void test(){cout << (3 / 4 * 12 * 6);}
}
namespace A101_1{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A101_2{
void test(){cout << (! 6.0 < 8 or  false == 8.0 and 6 >= 3);}
}
namespace A101_4{
void test(){cout << (7.0 <= 7 != false >= 6.0);}
}
namespace A101_5{
void test(){if (19 == 10)
    cout << "v";
else
    cout << "s";}
}
namespace A101_3{


bool f(int n){
    cout<<"f";
    return n>=2;
}

int test(){
    cout<<(f(6) || f(3));
    return 0;
}
}
namespace A101_6{


int f(int a, int b){
    int c = 91;
    if (a <= 3)
        return 7;
    else if (b >= 0)
         return 2;
    else 
        c = 1;
    return c;
}

int test(){
    cout << f(8, 0);
    return 0;
}
}
namespace A101_7{



int f(int &x, int &y){
    x = 8;
    y-= 5;
    return x;
}

int test(){
    int a = 8, b = 5;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 4;
        cout << ((a<3) && ((b-=1) > 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A101_9{



int a = 4, b = 6, c = 7;

int f(int a){
    a = 3;
    b = 1;
    c = 5;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 2;
    c = 7;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A101_10{



int a = 4, b = 8, c = 7;

int g(){
    int a = 4;
    b = 9;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 0;
    int c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A102_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A102_0{
void test(){cout << (8 % 5 / 15 % 3);}
}
namespace A102_1{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d << ":" << 'd';}
}
namespace A102_2{
void test(){cout << ( 2 == 3.0 and ! 5 >= 7.0 || true < 2);}
}
namespace A102_4{
void test(){cout << (4.0 < 4 != 5 >= 2);}
}
namespace A102_5{
void test(){if (9 < 15)
    cout << "t";
else
    cout << "n";}
}
namespace A102_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-5) && f(9));
    return 0;
}
}
namespace A102_6{


int g(int a, int b){
    int c = 36;
    if (a)
        c = 9;
    if (b == -1)
         return 4;
    else 
        return 3;
    return c;
}

int test(){
    cout << g(3, -6);
    return 0;
}
}
namespace A102_7{



int f(int &x, int &y){
    x = 7;
    y+= 3;
    return y;
}

int test(){
    int a = 1, b = 2;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 5;
        cout << ((a>4) || ((b-=1) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A102_9{



int a = 5, b = 1, c = 4;

int h(int &b){
    int c;
    a += 2;
    b *= 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 6;
    int c = 0;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A102_10{



int a = 2, b = 5, c = 1;

int h(){
    a = 2;
    int b = 4;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 2;
    c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A103_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A103_0{
void test(){cout << (9 % 8 * 10 * 15);}
}
namespace A103_1{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A103_2{
void test(){cout << (! 7 != 3 &&  5.0 > false && 6 <= 9.0);}
}
namespace A103_4{
void test(){cout << (9 > 3.0 == 6 <= 7);}
}
namespace A103_5{
void test(){if (18 != 6)
    cout << "y";
else
    cout << "p";}
}
namespace A103_3{


bool f(int n){
    cout<<"f";
    return n<=4;
}

int test(){
    cout<<(f(-2) and f(2));
    return 0;
}
}
namespace A103_6{


int f(int a, int b){
    int c = 45;
    if (a)
        c = 0;
    else if (a != 2)
         c = 3;
    else 
        return 0;
    return c;
}

int test(){
    cout << f(-2, 6);
    return 0;
}
}
namespace A103_7{



int f(int &x, int &y){
    x = 8;
    y-= 9;
    return x;
}

int test(){
    int a = 4, b = 7;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 6;
        cout << ((a>=5) && ((b+=2) >= 7)) << ':';
        cout << a << ":" << b << ':';
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



int a = 9, b = 3, c = 2;

int g(int a){
    a = 4;
    b *= 3;
    c = 1;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 8;
    c = 7;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A103_10{



int a = 8, b = 1, c = 3;

int f(){
    int a = 8;
    b = 7;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 3;
    c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A104_8{
namespace B1{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A104_0{
void test(){cout << (12 * 12 / 9 % 12);}
}
namespace A104_1{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A104_2{
void test(){cout << ( 4 != 9.0 and ! false > 9 and 8 == 7.0);}
}
namespace A104_4{
void test(){cout << (2.0 < false > 8.0 >= 8);}
}
namespace A104_5{
void test(){if (8 >= 8)
    cout << "o";
else
    cout << "z";}
}
namespace A104_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(4) or f(1));
    return 0;
}
}
namespace A104_6{


int g(int d){
    int y = 69;
    if (d != -1) 
        return 7;
    if (d <= -4)
         y = 8;
    else
         y = 5;
    return y;
}

int test(){
    cout << g(7);
    return 0;
}
}
namespace A104_7{



int f(int &x, int &y){
    x = 5;
    y-= 4;
    return y;
}

int test(){
    int a = 6, b = 8;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 9;
        cout << ((b>=6) && ((a-=1) >= 4)) << ':';
        cout << a << ":" << b << ':';
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



int a = 5, b = 4, c = 6;

int h(int b){
    a = 4;
    b += 5;
    c = 2;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 9;
    int c = 1;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A104_10{



int a = 9, b = 7, c = 8;

int h(){
    int a = 9;
    b = 4;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 2;
    c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A105_8{
namespace B1{
int f(int a, int &b){
    int t;
    t = a + b;
    a = a + 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A105_0{
void test(){cout << (15 / 6 % 6 / 8);}
}
namespace A105_1{
void test(){int d = 6;
cout << d - 67 % 15 * 5;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A105_2{
void test(){cout << ( 8.0 >= 5 or ! 6 < true or 7 <= 6.0);}
}
namespace A105_4{
void test(){cout << (5 <= 3 == 5.0 != true);}
}
namespace A105_5{
void test(){if (7 > 16)
    cout << "w";
else
    cout << "c";}
}
namespace A105_3{


bool f(int n){
    cout<<"f";
    return n==1;
}

int test(){
    cout<<(f(-8) || f(-3));
    return 0;
}
}
namespace A105_6{


int f(int a){
    int u = 45;
    if (a) 
        return 3;
    else if (a > 0)
         u = 0;
    else
         return 6;
    return u;
}

int test(){
    cout << f(-8);
    return 0;
}
}
namespace A105_7{



int f(int &x, int &y){
    x = 2;
    y+= 6;
    return x;
}

int test(){
    int a = 5, b = 4;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 9;
        cout << ((a<=5) || ((b+=2) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A105_9{



int a = 2, b = 9, c = 0;

int f(int &a){
    int c;
    a = 4;
    b -= 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 3;
    c = 1;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A105_10{



int a = 1, b = 4, c = 5;

int g(){
    int a = 1;
    b = 7;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 6;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A106_8{
namespace B1{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A106_0{
void test(){cout << (4 / 10 / 5 * 9);}
}
namespace A106_1{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A106_2{
void test(){cout << (! 5.0 <= 2.0 ||  5 > true || 2 != 9);}
}
namespace A106_4{
void test(){cout << (true <= 9 == 8.0 >= 4);}
}
namespace A106_5{
void test(){if (17 <= 3)
    cout << "n";
else
    cout << "q";}
}
namespace A106_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) and f(0));
    return 0;
}
}
namespace A106_6{


int h(int b){
    int v = 92;
    if (b < 5) 
        v = 1;
    else if (b >= 4)
         return 2;
    else
         v = 9;
    return v;
}

int test(){
    cout << h(5);
    return 0;
}
}
namespace A106_7{



int f(int &x, int &y){
    x = 8;
    y+= 2;
    return y;
}

int test(){
    int a = 1, b = 3;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 4;
        cout << ((a<4) && ((b+=1) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A106_9{



int a = 4, b = 7, c = 8;

int f(int &a){
    int c;
    a += 2;
    b = 1;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 7;
    int c = 8;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A106_10{



int a = 3, b = 2, c = 5;

int g(){
    a = 3;
    int b = 7;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 8;
    b = 0;
    int c = 1;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A107_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A107_0{
void test(){cout << (6 % 9 % 8 % 5);}
}
namespace A107_1{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' << ":" << "c";}
}
namespace A107_2{
void test(){cout << ( 8 < false && ! 4.0 == 4 && 3.0 >= 3);}
}
namespace A107_4{
void test(){cout << (2 < 7.0 != 6 > 4.0);}
}
namespace A107_5{
void test(){if (10 == 9)
    cout << "c";
else
    cout << "o";}
}
namespace A107_3{


bool f(int n){
    cout<<"f";
    return n>0;
}

int test(){
    cout<<(f(-1) && f(7));
    return 0;
}
}
namespace A107_6{


int f(int c){
    int x = 73;
    if (c == -3) 
        return 4;
    if (c == -5)
         return 8;
    else
         x = 7;
    return x;
}

int test(){
    cout << f(-7);
    return 0;
}
}
namespace A107_7{



int f(int &x, int &y){
    x = 9;
    y-= 6;
    return x;
}

int test(){
    int a = 5, b = 7;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 4;
        cout << ((b>7) || ((a-=2) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A107_9{



int a = 3, b = 2, c = 9;

int g(int b){
    a *= 4;
    b -= 1;
    c = 3;
    return a + b + c;
}

int test(){
    a = 4;
    b = 5;
    int c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A107_10{



int a = 6, b = 9, c = 3;

int f(){
    int a = 6;
    b = 2;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 7;
    b = 6;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A108_8{
namespace B1{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A108_0{
void test(){cout << (5 * 15 * 4 / 10);}
}
namespace A108_1{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 59 / 5 / 6;}
}
namespace A108_2{
void test(){cout << ( true <= 3.0 and ! 8 < 6.0 or 4 > 9);}
}
namespace A108_4{
void test(){cout << (3 == 8 <= 6.0 < false);}
}
namespace A108_5{
void test(){if (12 >= 7)
    cout << "f";
else
    cout << "u";}
}
namespace A108_3{


bool f(int n){
    cout<<"f";
    return n!=3;
}

int test(){
    cout<<(f(5) and f(-4));
    return 0;
}
}
namespace A108_6{


int g(int a){
    int w = 87;
    if (a) 
        return 6;
    if (a > 3)
         w = 5;
    else
         w = 3;
    return w;
}

int test(){
    cout << g(-5);
    return 0;
}
}
namespace A108_7{



int f(int &x, int &y){
    x = 1;
    y+= 6;
    return y;
}

int test(){
    int a = 2, b = 3;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 5;
        cout << ((b>3) && ((a-=2) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A108_9{



int a = 0, b = 6, c = 8;

int h(int &b){
    int c;
    a = 2;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 2;
    c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A108_10{



int a = 5, b = 8, c = 2;

int h(){
    a = 5;
    int b = 1;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 4;
    b = 8;
    int c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A109_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A109_0{
void test(){cout << (8 * 9 * 12 / 10);}
}
namespace A109_1{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A109_2{
void test(){cout << (! 8.0 == 2 or  false >= 6 and 5 != 9.0);}
}
namespace A109_4{
void test(){cout << (9.0 > 5 != false >= 9);}
}
namespace A109_5{
void test(){if (15 != 11)
    cout << "j";
else
    cout << "x";}
}
namespace A109_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-9) || f(-9));
    return 0;
}
}
namespace A109_6{


int h(int d){
    int z = 70;
    if (d <= 1) 
        return 0;
    else if (d != 2)
         z = 1;
    else
         return 9;
    return z;
}

int test(){
    cout << h(-2);
    return 0;
}
}
namespace A109_7{



int f(int &x, int &y){
    x = 5;
    y-= 9;
    return x;
}

int test(){
    int a = 6, b = 3;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 2;
        cout << ((a>=6) || ((b+=1) >= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A109_9{



int a = 4, b = 9, c = 6;

int f(int a){
    a = 4;
    b -= 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 3;
    int c = 5;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A109_10{



int a = 5, b = 4, c = 9;

int f(){
    a = 5;
    int b = 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 7;
    int b = 2;
    c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A110_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A110_0{
void test(){cout << (5 / 4 % 9 * 15);}
}
namespace A110_1{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A110_2{
void test(){cout << (! 3 < 5.0 ||  7 == 2.0 || true <= 4);}
}
namespace A110_4{
void test(){cout << (6 < 2.0 >= 3.0 <= true);}
}
namespace A110_5{
void test(){if (13 > 0)
    cout << "d";
else
    cout << "i";}
}
namespace A110_3{


bool f(int n){
    cout<<"f";
    return n<-1;
}

int test(){
    cout<<(f(1) or f(2));
    return 0;
}
}
namespace A110_6{


int h(int b){
    int u = 88;
    if (b >= -2) 
        u = 2;
    if (b < -4)
         return 4;
    else
         u = 5;
    return u;
}

int test(){
    cout << h(-1);
    return 0;
}
}
namespace A110_7{



int f(int &x, int &y){
    x = 8;
    y+= 4;
    return x;
}

int test(){
    int a = 7, b = 2;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 8;
        cout << ((b<7) || ((a+=2) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A110_9{



int a = 9, b = 3, c = 0;

int h(int &b){
    a += 4;
    b *= 2;
    c = 1;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 8;
    c = 7;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A110_10{



int a = 4, b = 3, c = 5;

int h(){
    a = 4;
    int b = 2;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 1;
    b = 0;
    int c = 6;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A111_8{
namespace B1{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A111_0{
void test(){cout << (4 % 3 / 6 % 12);}
}
namespace A111_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 59 % 15 * 6;}
}
namespace A111_2{
void test(){cout << ( 6 >= false && ! 2 != 4.0 && 3 > 7.0);}
}
namespace A111_4{
void test(){cout << (5.0 != 2 > 4 == 7);}
}
namespace A111_5{
void test(){if (0 < 18)
    cout << "u";
else
    cout << "f";}
}
namespace A111_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) && f(-3));
    return 0;
}
}
namespace A111_6{


int h(int a, int b){
    int c = 23;
    if (b == -2)
        c = 4;
    else if (b < 4)
         return 9;
    else 
        return 2;
    return c;
}

int test(){
    cout << h(0, 2);
    return 0;
}
}
namespace A111_7{



int f(int &x, int &y){
    x = 9;
    y-= 5;
    return y;
}

int test(){
    int a = 4, b = 3;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 9;
        cout << ((b<=4) && ((a-=1) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A111_9{



int a = 5, b = 6, c = 4;

int g(int a){
    int c;
    a = 5;
    b = 3;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 2;
    int b = 7;
    c = 9;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A111_10{



int a = 9, b = 8, c = 0;

int g(){
    int a = 9;
    b = 5;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 4;
    b = 7;
    int c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A112_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A112_0{
void test(){cout << (6 % 6 / 15 * 6);}
}
namespace A112_1{
void test(){int a = 7;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a - 48 / 6 * 5;}
}
namespace A112_2{
void test(){cout << ( 8 > 9 or ! 5 <= true or 8.0 == 5.0);}
}
namespace A112_4{
void test(){cout << (false < 9 >= 8 <= 2);}
}
namespace A112_5{
void test(){if (16 >= 12)
    cout << "g";
else
    cout << "w";}
}
namespace A112_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) && f(3));
    return 0;
}
}
namespace A112_6{


int g(int a, int b){
    int c = 96;
    if (b > 1)
        c = 7;
    if (a != -3)
         c = 5;
    else 
        return 8;
    return c;
}

int test(){
    cout << g(-7, 7);
    return 0;
}
}
namespace A112_7{



int f(int &x, int &y){
    x = 5;
    y+= 3;
    return x;
}

int test(){
    int a = 8, b = 6;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 2;
        cout << ((b>5) && ((a-=1) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A112_9{



int a = 0, b = 4, c = 3;

int h(int a){
    int c;
    a *= 5;
    b = 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 2;
    int c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A112_10{



int a = 3, b = 6, c = 9;

int g(){
    int a = 3;
    b = 1;
    c = 0;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 4;
    c = 1;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A113_8{
namespace B1{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A113_0{
void test(){cout << (10 * 8 * 4 / 5);}
}
namespace A113_1{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' << ":" << b;}
}
namespace A113_2{
void test(){cout << (! 7 != 6 &&  6.0 < 7 && 4.0 >= false);}
}
namespace A113_4{
void test(){cout << (9.0 != 4.0 == 4 > 3.0);}
}
namespace A113_5{
void test(){if (3 > 4)
    cout << "x";
else
    cout << "d";}
}
namespace A113_3{


bool f(int n){
    cout<<"f";
    return n>=-4;
}

int test(){
    cout<<(f(5) || f(4));
    return 0;
}
}
namespace A113_6{


int f(int a, int b){
    int c = 43;
    if (a <= -5)
        c = 6;
    if (b >= 0)
         return 1;
    else 
        return 0;
    return c;
}

int test(){
    cout << f(-4, -9);
    return 0;
}
}
namespace A113_7{



int f(int &x, int &y){
    x = 6;
    y-= 9;
    return y;
}

int test(){
    int a = 8, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 1;
        cout << ((b<=6) || ((a+=2) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A113_9{



int a = 8, b = 5, c = 9;

int f(int &b){
    a = 2;
    b += 5;
    c = 2;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 2;
    c = 3;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A113_10{



int a = 2, b = 9, c = 8;

int h(){
    int a = 2;
    b = 6;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 4;
    int c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A114_8{
namespace B1{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A114_0{
void test(){cout << (12 / 15 % 8 % 3);}
}
namespace A114_1{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" << "d";
cout << ":" << d + 48 % 15 * 5;}
}
namespace A114_2{
void test(){cout << ( 2.0 < 5 and ! true > 9.0 || 4 >= 2);}
}
namespace A114_4{
void test(){cout << (true >= 3 > 8.0 <= 7);}
}
namespace A114_5{
void test(){if (1 <= 5)
    cout << "r";
else
    cout << "r";}
}
namespace A114_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-1) or f(8));
    return 0;
}
}
namespace A114_6{


int g(int a, int b){
    int c = 74;
    if (a != -2)
        c = 3;
    else if (b >= -5)
         return 4;
    else 
        c = 5;
    return c;
}

int test(){
    cout << g(4, -5);
    return 0;
}
}
namespace A114_7{



int f(int &x, int &y){
    x = 7;
    y-= 6;
    return y;
}

int test(){
    int a = 3, b = 8;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((b>=3) && ((a-=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A114_9{



int a = 5, b = 7, c = 4;

int g(int b){
    a = 1;
    b -= 4;
    c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 1;
    c = 8;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A114_10{



int a = 7, b = 0, c = 9;

int f(){
    int a = 7;
    b = 3;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 1;
    int c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A115_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A115_0{
void test(){cout << (3 * 5 / 5 / 4);}
}
namespace A115_1{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A115_2{
void test(){cout << (! 7.0 != false ||  9 <= 8 and 3.0 == 3);}
}
namespace A115_4{
void test(){cout << (2.0 < 5 != 6 == true);}
}
namespace A115_5{
void test(){if (4 < 17)
    cout << "p";
else
    cout << "h";}
}
namespace A115_3{


bool f(int n){
    cout<<"f";
    return n<-3;
}

int test(){
    cout<<(f(-5) and f(0));
    return 0;
}
}
namespace A115_6{


int g(int c){
    int x = 60;
    if (c >= -2) 
        return 4;
    else if (c < 2)
         return 7;
    else
         x = 3;
    return x;
}

int test(){
    cout << g(1);
    return 0;
}
}
namespace A115_7{



int f(int &x, int &y){
    x = 1;
    y+= 4;
    return x;
}

int test(){
    int a = 5, b = 3;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 6;
        cout << ((b<3) || ((a+=1) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A115_9{



int a = 0, b = 6, c = 9;

int h(int &a){
    int c;
    a *= 1;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 1;
    int b = 7;
    c = 4;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A115_10{



int a = 2, b = 4, c = 9;

int f(){
    int a = 2;
    b = 6;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 1;
    int c = 0;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A116_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A116_0{
void test(){cout << (15 % 12 * 10 % 8);}
}
namespace A116_1{
void test(){int b = 9;
cout << b << ":" << 'b' << ":" << "b";
cout << ":" << b + 67 % 15 / 5;}
}
namespace A116_2{
void test(){cout << (! 4 > 7 and  true != 8.0 && 8 == 4.0);}
}
namespace A116_4{
void test(){cout << (5 >= 5.0 == 4 <= 6.0);}
}
namespace A116_5{
void test(){if (2 != 14)
    cout << "a";
else
    cout << "g";}
}
namespace A116_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) || f(-7));
    return 0;
}
}
namespace A116_6{


int f(int c){
    int v = 42;
    if (c) 
        v = 1;
    if (c == 0)
         return 9;
    else
         v = 8;
    return v;
}

int test(){
    cout << f(3);
    return 0;
}
}
namespace A116_7{



int f(int &x, int &y){
    x = 1;
    y-= 9;
    return x;
}

int test(){
    int a = 4, b = 5;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 2;
        cout << ((b>5) || ((a-=2) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A116_9{



int a = 8, b = 3, c = 5;

int f(int &a){
    int c;
    a = 4;
    b = 5;
    c = 5;
    return a + b + c;
}

int test(){
    a = 2;
    int b = 3;
    c = 4;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A116_10{



int a = 8, b = 5, c = 3;

int h(){
    int a = 8;
    b = 9;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 0;
    b = 8;
    int c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A117_8{
namespace B1{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A117_0{
void test(){cout << (9 / 10 % 3 * 9);}
}
namespace A117_1{
void test(){int a = 4;
cout << a + 59 % 15 / 5;
cout << ":" << a << ":" << 'a' << ":" << "a";}
}
namespace A117_2{
void test(){cout << ( 6.0 < false && ! 7.0 >= 9 || 6 <= 5);}
}
namespace A117_4{
void test(){cout << (2 > 7.0 != 7 < false);}
}
namespace A117_5{
void test(){if (6 == 19)
    cout << "l";
else
    cout << "a";}
}
namespace A117_3{


bool f(int n){
    cout<<"f";
    return n>-2;
}

int test(){
    cout<<(f(9) or f(-2));
    return 0;
}
}
namespace A117_6{


int g(int b){
    int y = 16;
    if (b <= 3) 
        return 6;
    else if (b != -5)
         return 2;
    else
         y = 0;
    return y;
}

int test(){
    cout << g(-6);
    return 0;
}
}
namespace A117_7{



int f(int &x, int &y){
    x = 9;
    y+= 5;
    return y;
}

int test(){
    int a = 4, b = 7;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 1;
        cout << ((b<6) && ((a+=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
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



int a = 6, b = 2, c = 1;

int g(int b){
    a += 4;
    b -= 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 9;
    c = 5;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A117_10{



int a = 7, b = 5, c = 4;

int g(){
    int a = 7;
    b = 2;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 2;
    int b = 9;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A118_8{
namespace B1{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A118_0{
void test(){cout << (12 * 6 / 9 * 8);}
}
namespace A118_1{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A118_2{
void test(){cout << ( false == 2.0 or ! 3 > 2 or 4 >= 9.0);}
}
namespace A118_4{
void test(){cout << (true < 6 >= 8 != 3);}
}
namespace A118_5{
void test(){if (11 <= 1)
    cout << "h";
else
    cout << "j";}
}
namespace A118_3{


bool f(int n){
    cout<<"f";
    return n<=1;
}

int test(){
    cout<<(f(6) and f(-4));
    return 0;
}
}
namespace A118_6{


int h(int a, int b){
    int c = 15;
    if (a)
        c = 6;
    if (b > 2)
         return 1;
    else 
        c = 7;
    return c;
}

int test(){
    cout << h(2, -8);
    return 0;
}
}
namespace A118_7{



int f(int &x, int &y){
    x = 5;
    y+= 9;
    return y;
}

int test(){
    int a = 2, b = 3;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 7;
        cout << ((b<=7) || ((a+=1) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A118_9{



int a = 7, b = 0, c = 3;

int g(int &a){
    a *= 3;
    b = 5;
    c = 2;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 6;
    c = 5;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A118_10{



int a = 3, b = 0, c = 5;

int g(){
    int a = 3;
    b = 1;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 7;
    b = 8;
    int c = 7;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A119_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A119_0{
void test(){cout << (6 % 15 % 8 / 4);}
}
namespace A119_1{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A119_2{
void test(){cout << ( 8 <= 3.0 || ! true < 5 and 5.0 != 6);}
}
namespace A119_4{
void test(){cout << (6.0 <= 3.0 == 9 > 8.0);}
}
namespace A119_5{
void test(){if (5 >= 2)
    cout << "k";
else
    cout << "v";}
}
namespace A119_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(6) && f(1));
    return 0;
}
}
namespace A119_6{


int f(int a, int b){
    int c = 42;
    if (a <= -4)
        return 2;
    else if (b == 1)
         return 9;
    else 
        c = 8;
    return c;
}

int test(){
    cout << f(9, -3);
    return 0;
}
}
namespace A119_7{



int f(int &x, int &y){
    x = 6;
    y-= 4;
    return x;
}

int test(){
    int a = 2, b = 1;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((a>=4) && ((b-=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A119_9{



int a = 4, b = 9, c = 7;

int f(int b){
    int c;
    a -= 3;
    b = 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 0;
    int c = 8;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A119_10{



int a = 1, b = 0, c = 2;

int h(){
    int a = 1;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 9;
    int b = 6;
    c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A120_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A120_0{
void test(){cout << (8 / 8 * 6 % 6);}
}
namespace A120_1{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A120_2{
void test(){cout << (! 2 < 2.0 ||  false > 9.0 and 3 <= 9);}
}
namespace A120_4{
void test(){cout << (8 <= 9 < false != 4.0);}
}
namespace A120_5{
void test(){if (11 < 12)
    cout << "z";
else
    cout << "l";}
}
namespace A120_3{


bool f(int n){
    cout<<"f";
    return n==4;
}

int test(){
    cout<<(f(9) and f(-9));
    return 0;
}
}
namespace A120_6{


int f(int d){
    int w = 90;
    if (d) 
        w = 3;
    if (d > -1)
         return 7;
    else
         w = 4;
    return w;
}

int test(){
    cout << f(2);
    return 0;
}
}
namespace A120_7{



int f(int &x, int &y){
    x = 8;
    y+= 6;
    return y;
}

int test(){
    int a = 7, b = 4;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((b>=5) && ((a-=2) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A120_9{



int a = 7, b = 4, c = 3;

int h(int a){
    int c;
    a = 2;
    b += 4;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 9;
    int c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A120_10{



int a = 5, b = 1, c = 7;

int f(){
    a = 5;
    int b = 2;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 4;
    int c = 8;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A121_8{
namespace B1{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A121_0{
void test(){cout << (15 * 12 / 15 * 10);}
}
namespace A121_1{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A121_2{
void test(){cout << (! 7.0 >= 7 or  4.0 != true or 8 == 4);}
}
namespace A121_4{
void test(){cout << (6 >= 2 > 4 == true);}
}
namespace A121_5{
void test(){if (2 == 19)
    cout << "b";
else
    cout << "b";}
}
namespace A121_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) || f(7));
    return 0;
}
}
namespace A121_6{


int h(int a, int b){
    int c = 24;
    if (b < -1)
        c = 3;
    if (a >= 4)
         return 7;
    else 
        c = 6;
    return c;
}

int test(){
    cout << h(-6, -1);
    return 0;
}
}
namespace A121_7{



int f(int &x, int &y){
    x = 3;
    y-= 1;
    return x;
}

int test(){
    int a = 8, b = 9;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 2;
        cout << ((b<=6) || ((a+=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A121_9{



int a = 2, b = 5, c = 0;

int g(int &b){
    a *= 3;
    b += 5;
    c = 4;
    return a + b + c;
}

int test(){
    a = 6;
    b = 2;
    int c = 7;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A121_10{



int a = 0, b = 3, c = 4;

int h(){
    int a = 0;
    b = 6;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 8;
    c = 9;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A122_8{
namespace B1{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A122_0{
void test(){cout << (10 % 3 * 4 % 9);}
}
namespace A122_1{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 48 % 15 * 6;}
}
namespace A122_2{
void test(){cout << ( 6 > 2 and ! 5.0 == true || 8.0 <= 7);}
}
namespace A122_4{
void test(){cout << (9.0 != 2.0 >= false < 5);}
}
namespace A122_5{
void test(){if (12 != 14)
    cout << "i";
else
    cout << "k";}
}
namespace A122_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) or f(0));
    return 0;
}
}
namespace A122_6{


int h(int a){
    int z = 76;
    if (a < -3) 
        return 9;
    else if (a != 5)
         return 0;
    else
         z = 1;
    return z;
}

int test(){
    cout << h(4);
    return 0;
}
}
namespace A122_7{



int f(int &x, int &y){
    x = 2;
    y-= 8;
    return y;
}

int test(){
    int a = 1, b = 9;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 5;
        cout << ((b>3) || ((a+=1) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A122_9{



int a = 0, b = 6, c = 3;

int f(int b){
    int c;
    a = 5;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 8;
    c = 1;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A122_10{



int a = 2, b = 0, c = 5;

int g(){
    a = 2;
    int b = 7;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 8;
    int c = 5;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A123_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A123_0{
void test(){cout << (3 / 4 % 5 / 12);}
}
namespace A123_1{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A123_2{
void test(){cout << (! false != 5 &&  6.0 < 3.0 && 3 >= 9);}
}
namespace A123_4{
void test(){cout << (5.0 == 7.0 <= 3 > 7);}
}
namespace A123_5{
void test(){if (8 > 5)
    cout << "s";
else
    cout << "m";}
}
namespace A123_3{


bool f(int n){
    cout<<"f";
    return n!=-1;
}

int test(){
    cout<<(f(4) && f(-7));
    return 0;
}
}
namespace A123_6{


int g(int a, int b){
    int c = 88;
    if (a)
        return 5;
    else if (b == 5)
         c = 8;
    else 
        return 2;
    return c;
}

int test(){
    cout << g(7, 8);
    return 0;
}
}
namespace A123_7{



int f(int &x, int &y){
    x = 3;
    y+= 3;
    return x;
}

int test(){
    int a = 7, b = 8;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 2;
        cout << ((b<4) && ((a-=2) > 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A123_9{



int a = 5, b = 4, c = 3;

int h(int &a){
    a = 1;
    b -= 5;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 4;
    c = 0;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A123_10{



int a = 9, b = 7, c = 4;

int f(){
    a = 9;
    int b = 3;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 2;
    b = 9;
    int c = 2;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A124_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A124_0{
void test(){cout << (4 * 9 * 12 / 5);}
}
namespace A124_1{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a + 53 / 6 / 5;}
}
namespace A124_2{
void test(){cout << ( 7 <= 7.0 and ! 9 > 3.0 && 6 == false);}
}
namespace A124_4{
void test(){cout << (true == 3.0 > 2 >= 9);}
}
namespace A124_5{
void test(){if (14 < 9)
    cout << "m";
else
    cout << "t";}
}
namespace A124_3{


bool f(int n){
    cout<<"f";
    return n<3;
}

int test(){
    cout<<(f(-4) || f(-3));
    return 0;
}
}
namespace A124_6{


int f(int a, int b){
    int c = 97;
    if (b)
        c = 0;
    else if (a <= -3)
         return 1;
    else 
        c = 4;
    return c;
}

int test(){
    cout << f(-9, -2);
    return 0;
}
}
namespace A124_7{



int f(int &x, int &y){
    x = 6;
    y+= 4;
    return x;
}

int test(){
    int a = 5, b = 3;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 5;
        cout << ((a>=7) || ((b+=1) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A124_9{



int a = 2, b = 1, c = 7;

int h(int b){
    int c;
    a = 2;
    b = 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 8;
    int c = 9;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A124_10{



int a = 1, b = 4, c = 7;

int g(){
    int a = 1;
    b = 0;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 5;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A125_8{
namespace B1{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A125_0{
void test(){cout << (9 % 10 % 3 * 3);}
}
namespace A125_1{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A125_2{
void test(){cout << (! 5.0 >= 4.0 ||  4 < 5 or true != 2);}
}
namespace A125_4{
void test(){cout << (4 <= 9.0 < 7 != 2.0);}
}
namespace A125_5{
void test(){if (17 == 0)
    cout << "e";
else
    cout << "e";}
}
namespace A125_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(5) && f(8));
    return 0;
}
}
namespace A125_6{


int g(int a){
    int x = 84;
    if (a <= 4) 
        return 2;
    if (a > 1)
         x = 8;
    else
         x = 6;
    return x;
}

int test(){
    cout << g(9);
    return 0;
}
}
namespace A125_7{



int f(int &x, int &y){
    x = 6;
    y-= 9;
    return y;
}

int test(){
    int a = 4, b = 8;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 9;
        cout << ((b<=6) && ((a-=2) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A125_9{



int a = 2, b = 4, c = 5;

int g(int &a){
    a *= 3;
    b -= 2;
    c = 1;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 7;
    c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A125_10{



int a = 1, b = 9, c = 7;

int h(){
    a = 1;
    int b = 4;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 8;
    b = 6;
    int c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A126_8{
namespace B1{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A126_0{
void test(){cout << (5 / 5 / 10 % 15);}
}
namespace A126_1{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A126_2{
void test(){cout << ( 3 != 8.0 && ! 8 <= 3 || 2.0 == true);}
}
namespace A126_4{
void test(){cout << (3 < 5.0 <= 8 != false);}
}
namespace A126_5{
void test(){if (1 >= 7)
    cout << "z";
else
    cout << "i";}
}
namespace A126_3{


bool f(int n){
    cout<<"f";
    return n<=-4;
}

int test(){
    cout<<(f(-5) and f(-1));
    return 0;
}
}
namespace A126_6{


int g(int a, int b){
    int c = 25;
    if (a > 3)
        return 9;
    if (a < 3)
         c = 3;
    else 
        return 9;
    return c;
}

int test(){
    cout << g(5, 1);
    return 0;
}
}
namespace A126_7{



int f(int &x, int &y){
    x = 1;
    y-= 8;
    return x;
}

int test(){
    int a = 3, b = 4;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((a>4) && ((b+=1) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A126_9{



int a = 9, b = 0, c = 3;

int f(int b){
    int c;
    a += 5;
    b = 4;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 0;
    c = 6;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A126_10{



int a = 3, b = 0, c = 2;

int f(){
    int a = 3;
    b = 6;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 4;
    b = 0;
    int c = 5;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A127_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A127_0{
void test(){cout << (4 % 6 * 9 % 12);}
}
namespace A127_1{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A127_2{
void test(){cout << (! 6 > 9 or  6.0 >= 9.0 and 2 < false);}
}
namespace A127_4{
void test(){cout << (6 > 8.0 >= 5 == true);}
}
namespace A127_5{
void test(){if (6 <= 4)
    cout << "m";
else
    cout << "q";}
}
namespace A127_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(3) or f(2));
    return 0;
}
}
namespace A127_6{


int f(int d){
    int v = 55;
    if (d >= -1) 
        return 5;
    else if (d == 2)
         return 8;
    else
         v = 4;
    return v;
}

int test(){
    cout << f(8);
    return 0;
}
}
namespace A127_7{



int f(int &x, int &y){
    x = 3;
    y+= 2;
    return y;
}

int test(){
    int a = 4, b = 6;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 9;
        cout << ((b<7) || ((a-=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A127_9{



int a = 1, b = 9, c = 2;

int h(int &a){
    a += 2;
    b = 1;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 7;
    c = 4;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A127_10{



int a = 1, b = 8, c = 3;

int h(){
    a = 1;
    int b = 9;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 1;
    b = 4;
    int c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A128_8{
namespace B1{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A128_0{
void test(){cout << (9 / 15 % 8 * 3);}
}
namespace A128_1{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A128_2{
void test(){cout << (! 5 > 8.0 or  7 != 8 and 6.0 >= false);}
}
namespace A128_4{
void test(){cout << (7.0 <= 2 != 9 < 3);}
}
namespace A128_5{
void test(){if (7 > 18)
    cout << "r";
else
    cout << "o";}
}
namespace A128_3{


bool f(int n){
    cout<<"f";
    return n==2;
}

int test(){
    cout<<(f(-2) and f(6));
    return 0;
}
}
namespace A128_6{


int h(int a, int b){
    int c = 41;
    if (b != 1)
        c = 6;
    else if (b < -2)
         return 0;
    else 
        c = 2;
    return c;
}

int test(){
    cout << h(-1, -7);
    return 0;
}
}
namespace A128_7{



int f(int &x, int &y){
    x = 8;
    y+= 7;
    return y;
}

int test(){
    int a = 3, b = 8;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 7;
        cout << ((a>=3) && ((b-=2) <= 7)) << ':';
        cout << a << ":" << b << ':';
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



int a = 5, b = 3, c = 3;

int f(int &b){
    int c;
    a = 3;
    b -= 2;
    c = 4;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 8;
    c = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A128_10{



int a = 2, b = 7, c = 5;

int f(){
    a = 2;
    int b = 3;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 5;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A129_8{
namespace B1{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A129_0{
void test(){cout << (15 * 9 / 10 / 15);}
}
namespace A129_1{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a << ":" << 'a';}
}
namespace A129_2{
void test(){cout << ( 4 <= 5 and ! 9.0 < 2.0 && true == 2);}
}
namespace A129_4{
void test(){cout << (6.0 > 5 >= 4.0 == false);}
}
namespace A129_5{
void test(){if (19 != 6)
    cout << "h";
else
    cout << "r";}
}
namespace A129_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-3) or f(0));
    return 0;
}
}
namespace A129_6{


int h(int c){
    int z = 11;
    if (c) 
        z = 5;
    else if (c == 4)
         return 3;
    else
         return 0;
    return z;
}

int test(){
    cout << h(-3);
    return 0;
}
}
namespace A129_7{



int f(int &x, int &y){
    x = 5;
    y-= 2;
    return x;
}

int test(){
    int a = 4, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((b<5) || ((a+=1) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A129_9{



int a = 5, b = 9, c = 2;

int g(int a){
    a *= 5;
    b = 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 4;
    b = 7;
    int c = 0;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A129_10{



int a = 0, b = 7, c = 2;

int g(){
    a = 0;
    int b = 1;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 9;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A130_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A130_0{
void test(){cout << (10 / 3 / 15 * 9);}
}
namespace A130_1{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" << b;
cout << ":" << b + 59 / 5 * 6;}
}
namespace A130_2{
void test(){cout << ( 6 < 7.0 || ! 7 <= 4.0 or true == 8);}
}
namespace A130_4{
void test(){cout << (6.0 == 4 <= 6 < 8);}
}
namespace A130_5{
void test(){if (4 != 2)
    cout << "e";
else
    cout << "l";}
}
namespace A130_3{


bool f(int n){
    cout<<"f";
    return n>-2;
}

int test(){
    cout<<(f(-7) || f(3));
    return 0;
}
}
namespace A130_6{


int f(int a, int b){
    int c = 31;
    if (b >= 4)
        return 4;
    if (b > -3)
         return 8;
    else 
        c = 1;
    return c;
}

int test(){
    cout << f(-8, 9);
    return 0;
}
}
namespace A130_7{



int f(int &x, int &y){
    x = 9;
    y+= 1;
    return x;
}

int test(){
    int a = 6, b = 7;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 8;
        cout << ((b<=5) && ((a+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A130_9{



int a = 0, b = 3, c = 9;

int h(int &a){
    int c;
    a = 1;
    b -= 3;
    c = 5;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 8;
    int c = 4;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A130_10{



int a = 5, b = 2, c = 6;

int g(){
    a = 5;
    int b = 4;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 7;
    int c = 0;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A131_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A131_0{
void test(){cout << (12 * 5 * 3 % 10);}
}
namespace A131_1{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A131_2{
void test(){cout << (! 5.0 != 4 &&  3 > 9 || 3.0 >= false);}
}
namespace A131_4{
void test(){cout << (false >= 4.0 > 7.0 != true);}
}
namespace A131_5{
void test(){if (16 <= 8)
    cout << "f";
else
    cout << "x";}
}
namespace A131_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) && f(2));
    return 0;
}
}
namespace A131_6{


int g(int b){
    int w = 68;
    if (b < -4) 
        w = 9;
    if (b != -5)
         return 7;
    else
         w = 1;
    return w;
}

int test(){
    cout << g(0);
    return 0;
}
}
namespace A131_7{



int f(int &x, int &y){
    x = 5;
    y-= 9;
    return y;
}

int test(){
    int a = 4, b = 3;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 8;
        cout << ((a>6) || ((b-=2) >= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A131_9{



int a = 5, b = 6, c = 2;

int g(int b){
    a *= 4;
    b += 2;
    c = 3;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 2;
    c = 7;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A131_10{



int a = 1, b = 8, c = 8;

int h(){
    a = 1;
    int b = 9;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 4;
    int c = 2;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A132_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A132_0{
void test(){cout << (8 % 10 % 5 / 8);}
}
namespace A132_1{
void test(){int d = 5;
cout << d - 7 * 4 / 6 * 9;
cout << ":" << 'd' << ":" << d << ":" << "d";}
}
namespace A132_2{
void test(){cout << ( 6 <= 4.0 or ! 9 != 5 || true < 2.0);}
}
namespace A132_4{
void test(){cout << (8.0 > 7 <= 4 != 6);}
}
namespace A132_5{
void test(){if (0 > 13)
    cout << "v";
else
    cout << "f";}
}
namespace A132_3{


bool f(int n){
    cout<<"f";
    return n!=0;
}

int test(){
    cout<<(f(4) && f(9));
    return 0;
}
}
namespace A132_6{


int f(int a){
    int y = 79;
    if (a) 
        return 2;
    else if (a > 5)
         y = 6;
    else
         y = 8;
    return y;
}

int test(){
    cout << f(-9);
    return 0;
}
}
namespace A132_7{



int f(int &x, int &y){
    x = 1;
    y-= 9;
    return x;
}

int test(){
    int a = 2, b = 8;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((a<=4) || ((b+=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A132_9{



int a = 9, b = 1, c = 5;

int f(int &b){
    a = 4;
    b = 5;
    c = 1;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 0;
    int c = 8;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A132_10{



int a = 5, b = 1, c = 6;

int f(){
    int a = 5;
    b = 3;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 1;
    int c = 5;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A133_8{
namespace B1{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A133_0{
void test(){cout << (6 / 8 * 6 * 4);}
}
namespace A133_1{
void test(){int d = 4;
cout << d + 5 * 7 / 3 * 9;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A133_2{
void test(){cout << ( false > 2 || ! 6.0 == 4 && 8 >= 8.0);}
}
namespace A133_4{
void test(){cout << (7 == 3.0 >= 9.0 < 3);}
}
namespace A133_5{
void test(){if (3 == 3)
    cout << "i";
else
    cout << "k";}
}
namespace A133_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(1) or f(-2));
    return 0;
}
}
namespace A133_6{


int h(int c){
    int u = 67;
    if (c <= -2) 
        return 3;
    if (c >= 3)
         u = 1;
    else
         return 4;
    return u;
}

int test(){
    cout << h(-4);
    return 0;
}
}
namespace A133_7{



int f(int &x, int &y){
    x = 5;
    y+= 6;
    return y;
}

int test(){
    int a = 3, b = 6;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((a<3) && ((b-=1) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A133_9{



int a = 4, b = 3, c = 8;

int f(int a){
    int c;
    a = 2;
    b += 3;
    c = 2;
    return a + b + c;
}

int test(){
    a = 6;
    b = 1;
    int c = 5;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A133_10{



int a = 0, b = 2, c = 8;

int f(){
    a = 0;
    int b = 4;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 6;
    b = 7;
    int c = 5;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A134_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A134_0{
void test(){cout << (5 * 12 / 12 / 5);}
}
namespace A134_1{
void test(){int d = 6;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d + 48 % 15 * 5;}
}
namespace A134_2{
void test(){cout << (! false != 7 &&  3 <= 3.0 and 9.0 < 9);}
}
namespace A134_4{
void test(){cout << (false == 2 < 8 != 5.0);}
}
namespace A134_5{
void test(){if (15 >= 11)
    cout << "a";
else
    cout << "z";}
}
namespace A134_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) and f(-9));
    return 0;
}
}
namespace A134_6{


int g(int a, int b){
    int c = 19;
    if (a == 2)
        return 7;
    else if (b <= 5)
         c = 5;
    else 
        return 0;
    return c;
}

int test(){
    cout << g(6, 4);
    return 0;
}
}
namespace A134_7{



int f(int &x, int &y){
    x = 8;
    y-= 3;
    return x;
}

int test(){
    int a = 9, b = 1;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 3;
        cout << ((a>7) && ((b-=1) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A134_9{



int a = 7, b = 0, c = 3;

int g(int &b){
    int c;
    a = 1;
    b -= 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 4;
    int c = 2;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A134_10{



int a = 0, b = 6, c = 2;

int h(){
    a = 0;
    int b = 1;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 4;
    c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A135_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A135_0{
void test(){cout << (3 % 4 % 4 % 6);}
}
namespace A135_1{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' << ":" << "b";}
}
namespace A135_2{
void test(){cout << ( 7.0 > 5.0 and ! true == 3 or 7 >= 2);}
}
namespace A135_4{
void test(){cout << (5 <= true >= 2.0 > 9);}
}
namespace A135_5{
void test(){if (5 < 1)
    cout << "o";
else
    cout << "n";}
}
namespace A135_3{


bool f(int n){
    cout<<"f";
    return n>=-3;
}

int test(){
    cout<<(f(5) || f(-1));
    return 0;
}
}
namespace A135_6{


int h(int b){
    int w = 86;
    if (b <= 0) 
        w = 0;
    if (b != 1)
         return 7;
    else
         return 6;
    return w;
}

int test(){
    cout << h(6);
    return 0;
}
}
namespace A135_7{



int f(int &x, int &y){
    x = 4;
    y+= 9;
    return y;
}

int test(){
    int a = 8, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 6;
        cout << ((b>=5) || ((a+=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A135_9{



int a = 0, b = 9, c = 1;

int h(int a){
    a *= 2;
    b = 3;
    c = 5;
    return a + b + c;
}

int test(){
    a = 2;
    b = 3;
    int c = 5;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A135_10{



int a = 6, b = 7, c = 4;

int g(){
    int a = 6;
    b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 9;
    int b = 0;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A136_8{
namespace B1{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A136_0{
void test(){cout << (15 % 6 / 10 / 8);}
}
namespace A136_1{
void test(){int b = 5;
cout << b - 4 * 9 / 5 * 4;
cout << ":" << 'b' << ":" << b << ":" << "b";}
}
namespace A136_2{
void test(){cout << (! 6 > 5 and  2.0 >= true or 5.0 == 4);}
}
namespace A136_4{
void test(){cout << (true > 6.0 >= 7 <= 2);}
}
namespace A136_5{
void test(){if (13 != 17)
    cout << "k";
else
    cout << "t";}
}
namespace A136_3{


bool f(int n){
    cout<<"f";
    return n<-2;
}

int test(){
    cout<<(f(7) && f(-4));
    return 0;
}
}
namespace A136_6{


int h(int a, int b){
    int c = 10;
    if (a)
        c = 8;
    if (a != 0)
         return 9;
    else 
        c = 5;
    return c;
}

int test(){
    cout << h(-3, 5);
    return 0;
}
}
namespace A136_7{



int f(int &x, int &y){
    x = 6;
    y+= 8;
    return y;
}

int test(){
    int a = 3, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 5;
        cout << ((b<3) && ((a+=1) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A136_9{



int a = 7, b = 6, c = 4;

int g(int &a){
    a = 1;
    b = 4;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 2;
    c = 7;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A136_10{



int a = 5, b = 3, c = 4;

int g(){
    int a = 5;
    b = 8;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 9;
    int c = 1;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A137_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A137_0{
void test(){cout << (5 * 3 % 4 % 9);}
}
namespace A137_1{
void test(){int d = 6;
cout << d - 5 * 4 / 8 * 9;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A137_2{
void test(){cout << ( 8 < false && ! 3 <= 9 || 7.0 != 4.0);}
}
namespace A137_4{
void test(){cout << (5 != 2.0 < 8 == 4.0);}
}
namespace A137_5{
void test(){if (18 <= 16)
    cout << "n";
else
    cout << "b";}
}
namespace A137_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) and f(-5));
    return 0;
}
}
namespace A137_6{


int f(int a, int b){
    int c = 86;
    if (b)
        c = 6;
    if (b < -1)
         return 2;
    else 
        c = 3;
    return c;
}

int test(){
    cout << f(-5, -4);
    return 0;
}
}
namespace A137_7{



int f(int &x, int &y){
    x = 2;
    y-= 7;
    return x;
}

int test(){
    int a = 2, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 5;
        cout << ((b>=4) || ((a-=2) >= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A137_9{



int a = 1, b = 3, c = 8;

int h(int b){
    int c;
    a += 2;
    b = 5;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 0;
    int c = 5;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A137_10{



int a = 6, b = 3, c = 0;

int f(){
    int a = 6;
    b = 2;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 4;
    int c = 8;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A138_8{
namespace B1{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A138_0{
void test(){cout << (9 / 9 * 5 * 3);}
}
namespace A138_1{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A138_2{
void test(){cout << ( 7 < 3.0 or ! 8 != 6 and 9.0 <= false);}
}
namespace A138_4{
void test(){cout << (3.0 != 4 <= false >= 3);}
}
namespace A138_5{
void test(){if (9 >= 15)
    cout << "p";
else
    cout << "d";}
}
namespace A138_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(4) || f(-4));
    return 0;
}
}
namespace A138_6{


int f(int d){
    int u = 26;
    if (d >= -3) 
        u = 9;
    else if (d > 2)
         return 2;
    else
         u = 5;
    return u;
}

int test(){
    cout << f(5);
    return 0;
}
}
namespace A138_7{



int f(int &x, int &y){
    x = 7;
    y-= 4;
    return x;
}

int test(){
    int a = 6, b = 1;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 3;
        cout << ((a<=7) && ((b-=1) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A138_9{



int a = 6, b = 4, c = 2;

int f(int a){
    a *= 3;
    b -= 3;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 3;
    c = 8;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A138_10{



int a = 7, b = 1, c = 3;

int h(){
    a = 7;
    int b = 2;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 1;
    c = 9;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A139_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A139_0{
void test(){cout << (8 % 10 / 15 * 15);}
}
namespace A139_1{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A139_2{
void test(){cout << ( 6.0 >= 2 || ! 5 > true && 8.0 == 4);}
}
namespace A139_4{
void test(){cout << (6 < 9.0 == 9 > 7.0);}
}
namespace A139_5{
void test(){if (10 == 10)
    cout << "j";
else
    cout << "w";}
}
namespace A139_3{


bool f(int n){
    cout<<"f";
    return n!=3;
}

int test(){
    cout<<(f(-2) or f(-6));
    return 0;
}
}
namespace A139_6{


int h(int a, int b){
    int c = 18;
    if (a >= -4)
        return 7;
    else if (a == -5)
         return 4;
    else 
        c = 1;
    return c;
}

int test(){
    cout << h(1, 0);
    return 0;
}
}
namespace A139_7{



int f(int &x, int &y){
    x = 6;
    y+= 5;
    return y;
}

int test(){
    int a = 8, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 7;
        cout << ((a>6) || ((b+=2) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A139_9{



int a = 6, b = 0, c = 5;

int g(int &b){
    int c;
    a = 5;
    b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 7;
    c = 9;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A139_10{



int a = 0, b = 3, c = 6;

int g(){
    int a = 0;
    b = 8;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 7;
    b = 2;
    int c = 4;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A140_8{
namespace B1{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A140_0{
void test(){cout << (12 * 15 * 8 % 10);}
}
namespace A140_1{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d - 59 / 5 / 6;}
}
namespace A140_2{
void test(){cout << ( 8 <= true || ! 9 != 2.0 || 7 < 5.0);}
}
namespace A140_4{
void test(){cout << (3 == true <= 4 >= false);}
}
namespace A140_5{
void test(){if (19 > 16)
    cout << "b";
else
    cout << "u";}
}
namespace A140_3{


bool f(int n){
    cout<<"f";
    return n==4;
}

int test(){
    cout<<(f(9) || f(1));
    return 0;
}
}
namespace A140_6{


int g(int a, int b){
    int c = 27;
    if (b != 0)
        c = 2;
    if (a <= 2)
         return 8;
    else 
        return 5;
    return c;
}

int test(){
    cout << g(3, 7);
    return 0;
}
}
namespace A140_7{



int f(int &x, int &y){
    x = 5;
    y+= 4;
    return y;
}

int test(){
    int a = 6, b = 2;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 1;
        cout << ((b<=6) && ((a+=2) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A140_9{



int a = 0, b = 3, c = 4;

int h(int a){
    int c;
    a -= 1;
    b += 4;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 9;
    c = 8;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A140_10{



int a = 0, b = 7, c = 9;

int h(){
    a = 0;
    int b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 4;
    c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A141_8{
namespace B1{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A141_0{
void test(){cout << (4 / 8 % 3 / 6);}
}
namespace A141_1{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A141_2{
void test(){cout << (! 6 == 3.0 &&  4.0 >= 4 && false > 5);}
}
namespace A141_4{
void test(){cout << (6 > 8.0 < 7 != 5.0);}
}
namespace A141_5{
void test(){if (9 < 0)
    cout << "u";
else
    cout << "g";}
}
namespace A141_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-3) and f(8));
    return 0;
}
}
namespace A141_6{


int g(int a, int b){
    int c = 78;
    if (a > -4)
        c = 6;
    else if (b <= -3)
         c = 3;
    else 
        return 4;
    return c;
}

int test(){
    cout << g(8, 6);
    return 0;
}
}
namespace A141_7{



int f(int &x, int &y){
    x = 8;
    y-= 4;
    return x;
}

int test(){
    int a = 9, b = 1;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((b>7) || ((a-=1) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A141_9{



int a = 1, b = 5, c = 7;

int f(int &b){
    a *= 5;
    b = 2;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 2;
    int b = 8;
    c = 0;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A141_10{



int a = 8, b = 6, c = 9;

int f(){
    a = 8;
    int b = 1;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 7;
    c = 8;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A142_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A142_0{
void test(){cout << (10 % 4 % 9 / 4);}
}
namespace A142_1{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" << c;
cout << ":" << c + 67 % 15 * 5;}
}
namespace A142_2{
void test(){cout << (! true < 6.0 or  2 != 9.0 or 3 == 8);}
}
namespace A142_4{
void test(){cout << (5 == 9 <= true != 6.0);}
}
namespace A142_5{
void test(){if (17 > 5)
    cout << "w";
else
    cout << "y";}
}
namespace A142_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(5) or f(2));
    return 0;
}
}
namespace A142_6{


int g(int b){
    int v = 37;
    if (b) 
        return 8;
    else if (b < 0)
         v = 4;
    else
         return 0;
    return v;
}

int test(){
    cout << g(-3);
    return 0;
}
}
namespace A142_7{



int f(int &x, int &y){
    x = 6;
    y-= 7;
    return y;
}

int test(){
    int a = 2, b = 7;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((a<5) && ((b+=2) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A142_9{



int a = 1, b = 3, c = 9;

int g(int a){
    int c;
    a = 1;
    b *= 5;
    c = 4;
    return a + b + c;
}

int test(){
    a = 2;
    int b = 5;
    c = 4;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A142_10{



int a = 2, b = 4, c = 6;

int g(){
    a = 2;
    int b = 5;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 7;
    c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A143_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A143_0{
void test(){cout << (6 * 12 / 6 * 5);}
}
namespace A143_1{
void test(){int d = 2;
cout << d + 48 / 6 * 5;
cout << ":" << 'd' << ":" << "d" << ":" << d;}
}
namespace A143_2{
void test(){cout << ( 6 > 8.0 and ! false <= 7.0 and 9 >= 3);}
}
namespace A143_4{
void test(){cout << (9.0 >= 8 > 2 < 5);}
}
namespace A143_5{
void test(){if (11 != 13)
    cout << "q";
else
    cout << "j";}
}
namespace A143_3{


bool f(int n){
    cout<<"f";
    return n<=-3;
}

int test(){
    cout<<(f(3) && f(6));
    return 0;
}
}
namespace A143_6{


int f(int a, int b){
    int c = 80;
    if (a)
        return 7;
    if (b == 1)
         c = 0;
    else 
        c = 9;
    return c;
}

int test(){
    cout << f(-3, 4);
    return 0;
}
}
namespace A143_7{



int f(int &x, int &y){
    x = 1;
    y+= 6;
    return x;
}

int test(){
    int a = 8, b = 2;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 5;
        cout << ((a>=3) || ((b-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A143_9{



int a = 7, b = 6, c = 9;

int h(int &b){
    a = 3;
    b += 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 6;
    int c = 8;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A143_10{



int a = 8, b = 4, c = 6;

int f(){
    int a = 8;
    b = 0;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 5;
    b = 6;
    int c = 5;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A144_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A144_0{
void test(){cout << (3 / 5 * 12 % 12);}
}
namespace A144_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 53 / 6 * 6;}
}
namespace A144_2{
void test(){cout << ( 5 >= 6.0 or ! false != 5.0 || 2 <= 7);}
}
namespace A144_4{
void test(){cout << (false >= 5.0 < 8 > 3.0);}
}
namespace A144_5{
void test(){if (16 < 8)
    cout << "g";
else
    cout << "v";}
}
namespace A144_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-1) or f(0));
    return 0;
}
}
namespace A144_6{


int f(int c){
    int x = 93;
    if (c == -3) 
        x = 6;
    if (c > 5)
         return 3;
    else
         x = 7;
    return x;
}

int test(){
    cout << f(-1);
    return 0;
}
}
namespace A144_7{



int f(int &x, int &y){
    x = 1;
    y-= 4;
    return x;
}

int test(){
    int a = 7, b = 8;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 3;
        cout << ((b>4) || ((a-=2) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A144_9{



int a = 3, b = 7, c = 2;

int f(int b){
    a = 3;
    b -= 5;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 1;
    c = 4;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A144_10{



int a = 2, b = 7, c = 8;

int h(){
    a = 2;
    int b = 1;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    b = 9;
    int c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A145_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A145_0{
void test(){cout << (15 % 10 % 15 / 3);}
}
namespace A145_1{
void test(){int a = 3;
cout << a + 8 * 6 / 5 * 7;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A145_2{
void test(){cout << ( 4 > 2.0 || ! 2 == true and 7.0 < 5);}
}
namespace A145_4{
void test(){cout << (6 != 7 <= 3 == 7.0);}
}
namespace A145_5{
void test(){if (14 >= 9)
    cout << "t";
else
    cout << "h";}
}
namespace A145_3{


bool f(int n){
    cout<<"f";
    return n>=1;
}

int test(){
    cout<<(f(-5) and f(-8));
    return 0;
}
}
namespace A145_6{


int h(int a, int b){
    int c = 64;
    if (b != 4)
        return 1;
    else if (a >= 5)
         return 3;
    else 
        c = 2;
    return c;
}

int test(){
    cout << h(-5, 9);
    return 0;
}
}
namespace A145_7{



int f(int &x, int &y){
    x = 4;
    y+= 8;
    return y;
}

int test(){
    int a = 2, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 6;
        cout << ((b>=6) && ((a+=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A145_9{



int a = 6, b = 4, c = 3;

int h(int &a){
    int c;
    a = 1;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 1;
    int b = 2;
    c = 8;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A145_10{



int a = 2, b = 7, c = 1;

int h(){
    int a = 2;
    b = 8;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 5;
    c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A146_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A146_0{
void test(){cout << (4 * 9 * 8 % 10);}
}
namespace A146_1{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" << a;
cout << ":" << a - 67 / 6 * 5;}
}
namespace A146_2{
void test(){cout << (! true > 4 &&  6 >= 4.0 && 8 != 9.0);}
}
namespace A146_4{
void test(){cout << (2.0 == false > 4.0 != 8.0);}
}
namespace A146_5{
void test(){if (4 == 1)
    cout << "s";
else
    cout << "m";}
}
namespace A146_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-7) && f(-9));
    return 0;
}
}
namespace A146_6{


int h(int a, int b){
    int c = 65;
    if (b > -5)
        c = 4;
    if (b < -1)
         return 1;
    else 
        return 8;
    return c;
}

int test(){
    cout << h(-7, 8);
    return 0;
}
}
namespace A146_7{



int f(int &x, int &y){
    x = 1;
    y+= 7;
    return x;
}

int test(){
    int a = 6, b = 9;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 4;
        cout << ((a<=4) || ((b-=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A146_9{



int a = 7, b = 5, c = 0;

int g(int b){
    int c;
    a -= 2;
    b *= 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 7;
    c = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A146_10{



int a = 9, b = 4, c = 0;

int g(){
    int a = 9;
    b = 1;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 2;
    b = 7;
    int c = 4;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A147_8{
namespace B1{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A147_0{
void test(){cout << (9 / 8 / 6 * 5);}
}
namespace A147_1{
void test(){int d = 5;
cout << "d" << ":" << 'd' << ":" << d;
cout << ":" << d - 53 % 15 * 6;}
}
namespace A147_2{
void test(){cout << (! 8.0 <= 3.0 and  7 == false or 3 < 9);}
}
namespace A147_4{
void test(){cout << (2 <= true >= 4 < 9);}
}
namespace A147_5{
void test(){if (18 <= 10)
    cout << "l";
else
    cout << "a";}
}
namespace A147_3{


bool f(int n){
    cout<<"f";
    return n>-1;
}

int test(){
    cout<<(f(7) || f(4));
    return 0;
}
}
namespace A147_6{


int h(int a){
    int z = 72;
    if (a < -1) 
        z = 1;
    else if (a != 1)
         return 5;
    else
         return 2;
    return z;
}

int test(){
    cout << h(-6);
    return 0;
}
}
namespace A147_7{



int f(int &x, int &y){
    x = 3;
    y-= 7;
    return y;
}

int test(){
    int a = 1, b = 8;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 5;
        cout << ((b<7) && ((a+=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A147_9{



int a = 4, b = 8, c = 9;

int f(int &a){
    a = 4;
    b += 1;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 0;
    int c = 3;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A147_10{



int a = 6, b = 8, c = 5;

int f(){
    a = 6;
    int b = 9;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 1;
    c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A148_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    a = a + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A148_0{
void test(){cout << (5 % 5 * 10 * 9);}
}
namespace A148_1{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A148_2{
void test(){cout << (! 3 < false and  8 >= 7 || 4.0 == 9.0);}
}
namespace A148_4{
void test(){cout << (9.0 == 5 < 5.0 > 2);}
}
namespace A148_5{
void test(){if (10 > 15)
    cout << "y";
else
    cout << "s";}
}
namespace A148_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) and f(-7));
    return 0;
}
}
namespace A148_6{


int g(int a, int b){
    int c = 14;
    if (a)
        c = 0;
    else if (a > -2)
         return 5;
    else 
        c = 6;
    return c;
}

int test(){
    cout << g(-1, 5);
    return 0;
}
}
namespace A148_7{



int f(int &x, int &y){
    x = 1;
    y+= 3;
    return y;
}

int test(){
    int a = 6, b = 2;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 7;
        cout << ((b>=3) || ((a+=2) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A148_9{



int a = 2, b = 5, c = 7;

int h(int a){
    int c;
    a = 3;
    b += 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 9;
    c = 2;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A148_10{



int a = 0, b = 3, c = 2;

int g(){
    int a = 0;
    b = 6;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 2;
    c = 9;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A149_8{
namespace B1{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A149_0{
void test(){cout << (8 * 4 % 9 % 4);}
}
namespace A149_1{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A149_2{
void test(){cout << ( 3.0 > 5 || ! 2 != 6 or true <= 5.0);}
}
namespace A149_4{
void test(){cout << (false <= 6 >= 9 != 7);}
}
namespace A149_5{
void test(){if (15 < 14)
    cout << "c";
else
    cout << "e";}
}
namespace A149_3{


bool f(int n){
    cout<<"f";
    return n>-4;
}

int test(){
    cout<<(f(-8) && f(1));
    return 0;
}
}
namespace A149_6{


int f(int a, int b){
    int c = 83;
    if (b != 3)
        return 7;
    else if (a <= -1)
         c = 9;
    else 
        return 7;
    return c;
}

int test(){
    cout << f(9, -3);
    return 0;
}
}
namespace A149_7{



int f(int &x, int &y){
    x = 8;
    y-= 6;
    return x;
}

int test(){
    int a = 7, b = 2;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 9;
        cout << ((b<=5) && ((a-=1) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A149_9{



int a = 6, b = 0, c = 8;

int g(int &b){
    a = 2;
    b *= 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 1;
    c = 3;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A149_10{



int a = 1, b = 6, c = 8;

int f(){
    a = 1;
    int b = 3;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 0;
    c = 7;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A150_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A150_0{
void test(){cout << (12 / 3 / 3 / 6);}
}
namespace A150_1{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' << ":" << "b";}
}
namespace A150_2{
void test(){cout << ( true == 4 or ! 6.0 < 9 and 8 != 8.0);}
}
namespace A150_4{
void test(){cout << (4 != true < 8.0 == 7.0);}
}
namespace A150_5{
void test(){if (0 >= 4)
    cout << "x";
else
    cout << "c";}
}
namespace A150_3{


bool f(int n){
    cout<<"f";
    return n<0;
}

int test(){
    cout<<(f(-3) || f(-4));
    return 0;
}
}
namespace A150_6{


int h(int a, int b){
    int c = 70;
    if (b == -5)
        c = 2;
    if (b < -4)
         c = 4;
    else 
        return 8;
    return c;
}

int test(){
    cout << h(7, -6);
    return 0;
}
}
namespace A150_7{



int f(int &x, int &y){
    x = 1;
    y+= 5;
    return x;
}

int test(){
    int a = 4, b = 7;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 6;
        cout << ((a>5) || ((b+=2) > 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A150_9{



int a = 2, b = 6, c = 1;

int f(int &b){
    int c;
    a = 5;
    b -= 4;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 5;
    int c = 0;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A150_10{



int a = 3, b = 1, c = 0;

int h(){
    a = 3;
    int b = 9;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 4;
    int c = 7;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A151_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A151_0{
void test(){cout << (3 % 15 / 4 % 8);}
}
namespace A151_1{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A151_2{
void test(){cout << (! 7.0 >= 2 &&  2.0 > 7 && false <= 5);}
}
namespace A151_4{
void test(){cout << (3 >= 2.0 <= false > 8);}
}
namespace A151_5{
void test(){if (1 <= 12)
    cout << "d";
else
    cout << "p";}
}
namespace A151_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(0) or f(8));
    return 0;
}
}
namespace A151_6{


int g(int d){
    int y = 20;
    if (d) 
        y = 9;
    if (d >= -4)
         return 9;
    else
         y = 0;
    return y;
}

int test(){
    cout << g(-8);
    return 0;
}
}
namespace A151_7{



int f(int &x, int &y){
    x = 2;
    y-= 8;
    return y;
}

int test(){
    int a = 9, b = 4;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((a<7) && ((b-=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A151_9{



int a = 9, b = 7, c = 8;

int g(int a){
    a = 3;
    b -= 2;
    c = 5;
    return a + b + c;
}

int test(){
    a = 4;
    b = 2;
    int c = 0;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A151_10{



int a = 2, b = 6, c = 6;

int h(){
    a = 2;
    int b = 7;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 5;
    c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A152_8{
namespace B1{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A152_0{
void test(){cout << (10 * 12 % 12 / 15);}
}
namespace A152_1{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A152_2{
void test(){cout << ( true <= 6 && ! 3.0 > 3 and 6.0 == 4);}
}
namespace A152_4{
void test(){cout << (6.0 <= 8 >= true > 6);}
}
namespace A152_5{
void test(){if (5 != 11)
    cout << "f";
else
    cout << "e";}
}
namespace A152_3{


bool f(int n){
    cout<<"f";
    return n>=2;
}

int test(){
    cout<<(f(3) and f(-5));
    return 0;
}
}
namespace A152_6{


int g(int a){
    int u = 25;
    if (a <= 4) 
        return 3;
    if (a == -5)
         u = 4;
    else
         return 2;
    return u;
}

int test(){
    cout << g(2);
    return 0;
}
}
namespace A152_7{



int f(int &x, int &y){
    x = 8;
    y+= 7;
    return x;
}

int test(){
    int a = 6, b = 2;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 9;
        cout << ((a<=3) || ((b+=2) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A152_9{



int a = 8, b = 1, c = 9;

int f(int b){
    a += 2;
    b = 1;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 6;
    int c = 7;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A152_10{



int a = 3, b = 0, c = 4;

int f(){
    a = 3;
    int b = 9;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 5;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A153_8{
namespace B1{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A153_0{
void test(){cout << (6 / 6 * 5 * 12);}
}
namespace A153_1{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' << ":" << b;}
}
namespace A153_2{
void test(){cout << ( 8.0 < 9 and ! false != 9.0 || 3 >= 4);}
}
namespace A153_4{
void test(){cout << (2 != 4.0 == 7 < 3.0);}
}
namespace A153_5{
void test(){if (3 == 6)
    cout << "g";
else
    cout << "k";}
}
namespace A153_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) && f(9));
    return 0;
}
}
namespace A153_6{


int h(int c){
    int w = 23;
    if (c) 
        w = 7;
    else if (c < 3)
         return 8;
    else
         w = 1;
    return w;
}

int test(){
    cout << h(8);
    return 0;
}
}
namespace A153_7{



int f(int &x, int &y){
    x = 4;
    y-= 6;
    return y;
}

int test(){
    int a = 1, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((b<4) && ((a-=1) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A153_9{



int a = 3, b = 4, c = 9;

int h(int &a){
    int c;
    a = 4;
    b *= 1;
    c = 4;
    return a + b + c;
}

int test(){
    a = 2;
    b = 1;
    int c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A153_10{



int a = 8, b = 2, c = 0;

int g(){
    int a = 8;
    b = 6;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 8;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A154_8{
namespace B1{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A154_0{
void test(){cout << (6 % 12 / 3 / 9);}
}
namespace A154_1{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A154_2{
void test(){cout << ( 5 <= 2 || ! 9 != 5.0 && false > 2.0);}
}
namespace A154_4{
void test(){cout << (false <= 3 == 2.0 != 9);}
}
namespace A154_5{
void test(){if (2 != 19)
    cout << "d";
else
    cout << "r";}
}
namespace A154_3{


bool f(int n){
    cout<<"f";
    return n<=3;
}

int test(){
    cout<<(f(-9) || f(2));
    return 0;
}
}
namespace A154_6{


int f(int b){
    int v = 85;
    if (b != -2) 
        v = 6;
    if (b > 0)
         return 5;
    else
         v = 8;
    return v;
}

int test(){
    cout << f(9);
    return 0;
}
}
namespace A154_7{



int f(int &x, int &y){
    x = 1;
    y+= 2;
    return x;
}

int test(){
    int a = 6, b = 9;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 5;
        cout << ((b>=6) && ((a-=1) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A154_9{



int a = 5, b = 6, c = 8;

int g(int b){
    a = 5;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 3;
    int c = 4;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A154_10{



int a = 0, b = 3, c = 1;

int f(){
    a = 0;
    int b = 5;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 9;
    int b = 4;
    c = 2;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A155_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A155_0{
void test(){cout << (8 / 4 * 8 % 3);}
}
namespace A155_1{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A155_2{
void test(){cout << (! 7.0 >= 7 or  8 < 6 or true == 4.0);}
}
namespace A155_4{
void test(){cout << (5.0 >= 4 > true < 5);}
}
namespace A155_5{
void test(){if (12 <= 2)
    cout << "w";
else
    cout << "j";}
}
namespace A155_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(6) or f(-2));
    return 0;
}
}
namespace A155_6{


int f(int a, int b){
    int c = 71;
    if (b >= 4)
        return 6;
    if (a <= 3)
         c = 1;
    else 
        return 3;
    return c;
}

int test(){
    cout << f(-2, -7);
    return 0;
}
}
namespace A155_7{



int f(int &x, int &y){
    x = 4;
    y-= 3;
    return y;
}

int test(){
    int a = 3, b = 6;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 8;
        cout << ((b>5) || ((a+=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A155_9{



int a = 8, b = 1, c = 7;

int h(int &a){
    int c;
    a = 2;
    b += 1;
    c = 5;
    return a + b + c;
}

int test(){
    a = 3;
    b = 2;
    int c = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A155_10{



int a = 8, b = 6, c = 9;

int g(){
    int a = 8;
    b = 7;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 2;
    b = 4;
    int c = 0;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A156_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A156_0{
void test(){cout << (3 * 15 % 5 * 4);}
}
namespace A156_1{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" << c;
cout << ":" << c + 67 % 15 * 5;}
}
namespace A156_2{
void test(){cout << (! 4 != 8 ||  2 > false && 2.0 < 4.0);}
}
namespace A156_4{
void test(){cout << (9 <= 2 < 7.0 > 6.0);}
}
namespace A156_5{
void test(){if (6 >= 7)
    cout << "h";
else
    cout << "s";}
}
namespace A156_3{


bool f(int n){
    cout<<"f";
    return n!=-1;
}

int test(){
    cout<<(f(5) and f(-1));
    return 0;
}
}
namespace A156_6{


int g(int a, int b){
    int c = 13;
    if (a)
        c = 9;
    else if (a == 5)
         c = 0;
    else 
        return 5;
    return c;
}

int test(){
    cout << g(-9, -8);
    return 0;
}
}
namespace A156_7{



int f(int &x, int &y){
    x = 9;
    y-= 7;
    return y;
}

int test(){
    int a = 5, b = 4;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((a>6) || ((b-=2) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A156_9{



int a = 5, b = 0, c = 6;

int f(int &a){
    a -= 3;
    b *= 4;
    c = 3;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 2;
    c = 5;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A156_10{



int a = 1, b = 3, c = 4;

int h(){
    int a = 1;
    b = 0;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 9;
    int c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A157_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A157_0{
void test(){cout << (9 % 5 * 10 * 12);}
}
namespace A157_1{
void test(){int b = 5;
cout << b - 4 * 9 / 5 * 4;
cout << ":" << 'b' << ":" << b << ":" << "b";}
}
namespace A157_2{
void test(){cout << ( 3 >= 6.0 and ! 7 == true or 9 <= 3.0);}
}
namespace A157_4{
void test(){cout << (6 != 3.0 == false >= 9.0);}
}
namespace A157_5{
void test(){if (8 == 3)
    cout << "j";
else
    cout << "c";}
}
namespace A157_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(3) or f(-5));
    return 0;
}
}
namespace A157_6{


int f(int d){
    int z = 63;
    if (d <= 5) 
        return 5;
    else if (d >= -1)
         z = 7;
    else
         return 0;
    return z;
}

int test(){
    cout << f(1);
    return 0;
}
}
namespace A157_7{



int f(int &x, int &y){
    x = 8;
    y+= 9;
    return x;
}

int test(){
    int a = 3, b = 5;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 2;
        cout << ((a<=4) && ((b+=1) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A157_9{



int a = 4, b = 9, c = 8;

int h(int b){
    int c;
    a = 5;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 6;
    int c = 7;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A157_10{



int a = 2, b = 6, c = 5;

int f(){
    a = 2;
    int b = 7;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 4;
    b = 2;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A158_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A158_0{
void test(){cout << (5 * 3 / 15 % 6);}
}
namespace A158_1{
void test(){int b = 9;
cout << b << ":" << 'b' << ":" << "b";
cout << ":" << b + 67 % 15 / 5;}
}
namespace A158_2{
void test(){cout << (! 6 < 9.0 &&  5 == 8.0 || true >= 7);}
}
namespace A158_4{
void test(){cout << (8 >= 7 <= 3 != 5);}
}
namespace A158_5{
void test(){if (7 > 17)
    cout << "i";
else
    cout << "n";}
}
namespace A158_3{


bool f(int n){
    cout<<"f";
    return n==-3;
}

int test(){
    cout<<(f(-7) && f(6));
    return 0;
}
}
namespace A158_6{


int h(int b){
    int x = 82;
    if (b) 
        return 4;
    else if (b == -5)
         x = 1;
    else
         x = 2;
    return x;
}

int test(){
    cout << h(-4);
    return 0;
}
}
namespace A158_7{



int f(int &x, int &y){
    x = 4;
    y+= 6;
    return y;
}

int test(){
    int a = 8, b = 5;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 1;
        cout << ((b>=3) && ((a+=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A158_9{



int a = 1, b = 3, c = 4;

int g(int a){
    int c;
    a = 4;
    b -= 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 2;
    int c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A158_10{



int a = 0, b = 9, c = 5;

int h(){
    a = 0;
    int b = 8;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 4;
    int c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A159_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A159_0{
void test(){cout << (4 / 9 % 4 / 15);}
}
namespace A159_1{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A159_2{
void test(){cout << (! false > 6 or  5.0 <= 4 and 7.0 != 8);}
}
namespace A159_4{
void test(){cout << (8.0 == 4.0 > 4 < true);}
}
namespace A159_5{
void test(){if (13 < 18)
    cout << "k";
else
    cout << "b";}
}
namespace A159_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) || f(-2));
    return 0;
}
}
namespace A159_6{


int g(int a){
    int y = 95;
    if (a >= -3) 
        return 6;
    if (a == -4)
         return 3;
    else
         y = 9;
    return y;
}

int test(){
    cout << g(4);
    return 0;
}
}
namespace A159_7{



int f(int &x, int &y){
    x = 3;
    y-= 4;
    return x;
}

int test(){
    int a = 3, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 5;
        cout << ((b<7) || ((a-=1) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A159_9{



int a = 3, b = 8, c = 7;

int f(int &b){
    a *= 3;
    b += 1;
    c = 5;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 5;
    c = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A159_10{



int a = 6, b = 5, c = 7;

int g(){
    a = 6;
    int b = 1;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 2;
    b = 3;
    int c = 0;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A160_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A160_0{
void test(){cout << (10 / 8 * 9 * 5);}
}
namespace A160_1{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 59 / 5 / 6;}
}
namespace A160_2{
void test(){cout << ( 2 < 9 || ! 3 > false or 2.0 == 7.0);}
}
namespace A160_4{
void test(){cout << (8.0 != true >= 6 < 6.0);}
}
namespace A160_5{
void test(){if (13 <= 17)
    cout << "q";
else
    cout << "o";}
}
namespace A160_3{


bool f(int n){
    cout<<"f";
    return n<-4;
}

int test(){
    cout<<(f(0) or f(4));
    return 0;
}
}
namespace A160_6{


int g(int c){
    int w = 74;
    if (c <= -2) 
        w = 0;
    else if (c < 3)
         return 3;
    else
         return 8;
    return w;
}

int test(){
    cout << g(-9);
    return 0;
}
}
namespace A160_7{



int f(int &x, int &y){
    x = 9;
    y-= 8;
    return x;
}

int test(){
    int a = 6, b = 7;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((a>=5) && ((b+=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A160_9{



int a = 4, b = 9, c = 8;

int f(int &b){
    int c;
    a = 2;
    b += 5;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 2;
    c = 1;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A160_10{



int a = 6, b = 0, c = 4;

int f(){
    a = 6;
    int b = 8;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 1;
    b = 9;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A161_8{
namespace B1{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A161_0{
void test(){cout << (15 * 6 % 6 % 8);}
}
namespace A161_1{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A161_2{
void test(){cout << (! 5.0 != true and  9.0 >= 5 && 8 <= 3);}
}
namespace A161_4{
void test(){cout << (4 > 9 <= false == 5);}
}
namespace A161_5{
void test(){if (6 > 13)
    cout << "v";
else
    cout << "q";}
}
namespace A161_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(5) || f(-4));
    return 0;
}
}
namespace A161_6{


int f(int d){
    int y = 15;
    if (d != 2) 
        y = 6;
    if (d > 1)
         return 7;
    else
         y = 4;
    return y;
}

int test(){
    cout << f(6);
    return 0;
}
}
namespace A161_7{



int f(int &x, int &y){
    x = 2;
    y+= 9;
    return y;
}

int test(){
    int a = 6, b = 8;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 1;
        cout << ((a<=7) || ((b-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A161_9{



int a = 3, b = 6, c = 7;

int g(int a){
    a = 4;
    b = 3;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 2;
    int c = 3;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A161_10{



int a = 2, b = 5, c = 4;

int h(){
    int a = 2;
    b = 1;
    c = 0;
    return a + b + c;
}

int test(){
    int a = 2;
    int b = 5;
    c = 6;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A162_8{
namespace B1{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A162_0{
void test(){cout << (12 % 10 / 12 / 10);}
}
namespace A162_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 53 / 6 * 6;}
}
namespace A162_2{
void test(){cout << ( 8.0 < 9 or ! 7 <= true and 6.0 > 2);}
}
namespace A162_4{
void test(){cout << (7 == 7.0 != 5.0 <= 3);}
}
namespace A162_5{
void test(){if (18 < 12)
    cout << "x";
else
    cout << "z";}
}
namespace A162_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-9) and f(-1));
    return 0;
}
}
namespace A162_6{


int f(int a, int b){
    int c = 82;
    if (a != 1)
        return 8;
    else if (a >= -2)
         c = 7;
    else 
        return 3;
    return c;
}

int test(){
    cout << f(-6, 2);
    return 0;
}
}
namespace A162_7{



int f(int &x, int &y){
    x = 8;
    y-= 3;
    return y;
}

int test(){
    int a = 4, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 5;
        cout << ((a>3) && ((b+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A162_9{



int a = 8, b = 7, c = 5;

int h(int &b){
    a -= 1;
    b *= 2;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 0;
    int c = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A162_10{



int a = 3, b = 8, c = 7;

int g(){
    int a = 3;
    b = 9;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 1;
    b = 9;
    int c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A163_8{
namespace B1{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A163_0{
void test(){cout << (15 * 15 % 15 / 5);}
}
namespace A163_1{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A163_2{
void test(){cout << (! 4.0 != 4 &&  3.0 == false || 6 >= 5);}
}
namespace A163_4{
void test(){cout << (3.0 >= 8 < 2 > 9);}
}
namespace A163_5{
void test(){if (11 >= 1)
    cout << "y";
else
    cout << "d";}
}
namespace A163_3{


bool f(int n){
    cout<<"f";
    return n>=2;
}

int test(){
    cout<<(f(1) && f(7));
    return 0;
}
}
namespace A163_6{


int h(int a){
    int u = 10;
    if (a) 
        return 5;
    else if (a == 4)
         u = 9;
    else
         return 1;
    return u;
}

int test(){
    cout << h(-7);
    return 0;
}
}
namespace A163_7{



int f(int &x, int &y){
    x = 4;
    y+= 6;
    return x;
}

int test(){
    int a = 1, b = 5;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 2;
        cout << ((a<4) || ((b-=2) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A163_9{



int a = 1, b = 9, c = 3;

int h(int a){
    int c;
    a *= 4;
    b = 2;
    c = 5;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 4;
    c = 6;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A163_10{



int a = 0, b = 5, c = 4;

int f(){
    a = 0;
    int b = 6;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 7;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A164_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A164_0{
void test(){cout << (10 / 6 / 4 % 8);}
}
namespace A164_1{
void test(){int a = 9;
cout << a + 6 * 8 / 9 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A164_2{
void test(){cout << (! 3 >= 5 &&  9.0 <= 6.0 or 4 != true);}
}
namespace A164_4{
void test(){cout << (4.0 <= true > 3 < 2.0);}
}
namespace A164_5{
void test(){if (10 != 2)
    cout << "c";
else
    cout << "a";}
}
namespace A164_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) && f(9));
    return 0;
}
}
namespace A164_6{


int g(int a, int b){
    int c = 95;
    if (b > 2)
        c = 2;
    if (b < -3)
         return 1;
    else 
        c = 0;
    return c;
}

int test(){
    cout << g(6, -5);
    return 0;
}
}
namespace A164_7{



int f(int &x, int &y){
    x = 8;
    y-= 9;
    return y;
}

int test(){
    int a = 8, b = 4;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 5;
        cout << ((a<=6) && ((b+=1) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A164_9{



int a = 0, b = 2, c = 5;

int f(int &b){
    a += 4;
    b = 1;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 8;
    int c = 7;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A164_10{



int a = 1, b = 4, c = 8;

int h(){
    a = 1;
    int b = 2;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 9;
    c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A165_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    a = a + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A165_0{
void test(){cout << (5 % 8 * 6 * 10);}
}
namespace A165_1{
void test(){int d = 6;
cout << d - 67 % 15 * 5;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A165_2{
void test(){cout << ( 4.0 == 7 or ! 8 < 7.0 || 9 > false);}
}
namespace A165_4{
void test(){cout << (9.0 >= 4 != 7 == false);}
}
namespace A165_5{
void test(){if (1 == 4)
    cout << "l";
else
    cout << "h";}
}
namespace A165_3{


bool f(int n){
    cout<<"f";
    return n==4;
}

int test(){
    cout<<(f(-8) and f(-3));
    return 0;
}
}
namespace A165_6{


int h(int d){
    int x = 13;
    if (d > 0) 
        x = 2;
    if (d <= 4)
         return 5;
    else
         x = 7;
    return x;
}

int test(){
    cout << h(7);
    return 0;
}
}
namespace A165_7{



int f(int &x, int &y){
    x = 3;
    y+= 1;
    return x;
}

int test(){
    int a = 6, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 8;
        cout << ((b<7) || ((a-=2) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A165_9{



int a = 7, b = 5, c = 0;

int g(int a){
    int c;
    a -= 5;
    b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 9;
    c = 4;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A165_10{



int a = 5, b = 7, c = 0;

int g(){
    a = 5;
    int b = 4;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 9;
    b = 1;
    int c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A166_8{
namespace B1{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A166_0{
void test(){cout << (3 * 3 / 9 * 12);}
}
namespace A166_1{
void test(){int d = 2;
cout << d + 48 / 6 * 5;
cout << ":" << 'd' << ":" << "d" << ":" << d;}
}
namespace A166_2{
void test(){cout << ( 2 > 6 || ! true != 3 && 5.0 < 3.0);}
}
namespace A166_4{
void test(){cout << (9.0 <= 5 == 7.0 > 2);}
}
namespace A166_5{
void test(){if (17 != 8)
    cout << "u";
else
    cout << "y";}
}
namespace A166_3{


bool f(int n){
    cout<<"f";
    return n>0;
}

int test(){
    cout<<(f(2) || f(-5));
    return 0;
}
}
namespace A166_6{


int f(int c){
    int z = 18;
    if (c >= 5) 
        return 4;
    else if (c != -5)
         z = 9;
    else
         return 8;
    return z;
}

int test(){
    cout << f(0);
    return 0;
}
}
namespace A166_7{



int f(int &x, int &y){
    x = 9;
    y-= 2;
    return y;
}

int test(){
    int a = 1, b = 5;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 3;
        cout << ((b>4) && ((a-=1) > 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A166_9{



int a = 3, b = 2, c = 6;

int f(int a){
    a = 4;
    b *= 3;
    c = 1;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 9;
    c = 8;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A166_10{



int a = 2, b = 3, c = 1;

int h(){
    a = 2;
    int b = 2;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 6;
    c = 9;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A167_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A167_0{
void test(){cout << (4 % 10 % 12 % 4);}
}
namespace A167_1{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a << ":" << 'a';}
}
namespace A167_2{
void test(){cout << (! 5 >= 7 and  9 == 8.0 and false <= 2.0);}
}
namespace A167_4{
void test(){cout << (8 >= false != 6.0 < 6);}
}
namespace A167_5{
void test(){if (9 == 7)
    cout << "a";
else
    cout << "i";}
}
namespace A167_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) or f(-1));
    return 0;
}
}
namespace A167_6{


int h(int a, int b){
    int c = 56;
    if (b)
        return 5;
    if (a == 0)
         c = 6;
    else 
        c = 9;
    return c;
}

int test(){
    cout << h(5, -1);
    return 0;
}
}
namespace A167_7{



int f(int &x, int &y){
    x = 9;
    y+= 7;
    return x;
}

int test(){
    int a = 8, b = 4;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 2;
        cout << ((a>=3) || ((b+=2) >= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A167_9{



int a = 2, b = 6, c = 5;

int h(int &b){
    int c;
    a = 3;
    b = 5;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 7;
    c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A167_10{



int a = 0, b = 3, c = 8;

int f(){
    int a = 0;
    b = 4;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 1;
    b = 9;
    int c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A168_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A168_0{
void test(){cout << (9 / 4 * 5 / 6);}
}
namespace A168_1{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A168_2{
void test(){cout << (! 8 != 6.0 or  2 <= 6 and 4.0 < true);}
}
namespace A168_4{
void test(){cout << (2.0 <= 6 == 9 != true);}
}
namespace A168_5{
void test(){if (7 >= 18)
    cout << "p";
else
    cout << "u";}
}
namespace A168_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-7) || f(-3));
    return 0;
}
}
namespace A168_6{


int h(int a, int b){
    int c = 22;
    if (b <= 2)
        return 4;
    else if (a > 0)
         return 1;
    else 
        c = 8;
    return c;
}

int test(){
    cout << h(0, -9);
    return 0;
}
}
namespace A168_7{



int f(int &x, int &y){
    x = 5;
    y-= 9;
    return x;
}

int test(){
    int a = 6, b = 4;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 5;
        cout << ((b<=5) || ((a-=2) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A168_9{



int a = 0, b = 4, c = 1;

int g(int &a){
    a -= 2;
    b += 5;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 5;
    c = 9;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A168_10{



int a = 0, b = 8, c = 6;

int g(){
    a = 0;
    int b = 5;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 6;
    int c = 2;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A169_8{
namespace B1{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A169_0{
void test(){cout << (12 / 5 / 10 * 15);}
}
namespace A169_1{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 48 % 15 * 6;}
}
namespace A169_2{
void test(){cout << (! false == 4 &&  2 > 3 || 7.0 >= 8.0);}
}
namespace A169_4{
void test(){cout << (3 < 2 > 3.0 >= false);}
}
namespace A169_5{
void test(){if (15 > 11)
    cout << "m";
else
    cout << "m";}
}
namespace A169_3{


bool f(int n){
    cout<<"f";
    return n!=1;
}

int test(){
    cout<<(f(0) and f(-4));
    return 0;
}
}
namespace A169_6{


int g(int a, int b){
    int c = 81;
    if (a >= 5)
        c = 3;
    else if (b != -3)
         return 2;
    else 
        c = 7;
    return c;
}

int test(){
    cout << g(2, 1);
    return 0;
}
}
namespace A169_7{



int f(int &x, int &y){
    x = 2;
    y+= 3;
    return y;
}

int test(){
    int a = 8, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 7;
        cout << ((a>=6) && ((b+=1) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A169_9{



int a = 6, b = 4, c = 8;

int f(int b){
    int c;
    a *= 1;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 2;
    int c = 0;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A169_10{



int a = 0, b = 8, c = 4;

int f(){
    a = 0;
    int b = 9;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 1;
    b = 5;
    int c = 7;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A170_8{
namespace B1{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A170_0{
void test(){cout << (6 % 12 * 3 / 3);}
}
namespace A170_1{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A170_2{
void test(){cout << ( true <= 2.0 || ! 7 != 5.0 && 8 >= 9);}
}
namespace A170_4{
void test(){cout << (5 < 4.0 > 4 >= true);}
}
namespace A170_5{
void test(){if (16 <= 5)
    cout << "t";
else
    cout << "g";}
}
namespace A170_3{


bool f(int n){
    cout<<"f";
    return n<=-2;
}

int test(){
    cout<<(f(-6) && f(6));
    return 0;
}
}
namespace A170_6{


int g(int b){
    int v = 33;
    if (b) 
        v = 6;
    if (b < -2)
         return 0;
    else
         v = 3;
    return v;
}

int test(){
    cout << g(-5);
    return 0;
}
}
namespace A170_7{



int f(int &x, int &y){
    x = 1;
    y+= 2;
    return y;
}

int test(){
    int a = 6, b = 4;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 3;
        cout << ((a>5) || ((b+=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A170_9{



int a = 2, b = 8, c = 0;

int h(int &b){
    int c;
    a += 3;
    b = 1;
    c = 4;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 7;
    int c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A170_10{



int a = 4, b = 9, c = 0;

int g(){
    a = 4;
    int b = 3;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 2;
    c = 1;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A171_8{
namespace B1{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A171_0{
void test(){cout << (8 * 9 % 8 % 9);}
}
namespace A171_1{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A171_2{
void test(){cout << (! 4 < 5 and  9.0 == 3.0 or false > 6);}
}
namespace A171_4{
void test(){cout << (5.0 <= 8 != 7 == 8.0);}
}
namespace A171_5{
void test(){if (8 < 9)
    cout << "e";
else
    cout << "l";}
}
namespace A171_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-9) or f(2));
    return 0;
}
}
namespace A171_6{


int f(int a, int b){
    int c = 55;
    if (a)
        return 4;
    if (b < -2)
         c = 5;
    else 
        return 9;
    return c;
}

int test(){
    cout << f(-8, -4);
    return 0;
}
}
namespace A171_7{



int f(int &x, int &y){
    x = 4;
    y-= 7;
    return x;
}

int test(){
    int a = 9, b = 6;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 1;
        cout << ((b<7) && ((a-=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A171_9{



int a = 6, b = 5, c = 4;

int g(int a){
    a -= 2;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 9;
    b = 9;
    int c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A171_10{



int a = 6, b = 5, c = 8;

int h(){
    a = 6;
    int b = 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 1;
    int b = 0;
    c = 9;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A172_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A172_0{
void test(){cout << (10 / 10 / 3 / 3);}
}
namespace A172_1{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d - 59 / 5 / 6;}
}
namespace A172_2{
void test(){cout << ( 8.0 >= 4 and ! 5 > 3.0 and true == 7);}
}
namespace A172_4{
void test(){cout << (5.0 == 8 < 6 >= 4);}
}
namespace A172_5{
void test(){if (5 > 19)
    cout << "b";
else
    cout << "w";}
}
namespace A172_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) and f(1));
    return 0;
}
}
namespace A172_6{


int f(int a, int b){
    int c = 16;
    if (a != 3)
        return 6;
    if (b < -1)
         c = 0;
    else 
        c = 0;
    return c;
}

int test(){
    cout << f(-4, -2);
    return 0;
}
}
namespace A172_7{



int f(int &x, int &y){
    x = 1;
    y-= 8;
    return y;
}

int test(){
    int a = 2, b = 4;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((a<6) && ((b+=2) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A172_9{



int a = 4, b = 0, c = 3;

int f(int b){
    int c;
    a += 2;
    b -= 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 2;
    int c = 5;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A172_10{



int a = 3, b = 7, c = 2;

int g(){
    int a = 3;
    b = 6;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 1;
    b = 9;
    int c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A173_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A173_0{
void test(){cout << (12 % 4 % 10 * 8);}
}
namespace A173_1{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a + 53 / 6 / 5;}
}
namespace A173_2{
void test(){cout << (! 6 != 9 ||  2.0 < 5.0 or 3 <= false);}
}
namespace A173_4{
void test(){cout << (true <= 8.0 != 9 > 7.0);}
}
namespace A173_5{
void test(){if (14 >= 10)
    cout << "o";
else
    cout << "x";}
}
namespace A173_3{


bool f(int n){
    cout<<"f";
    return n<-4;
}

int test(){
    cout<<(f(5) or f(3));
    return 0;
}
}
namespace A173_6{


int g(int a){
    int x = 57;
    if (a <= -3) 
        return 2;
    else if (a > -4)
         x = 1;
    else
         x = 6;
    return x;
}

int test(){
    cout << g(-2);
    return 0;
}
}
namespace A173_7{



int f(int &x, int &y){
    x = 7;
    y+= 6;
    return x;
}

int test(){
    int a = 9, b = 1;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((b<=4) || ((a-=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A173_9{



int a = 6, b = 7, c = 0;

int h(int &a){
    a = 1;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 2;
    c = 4;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A173_10{



int a = 4, b = 5, c = 6;

int f(){
    int a = 4;
    b = 2;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 7;
    c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A174_8{
namespace B1{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A174_0{
void test(){cout << (8 * 3 * 9 % 12);}
}
namespace A174_1{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" << "d";
cout << ":" << d + 48 % 15 * 5;}
}
namespace A174_2{
void test(){cout << ( 4.0 == 2 && ! 9.0 != true && 8 > 5);}
}
namespace A174_4{
void test(){cout << (3 != 5 <= 2.0 == false);}
}
namespace A174_5{
void test(){if (0 == 6)
    cout << "z";
else
    cout << "t";}
}
namespace A174_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(4) || f(9));
    return 0;
}
}
namespace A174_6{


int h(int d){
    int v = 24;
    if (d) 
        return 3;
    if (d != -1)
         v = 5;
    else
         return 1;
    return v;
}

int test(){
    cout << h(3);
    return 0;
}
}
namespace A174_7{



int f(int &x, int &y){
    x = 5;
    y-= 6;
    return y;
}

int test(){
    int a = 3, b = 2;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 1;
        cout << ((a>3) && ((b+=2) >= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A174_9{



int a = 9, b = 1, c = 5;

int g(int &b){
    a = 3;
    b *= 5;
    c = 4;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 8;
    c = 7;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A174_10{



int a = 5, b = 9, c = 8;

int h(){
    int a = 5;
    b = 1;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 0;
    b = 2;
    int c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A175_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A175_0{
void test(){cout << (5 / 9 * 6 / 6);}
}
namespace A175_1{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" << b;
cout << ":" << b + 59 / 5 * 6;}
}
namespace A175_2{
void test(){cout << ( 7.0 <= 3 or ! 8 < 6.0 || 4 >= false);}
}
namespace A175_4{
void test(){cout << (9.0 >= 7 < 3.0 > 2);}
}
namespace A175_5{
void test(){if (4 <= 16)
    cout << "r";
else
    cout << "p";}
}
namespace A175_3{


bool f(int n){
    cout<<"f";
    return n<=2;
}

int test(){
    cout<<(f(8) && f(-2));
    return 0;
}
}
namespace A175_6{


int g(int a, int b){
    int c = 87;
    if (a <= -4)
        return 2;
    else if (b == 1)
         c = 1;
    else 
        return 3;
    return c;
}

int test(){
    cout << g(4, 3);
    return 0;
}
}
namespace A175_7{



int f(int &x, int &y){
    x = 7;
    y+= 4;
    return x;
}

int test(){
    int a = 5, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 9;
        cout << ((b>=3) || ((a-=1) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A175_9{



int a = 4, b = 0, c = 1;

int f(int a){
    int c;
    a += 3;
    b -= 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 5;
    c = 8;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A175_10{



int a = 8, b = 0, c = 4;

int g(){
    int a = 8;
    b = 3;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 1;
    c = 5;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A176_8{
namespace B1{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A176_0{
void test(){cout << (4 % 5 / 12 * 5);}
}
namespace A176_1{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' << ":" << "c";}
}
namespace A176_2{
void test(){cout << (! 5.0 <= false ||  6 != 7 or 9 > 4.0);}
}
namespace A176_4{
void test(){cout << (true >= 5 <= 6.0 != false);}
}
namespace A176_5{
void test(){if (3 < 0)
    cout << "n";
else
    cout << "v";}
}
namespace A176_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-4) || f(-2));
    return 0;
}
}
namespace A176_6{


int f(int b){
    int w = 59;
    if (b < 1) 
        return 7;
    if (b >= 3)
         w = 8;
    else
         return 0;
    return w;
}

int test(){
    cout << f(3);
    return 0;
}
}
namespace A176_7{



int f(int &x, int &y){
    x = 5;
    y-= 7;
    return y;
}

int test(){
    int a = 4, b = 8;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 3;
        cout << ((a<4) && ((b+=1) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A176_9{



int a = 3, b = 9, c = 7;

int h(int b){
    int c;
    a = 4;
    b *= 5;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 2;
    c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A176_10{



int a = 6, b = 7, c = 5;

int h(){
    int a = 6;
    b = 6;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 0;
    b = 2;
    int c = 9;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A177_8{
namespace B1{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A177_0{
void test(){cout << (15 * 15 % 15 % 4);}
}
namespace A177_1{
void test(){int a = 4;
cout << a + 59 % 15 / 5;
cout << ":" << a << ":" << 'a' << ":" << "a";}
}
namespace A177_2{
void test(){cout << (! true >= 2 &&  5 < 7.0 and 6 == 2.0);}
}
namespace A177_4{
void test(){cout << (3 < 6 == 8 > 4.0);}
}
namespace A177_5{
void test(){if (19 != 14)
    cout << "s";
else
    cout << "f";}
}
namespace A177_3{


bool f(int n){
    cout<<"f";
    return n!=0;
}

int test(){
    cout<<(f(7) or f(-1));
    return 0;
}
}
namespace A177_6{


int g(int c){
    int y = 31;
    if (c == 2) 
        y = 2;
    else if (c == 1)
         y = 4;
    else
         return 9;
    return y;
}

int test(){
    cout << g(7);
    return 0;
}
}
namespace A177_7{



int f(int &x, int &y){
    x = 1;
    y+= 6;
    return x;
}

int test(){
    int a = 8, b = 2;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 1;
        cout << ((b<=5) || ((a-=2) > 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A177_9{



int a = 0, b = 8, c = 5;

int g(int &a){
    a = 3;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 4;
    int c = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A177_10{



int a = 8, b = 1, c = 7;

int f(){
    int a = 8;
    b = 3;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 4;
    b = 0;
    int c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A178_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A178_0{
void test(){cout << (3 / 12 * 5 * 9);}
}
namespace A178_1{
void test(){int d = 5;
cout << "d" << ":" << 'd' << ":" << d;
cout << ":" << d - 53 % 15 * 6;}
}
namespace A178_2{
void test(){cout << ( 9.0 == 2 or ! 3.0 < false && 3 <= 8);}
}
namespace A178_4{
void test(){cout << (7 == 8.0 < true >= 9);}
}
namespace A178_5{
void test(){if (12 < 15)
    cout << "s";
else
    cout << "w";}
}
namespace A178_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(3) and f(-7));
    return 0;
}
}
namespace A178_6{


int h(int a, int b){
    int c = 60;
    if (a)
        return 7;
    else if (b >= 4)
         c = 5;
    else 
        return 8;
    return c;
}

int test(){
    cout << h(8, 7);
    return 0;
}
}
namespace A178_7{



int f(int &x, int &y){
    x = 7;
    y-= 5;
    return x;
}

int test(){
    int a = 9, b = 9;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 4;
        cout << ((a>6) && ((b+=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A178_9{



int a = 3, b = 1, c = 6;

int h(int &a){
    int c;
    a = 4;
    b *= 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 3;
    int c = 2;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A178_10{



int a = 9, b = 1, c = 7;

int h(){
    int a = 9;
    b = 6;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 2;
    c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A179_8{
namespace B1{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A179_0{
void test(){cout << (9 % 8 / 8 / 10);}
}
namespace A179_1{
void test(){int a = 7;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a - 48 / 6 * 5;}
}
namespace A179_2{
void test(){cout << ( 4 != 7 and ! 9 >= 8.0 || true > 6.0);}
}
namespace A179_4{
void test(){cout << (2 != 9.0 > 4 <= 4.0);}
}
namespace A179_5{
void test(){if (2 != 3)
    cout << "h";
else
    cout << "b";}
}
namespace A179_3{


bool f(int n){
    cout<<"f";
    return n>=-1;
}

int test(){
    cout<<(f(-9) && f(5));
    return 0;
}
}
namespace A179_6{


int f(int a, int b){
    int c = 59;
    if (b > -5)
        c = 6;
    if (a < -2)
         c = 4;
    else 
        return 9;
    return c;
}

int test(){
    cout << f(1, -6);
    return 0;
}
}
namespace A179_7{



int f(int &x, int &y){
    x = 2;
    y+= 3;
    return y;
}

int test(){
    int a = 8, b = 5;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 6;
        cout << ((b>=7) || ((a-=2) >= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A179_9{



int a = 0, b = 1, c = 7;

int f(int b){
    a += 1;
    b = 2;
    c = 4;
    return a + b + c;
}

int test(){
    a = 8;
    b = 4;
    int c = 9;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A179_10{



int a = 5, b = 4, c = 9;

int g(){
    a = 5;
    int b = 1;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 8;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A180_8{
namespace B1{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A180_0{
void test(){cout << (6 * 6 % 4 % 15);}
}
namespace A180_1{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d << ":" << 'd';}
}
namespace A180_2{
void test(){cout << (! 2 > 9.0 ||  true == 3 and 8.0 != 7);}
}
namespace A180_4{
void test(){cout << (2 > 9 < false == 7.0);}
}
namespace A180_5{
void test(){if (8 == 14)
    cout << "d";
else
    cout << "j";}
}
namespace A180_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) or f(-3));
    return 0;
}
}
namespace A180_6{


int h(int a){
    int z = 36;
    if (a) 
        z = 7;
    else if (a > -4)
         return 0;
    else
         z = 9;
    return z;
}

int test(){
    cout << h(-1);
    return 0;
}
}
namespace A180_7{



int f(int &x, int &y){
    x = 2;
    y+= 9;
    return y;
}

int test(){
    int a = 7, b = 1;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 8;
        cout << ((b>=7) || ((a-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A180_9{



int a = 8, b = 1, c = 3;

int g(int a){
    a = 2;
    b -= 5;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 4;
    c = 9;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A180_10{



int a = 3, b = 9, c = 4;

int f(){
    int a = 3;
    b = 7;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 0;
    int c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A181_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A181_0{
void test(){cout << (9 * 10 * 9 * 15);}
}
namespace A181_1{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A181_2{
void test(){cout << (! 6.0 <= 4 &&  9 < 5 || 4.0 >= false);}
}
namespace A181_4{
void test(){cout << (5 >= true <= 8 != 3);}
}
namespace A181_5{
void test(){if (9 > 4)
    cout << "e";
else
    cout << "r";}
}
namespace A181_3{


bool f(int n){
    cout<<"f";
    return n==3;
}

int test(){
    cout<<(f(-5) && f(1));
    return 0;
}
}
namespace A181_6{


int g(int a, int b){
    int c = 50;
    if (b)
        c = 9;
    if (a > 4)
         return 1;
    else 
        c = 0;
    return c;
}

int test(){
    cout << g(-3, 9);
    return 0;
}
}
namespace A181_7{



int f(int &x, int &y){
    x = 2;
    y-= 3;
    return x;
}

int test(){
    int a = 1, b = 4;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 8;
        cout << ((a<=3) && ((b+=2) >= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A181_9{



int a = 7, b = 2, c = 6;

int f(int &b){
    int c;
    a = 3;
    b = 4;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 5;
    c = 0;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A181_10{



int a = 6, b = 5, c = 0;

int f(){
    int a = 6;
    b = 9;
    int c = 1;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 3;
    c = 2;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A182_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A182_0{
void test(){cout << (4 % 9 / 15 / 4);}
}
namespace A182_1{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A182_2{
void test(){cout << (! 6 > 7.0 and  false >= 3.0 or 8 != 3);}
}
namespace A182_4{
void test(){cout << (3.0 <= 6.0 >= 4 == 6);}
}
namespace A182_5{
void test(){if (3 <= 11)
    cout << "b";
else
    cout << "p";}
}
namespace A182_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(4) || f(2));
    return 0;
}
}
namespace A182_6{


int h(int a, int b){
    int c = 90;
    if (b != 2)
        return 6;
    else if (a >= 3)
         c = 7;
    else 
        return 3;
    return c;
}

int test(){
    cout << h(-4, -8);
    return 0;
}
}
namespace A182_7{



int f(int &x, int &y){
    x = 9;
    y-= 7;
    return y;
}

int test(){
    int a = 2, b = 8;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 3;
        cout << ((a>4) || ((b+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A182_9{



int a = 4, b = 1, c = 8;

int h(int b){
    int c;
    a -= 5;
    b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 2;
    c = 9;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A182_10{



int a = 8, b = 7, c = 6;

int h(){
    a = 8;
    int b = 5;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 0;
    int c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A183_8{
namespace B1{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A183_0{
void test(){cout << (15 / 5 % 3 % 10);}
}
namespace A183_1{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A183_2{
void test(){cout << (! 8 < 5 or  2.0 == 5.0 && 2 <= true);}
}
namespace A183_4{
void test(){cout << (2.0 != 7 < 5.0 > false);}
}
namespace A183_5{
void test(){if (4 >= 5)
    cout << "j";
else
    cout << "s";}
}
namespace A183_3{


bool f(int n){
    cout<<"f";
    return n>1;
}

int test(){
    cout<<(f(-8) and f(6));
    return 0;
}
}
namespace A183_6{


int f(int b){
    int u = 46;
    if (b >= -2) 
        return 4;
    if (b < 3)
         u = 6;
    else
         return 1;
    return u;
}

int test(){
    cout << f(-4);
    return 0;
}
}
namespace A183_7{



int f(int &x, int &y){
    x = 5;
    y+= 4;
    return x;
}

int test(){
    int a = 1, b = 7;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 7;
        cout << ((a<5) && ((b-=2) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A183_9{



int a = 7, b = 6, c = 4;

int g(int &a){
    a += 4;
    b *= 3;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 2;
    int c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A183_10{



int a = 7, b = 6, c = 1;

int g(){
    a = 7;
    int b = 2;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 5;
    int c = 4;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A184_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A184_0{
void test(){cout << (12 % 8 / 5 % 5);}
}
namespace A184_1{
void test(){int a = 3;
cout << a + 8 * 6 / 5 * 7;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A184_2{
void test(){cout << (! 4 > 9 or  7.0 != 7 or false <= 6.0);}
}
namespace A184_4{
void test(){cout << (7.0 <= 7 == 3.0 > 2);}
}
namespace A184_5{
void test(){if (12 == 19)
    cout << "t";
else
    cout << "i";}
}
namespace A184_3{


bool f(int n){
    cout<<"f";
    return n<-2;
}

int test(){
    cout<<(f(9) or f(-6));
    return 0;
}
}
namespace A184_6{


int f(int a, int b){
    int c = 47;
    if (b == 5)
        return 4;
    else if (a <= -1)
         c = 5;
    else 
        return 2;
    return c;
}

int test(){
    cout << f(-6, -9);
    return 0;
}
}
namespace A184_7{



int f(int &x, int &y){
    x = 1;
    y+= 4;
    return y;
}

int test(){
    int a = 9, b = 8;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 6;
        cout << ((b<=6) || ((a-=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A184_9{



int a = 6, b = 8, c = 9;

int g(int &a){
    a = 4;
    b *= 5;
    c = 1;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 0;
    c = 3;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A184_10{



int a = 0, b = 6, c = 9;

int g(){
    int a = 0;
    b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 8;
    c = 7;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A185_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A185_0{
void test(){cout << (6 * 12 % 10 * 12);}
}
namespace A185_1{
void test(){int d = 6;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d + 48 % 15 * 5;}
}
namespace A185_2{
void test(){cout << (! 6 >= 2 &&  2.0 == 8.0 && true < 7);}
}
namespace A185_4{
void test(){cout << (6 < true >= 5 != 4);}
}
namespace A185_5{
void test(){if (2 > 3)
    cout << "i";
else
    cout << "g";}
}
namespace A185_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(0) and f(-9));
    return 0;
}
}
namespace A185_6{


int h(int a, int b){
    int c = 63;
    if (a != -5)
        c = 8;
    if (b < -3)
         return 5;
    else 
        c = 7;
    return c;
}

int test(){
    cout << h(6, -7);
    return 0;
}
}
namespace A185_7{



int f(int &x, int &y){
    x = 7;
    y-= 1;
    return x;
}

int test(){
    int a = 9, b = 6;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 4;
        cout << ((a>4) && ((b+=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A185_9{



int a = 8, b = 7, c = 2;

int f(int b){
    int c;
    a -= 2;
    b = 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 9;
    c = 0;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A185_10{



int a = 2, b = 3, c = 9;

int h(){
    int a = 2;
    b = 1;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 6;
    int c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A186_8{
namespace B1{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A186_0{
void test(){cout << (5 / 3 * 4 / 8);}
}
namespace A186_1{
void test(){int d = 5;
cout << d - 7 * 4 / 6 * 9;
cout << ":" << 'd' << ":" << d << ":" << "d";}
}
namespace A186_2{
void test(){cout << (! 5.0 <= 9 and  false != 4 and 6 >= 9.0);}
}
namespace A186_4{
void test(){cout << (8 < false <= 4.0 >= 2.0);}
}
namespace A186_5{
void test(){if (19 != 10)
    cout << "a";
else
    cout << "u";}
}
namespace A186_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) || f(7));
    return 0;
}
}
namespace A186_6{


int h(int c){
    int y = 39;
    if (c != 5) 
        return 2;
    else if (c <= 0)
         y = 5;
    else
         y = 8;
    return y;
}

int test(){
    cout << h(-9);
    return 0;
}
}
namespace A186_7{



int f(int &x, int &y){
    x = 3;
    y+= 3;
    return y;
}

int test(){
    int a = 4, b = 7;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 5;
        cout << ((b>=5) && ((a+=1) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A186_9{



int a = 4, b = 6, c = 3;

int h(int b){
    a += 5;
    b = 3;
    c = 3;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 8;
    int c = 3;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A186_10{



int a = 0, b = 4, c = 7;

int f(){
    int a = 0;
    b = 1;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 0;
    int b = 6;
    c = 5;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A187_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A187_0{
void test(){cout << (10 % 6 / 8 % 6);}
}
namespace A187_1{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A187_2{
void test(){cout << (! 5 > 4.0 ||  8 == 3.0 || 3 < true);}
}
namespace A187_4{
void test(){cout << (9 > 6.0 == false != 3);}
}
namespace A187_5{
void test(){if (11 >= 1)
    cout << "n";
else
    cout << "h";}
}
namespace A187_3{


bool f(int n){
    cout<<"f";
    return n>-3;
}

int test(){
    cout<<(f(-7) && f(1));
    return 0;
}
}
namespace A187_6{


int g(int d){
    int u = 91;
    if (d < 2) 
        return 3;
    if (d <= -3)
         u = 6;
    else
         return 0;
    return u;
}

int test(){
    cout << g(-6);
    return 0;
}
}
namespace A187_7{



int f(int &x, int &y){
    x = 2;
    y-= 1;
    return x;
}

int test(){
    int a = 8, b = 1;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 6;
        cout << ((b<7) || ((a-=2) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A187_9{



int a = 9, b = 4, c = 2;

int f(int &a){
    int c;
    a = 4;
    b += 2;
    c = 5;
    return a + b + c;
}

int test(){
    a = 5;
    b = 6;
    int c = 7;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A187_10{



int a = 3, b = 8, c = 2;

int h(){
    int a = 3;
    b = 4;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 1;
    int b = 4;
    c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A188_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A188_0{
void test(){cout << (8 * 15 % 6 * 9);}
}
namespace A188_1{
void test(){int d = 6;
cout << d - 5 * 4 / 8 * 9;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A188_2{
void test(){cout << ( false < 5 or ! 6.0 >= 9 or 3.0 <= 7);}
}
namespace A188_4{
void test(){cout << (9 != 8.0 == 2 > true);}
}
namespace A188_5{
void test(){if (17 < 2)
    cout << "z";
else
    cout << "v";}
}
namespace A188_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(9) && f(6));
    return 0;
}
}
namespace A188_6{


int g(int a, int b){
    int c = 94;
    if (a)
        c = 9;
    if (b >= -4)
         return 8;
    else 
        c = 6;
    return c;
}

int test(){
    cout << g(0, 0);
    return 0;
}
}
namespace A188_7{



int f(int &x, int &y){
    x = 7;
    y+= 5;
    return y;
}

int test(){
    int a = 4, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 3;
        cout << ((b<3) && ((a-=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A188_9{



int a = 1, b = 0, c = 5;

int g(int &b){
    int c;
    a -= 1;
    b *= 4;
    c = 2;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 2;
    c = 6;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A188_10{



int a = 7, b = 5, c = 0;

int f(){
    int a = 7;
    b = 6;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 2;
    int b = 2;
    c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A189_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A189_0{
void test(){cout << (3 / 4 * 12 / 3);}
}
namespace A189_1{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" << a;
cout << ":" << a - 67 / 6 * 5;}
}
namespace A189_2{
void test(){cout << ( true != 3 && ! 8 == 4 and 9.0 > 4.0);}
}
namespace A189_4{
void test(){cout << (5 <= 9.0 >= 3 < 5.0);}
}
namespace A189_5{
void test(){if (10 <= 15)
    cout << "p";
else
    cout << "f";}
}
namespace A189_3{


bool f(int n){
    cout<<"f";
    return n!=4;
}

int test(){
    cout<<(f(3) or f(4));
    return 0;
}
}
namespace A189_6{


int g(int a, int b){
    int c = 89;
    if (a <= 0)
        return 1;
    else if (b > 1)
         c = 2;
    else 
        return 0;
    return c;
}

int test(){
    cout << g(3, -4);
    return 0;
}
}
namespace A189_7{



int f(int &x, int &y){
    x = 1;
    y-= 4;
    return x;
}

int test(){
    int a = 8, b = 2;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 7;
        cout << ((a>6) || ((b+=1) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A189_9{



int a = 8, b = 3, c = 1;

int h(int a){
    a = 1;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 7;
    c = 9;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A189_10{



int a = 0, b = 4, c = 3;

int g(){
    int a = 0;
    b = 7;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 5;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A190_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A190_0{
void test(){cout << (12 / 5 / 15 % 5);}
}
namespace A190_1{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A190_2{
void test(){cout << (! true < 7.0 and  2 != 6 || 5.0 == 5);}
}
namespace A190_4{
void test(){cout << (2.0 > 4 >= 8 <= 8.0);}
}
namespace A190_5{
void test(){if (5 >= 8)
    cout << "k";
else
    cout << "y";}
}
namespace A190_3{


bool f(int n){
    cout<<"f";
    return n>=-1;
}

int test(){
    cout<<(f(-8) || f(-2));
    return 0;
}
}
namespace A190_6{


int f(int a, int b){
    int c = 76;
    if (b == 1)
        return 4;
    if (a <= 0)
         c = 3;
    else 
        return 9;
    return c;
}

int test(){
    cout << f(5, -3);
    return 0;
}
}
namespace A190_7{



int f(int &x, int &y){
    x = 2;
    y-= 1;
    return y;
}

int test(){
    int a = 9, b = 4;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 6;
        cout << ((b<=4) || ((a+=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A190_9{



int a = 0, b = 8, c = 6;

int g(int &a){
    a = 5;
    b = 3;
    c = 2;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 3;
    c = 9;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A190_10{



int a = 8, b = 2, c = 7;

int g(){
    int a = 8;
    b = 4;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 0;
    int c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A191_8{
namespace B1{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A191_0{
void test(){cout << (5 * 4 * 12 * 15);}
}
namespace A191_1{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A191_2{
void test(){cout << ( false >= 2.0 || ! 8.0 <= 2 && 6 > 7);}
}
namespace A191_4{
void test(){cout << (false < 6 == 3.0 != 4.0);}
}
namespace A191_5{
void test(){if (15 > 6)
    cout << "q";
else
    cout << "a";}
}
namespace A191_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) and f(5));
    return 0;
}
}
namespace A191_6{


int f(int b){
    int x = 81;
    if (b) 
        x = 7;
    if (b == -1)
         return 2;
    else
         x = 9;
    return x;
}

int test(){
    cout << f(-8);
    return 0;
}
}
namespace A191_7{



int f(int &x, int &y){
    x = 7;
    y+= 8;
    return x;
}

int test(){
    int a = 3, b = 1;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 4, b = 7;
        cout << ((b>=7) && ((a-=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A191_9{



int a = 1, b = 2, c = 5;

int h(int b){
    int c;
    a += 4;
    b *= 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 8;
    int c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A191_10{



int a = 5, b = 1, c = 4;

int f(){
    int a = 5;
    b = 7;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 2;
    int b = 3;
    c = 0;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A192_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A192_0{
void test(){cout << (3 % 10 % 5 / 12);}
}
namespace A192_1{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A192_2{
void test(){cout << (! 7.0 == 8 ||  9 < 3 || false >= 9.0);}
}
namespace A192_4{
void test(){cout << (7 > 4 == 2 != true);}
}
namespace A192_5{
void test(){if (6 < 13)
    cout << "l";
else
    cout << "q";}
}
namespace A192_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-5) and f(-4));
    return 0;
}
}
namespace A192_6{


int h(int a, int b){
    int c = 20;
    if (b)
        c = 5;
    else if (a != 2)
         c = 8;
    else 
        return 2;
    return c;
}

int test(){
    cout << h(-9, 6);
    return 0;
}
}
namespace A192_7{



int f(int &x, int &y){
    x = 6;
    y-= 2;
    return y;
}

int test(){
    int a = 9, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 6;
        cout << ((b<6) || ((a-=2) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A192_9{



int a = 6, b = 5, c = 9;

int f(int &b){
    a = 4;
    b -= 3;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 4;
    int c = 2;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A192_10{



int a = 1, b = 6, c = 5;

int h(){
    int a = 1;
    b = 8;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 6;
    int c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A193_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A193_0{
void test(){cout << (8 % 15 * 6 * 9);}
}
namespace A193_1{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A193_2{
void test(){cout << (! 4 > 5 &&  true <= 4.0 and 9 != 5.0);}
}
namespace A193_4{
void test(){cout << (8 < 6 >= true <= 6.0);}
}
namespace A193_5{
void test(){if (13 <= 18)
    cout << "x";
else
    cout << "d";}
}
namespace A193_3{


bool f(int n){
    cout<<"f";
    return n==-4;
}

int test(){
    cout<<(f(0) or f(-1));
    return 0;
}
}
namespace A193_6{


int f(int c){
    int w = 49;
    if (c > -5) 
        return 4;
    else if (c >= 4)
         return 1;
    else
         w = 3;
    return w;
}

int test(){
    cout << f(1);
    return 0;
}
}
namespace A193_7{



int f(int &x, int &y){
    x = 3;
    y+= 5;
    return x;
}

int test(){
    int a = 1, b = 4;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 8;
        cout << ((a>=5) && ((b+=1) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A193_9{



int a = 7, b = 0, c = 2;

int f(int a){
    int c;
    a = 1;
    b -= 1;
    c = 2;
    return a + b + c;
}

int test(){
    a = 0;
    b = 9;
    int c = 5;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A193_10{



int a = 1, b = 4, c = 9;

int h(){
    a = 1;
    int b = 0;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 2;
    b = 4;
    int c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A194_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A194_0{
void test(){cout << (4 * 3 % 8 / 10);}
}
namespace A194_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 59 % 15 * 6;}
}
namespace A194_2{
void test(){cout << (! 6 != 6.0 and  true > 3 && 2.0 <= 8);}
}
namespace A194_4{
void test(){cout << (9 > 5.0 == 9.0 != false);}
}
namespace A194_5{
void test(){if (16 != 16)
    cout << "o";
else
    cout << "l";}
}
namespace A194_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-3) || f(2));
    return 0;
}
}
namespace A194_6{


int h(int a){
    int z = 21;
    if (a) 
        return 5;
    else if (a != -4)
         z = 8;
    else
         return 5;
    return z;
}

int test(){
    cout << h(4);
    return 0;
}
}
namespace A194_7{



int f(int &x, int &y){
    x = 5;
    y+= 8;
    return x;
}

int test(){
    int a = 2, b = 1;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 7;
        cout << ((b<=3) && ((a+=2) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A194_9{



int a = 3, b = 8, c = 1;

int h(int a){
    int c;
    a += 5;
    b = 4;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 4;
    int c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A194_10{



int a = 8, b = 2, c = 7;

int f(){
    a = 8;
    int b = 0;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 5;
    c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A195_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A195_0{
void test(){cout << (10 / 8 / 3 % 3);}
}
namespace A195_1{
void test(){int d = 4;
cout << d + 5 * 7 / 3 * 9;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A195_2{
void test(){cout << ( 2 >= 3.0 or ! false < 4 or 8.0 == 7);}
}
namespace A195_4{
void test(){cout << (7 <= 5 < 3 >= 7.0);}
}
namespace A195_5{
void test(){if (18 == 0)
    cout << "c";
else
    cout << "n";}
}
namespace A195_3{


bool f(int n){
    cout<<"f";
    return n<=-2;
}

int test(){
    cout<<(f(-4) && f(-6));
    return 0;
}
}
namespace A195_6{


int f(int a, int b){
    int c = 33;
    if (b == 3)
        c = 4;
    if (b >= -3)
         return 6;
    else 
        c = 0;
    return c;
}

int test(){
    cout << f(-2, -1);
    return 0;
}
}
namespace A195_7{



int f(int &x, int &y){
    x = 3;
    y-= 2;
    return y;
}

int test(){
    int a = 1, b = 8;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 9;
        cout << ((b>3) || ((a-=1) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A195_9{



int a = 4, b = 2, c = 8;

int g(int &b){
    a *= 5;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    a = 1;
    b = 7;
    int c = 9;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A195_10{



int a = 0, b = 5, c = 9;

int g(){
    a = 0;
    int b = 3;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 7;
    b = 8;
    int c = 2;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A196_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A196_0{
void test(){cout << (6 / 6 % 10 * 6);}
}
namespace A196_1{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" << b;
cout << ":" << b + 59 / 5 * 6;}
}
namespace A196_2{
void test(){cout << (! 7.0 >= 3 ||  8 <= 7 or false != 4.0);}
}
namespace A196_4{
void test(){cout << (3 < 7 <= false != 9.0);}
}
namespace A196_5{
void test(){if (1 == 12)
    cout << "u";
else
    cout << "e";}
}
namespace A196_3{


bool f(int n){
    cout<<"f";
    return n>=3;
}

int test(){
    cout<<(f(7) || f(8));
    return 0;
}
}
namespace A196_6{


int g(int a, int b){
    int c = 84;
    if (a)
        return 7;
    else if (a < 4)
         c = 1;
    else 
        return 3;
    return c;
}

int test(){
    cout << g(9, -2);
    return 0;
}
}
namespace A196_7{



int f(int &x, int &y){
    x = 5;
    y-= 4;
    return x;
}

int test(){
    int a = 6, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 2;
        cout << ((b>4) && ((a+=2) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A196_9{



int a = 6, b = 5, c = 0;

int g(int a){
    int c;
    a += 1;
    b -= 4;
    c = 1;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 9;
    c = 5;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A196_10{



int a = 1, b = 6, c = 3;

int h(){
    a = 1;
    int b = 0;
    int c = 4;
    return a + b + c;
}

int test(){
    a = 5;
    b = 6;
    int c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A197_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A197_0{
void test(){cout << (15 * 9 * 4 / 8);}
}
namespace A197_1{
void test(){int a = 3;
cout << a + 8 * 7 / 3 * 8;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A197_2{
void test(){cout << (! 6.0 > 4 or  9.0 == true || 6 < 2);}
}
namespace A197_4{
void test(){cout << (2 == 4.0 > 5.0 >= 7.0);}
}
namespace A197_5{
void test(){if (0 != 7)
    cout << "w";
else
    cout << "o";}
}
namespace A197_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) or f(-9));
    return 0;
}
}
namespace A197_6{


int g(int d){
    int v = 89;
    if (d > 5) 
        v = 0;
    if (d < -2)
         return 3;
    else
         v = 6;
    return v;
}

int test(){
    cout << g(5);
    return 0;
}
}
namespace A197_7{



int f(int &x, int &y){
    x = 4;
    y+= 6;
    return y;
}

int test(){
    int a = 3, b = 5;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 8;
        cout << ((b>=5) || ((a-=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A197_9{



int a = 4, b = 1, c = 7;

int h(int &b){
    a *= 5;
    b = 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 0;
    int c = 2;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A197_10{



int a = 7, b = 8, c = 9;

int f(){
    a = 7;
    int b = 2;
    c = 0;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 3;
    int c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A198_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A198_0{
void test(){cout << (9 % 12 / 9 % 4);}
}
namespace A198_1{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d << ":" << 'd';}
}
namespace A198_2{
void test(){cout << ( 5 == 2.0 && ! 9 < 8.0 && 8 <= false);}
}
namespace A198_4{
void test(){cout << (9 == 5 != 4 >= true);}
}
namespace A198_5{
void test(){if (14 > 9)
    cout << "y";
else
    cout << "k";}
}
namespace A198_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(9) and f(2));
    return 0;
}
}
namespace A198_6{


int h(int b){
    int v = 78;
    if (b != -5) 
        return 8;
    if (b >= 2)
         v = 2;
    else
         return 1;
    return v;
}

int test(){
    cout << h(-3);
    return 0;
}
}
namespace A198_7{



int f(int &x, int &y){
    x = 5;
    y+= 6;
    return y;
}

int test(){
    int a = 3, b = 4;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 1;
        cout << ((b<=7) || ((a-=1) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A198_9{



int a = 8, b = 3, c = 8;

int f(int a){
    int c;
    a = 3;
    b = 5;
    c = 4;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 2;
    int c = 6;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A198_10{



int a = 1, b = 2, c = 6;

int g(){
    int a = 1;
    b = 5;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 6;
    int c = 7;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A199_8{
namespace B1{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A199_0{
void test(){cout << (12 % 6 % 6 * 4);}
}
namespace A199_1{
void test(){int b = 9;
cout << b << ":" << 'b' << ":" << "b";
cout << ":" << b + 67 % 15 / 5;}
}
namespace A199_2{
void test(){cout << (! true >= 3.0 and  4 > 3 and 7 != 5.0);}
}
namespace A199_4{
void test(){cout << (3.0 <= 8 < 8.0 > 6);}
}
namespace A199_5{
void test(){if (7 <= 17)
    cout << "v";
else
    cout << "t";}
}
namespace A199_3{


bool f(int n){
    cout<<"f";
    return n<=1;
}

int test(){
    cout<<(f(-1) && f(-7));
    return 0;
}
}
namespace A199_6{


int f(int d){
    int w = 38;
    if (d) 
        w = 4;
    else if (d == -1)
         w = 9;
    else
         return 7;
    return w;
}

int test(){
    cout << f(6);
    return 0;
}
}
namespace A199_7{



int f(int &x, int &y){
    x = 5;
    y-= 4;
    return x;
}

int test(){
    int a = 7, b = 8;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 2;
        cout << ((b<6) && ((a+=2) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A199_9{



int a = 3, b = 9, c = 7;

int f(int &b){
    a = 1;
    b *= 2;
    c = 3;
    return a + b + c;
}

int test(){
    a = 4;
    b = 5;
    int c = 0;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A199_10{



int a = 9, b = 3, c = 5;

int h(){
    a = 9;
    int b = 0;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 4;
    c = 2;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A200_8{
namespace B1{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A200_0{
void test(){cout << (10 * 4 * 4 % 10);}
}
namespace A200_1{
void test(){int d = 6;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d + 48 % 15 * 5;}
}
namespace A200_2{
void test(){cout << ( 6 == 8.0 and ! 2.0 >= 5 and 9 <= false);}
}
namespace A200_4{
void test(){cout << (true > 8 < 2.0 <= 9);}
}
namespace A200_5{
void test(){if (7 < 7)
    cout << "f";
else
    cout << "c";}
}
namespace A200_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-3) && f(6));
    return 0;
}
}
namespace A200_6{


int h(int a, int b){
    int c = 48;
    if (a > -4)
        c = 0;
    else if (b > -2)
         return 4;
    else 
        c = 7;
    return c;
}

int test(){
    cout << h(-7, -5);
    return 0;
}
}
namespace A200_7{



int f(int &x, int &y){
    x = 6;
    y+= 3;
    return y;
}

int test(){
    int a = 6, b = 8;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 9;
        cout << ((b<=6) && ((a+=1) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A200_9{



int a = 3, b = 7, c = 9;

int h(int a){
    int c;
    a += 3;
    b = 2;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 4;
    int c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A200_10{



int a = 7, b = 9, c = 4;

int f(){
    a = 7;
    int b = 3;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 5;
    int c = 8;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A201_8{
namespace B1{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A201_0{
void test(){cout << (6 / 9 / 8 / 3);}
}
namespace A201_1{
void test(){int c = 6;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 59 / 5 / 6;}
}
namespace A201_2{
void test(){cout << (! 2 < 2 &&  6.0 > true or 4 != 4.0);}
}
namespace A201_4{
void test(){cout << (6.0 != 3 == 7 >= false);}
}
namespace A201_5{
void test(){if (11 >= 4)
    cout << "g";
else
    cout << "x";}
}
namespace A201_3{


bool f(int n){
    cout<<"f";
    return n>0;
}

int test(){
    cout<<(f(-2) || f(3));
    return 0;
}
}
namespace A201_6{


int g(int a, int b){
    int c = 69;
    if (b <= -5)
        return 6;
    if (b < -1)
         return 3;
    else 
        c = 8;
    return c;
}

int test(){
    cout << g(4, 2);
    return 0;
}
}
namespace A201_7{



int f(int &x, int &y){
    x = 4;
    y-= 2;
    return x;
}

int test(){
    int a = 1, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 5;
        cout << ((b>=5) || ((a-=2) >= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A201_9{



int a = 2, b = 8, c = 5;

int g(int &b){
    a -= 1;
    b = 4;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 9;
    c = 0;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A201_10{



int a = 1, b = 2, c = 3;

int g(){
    a = 1;
    int b = 4;
    int c = 7;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 1;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A202_8{
namespace B1{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A202_0{
void test(){cout << (8 * 8 % 15 * 5);}
}
namespace A202_1{
void test(){int a = 3;
cout << a + 8 * 6 / 5 * 7;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A202_2{
void test(){cout << ( false >= 8 || ! 3.0 != 9.0 && 3 <= 6);}
}
namespace A202_4{
void test(){cout << (8.0 == 5.0 >= 2 <= true);}
}
namespace A202_5{
void test(){if (9 == 5)
    cout << "r";
else
    cout << "m";}
}
namespace A202_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(4) or f(0));
    return 0;
}
}
namespace A202_6{


int g(int a){
    int u = 98;
    if (a <= -3) 
        u = 8;
    else if (a >= 4)
         return 4;
    else
         return 5;
    return u;
}

int test(){
    cout << g(2);
    return 0;
}
}
namespace A202_7{



int f(int &x, int &y){
    x = 6;
    y+= 7;
    return x;
}

int test(){
    int a = 1, b = 9;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 4;
        cout << ((a>3) && ((b+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A202_9{



int a = 7, b = 4, c = 8;

int f(int &a){
    int c;
    a *= 2;
    b = 5;
    c = 1;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 3;
    c = 6;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A202_10{



int a = 9, b = 2, c = 0;

int h(){
    a = 9;
    int b = 5;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 0;
    int c = 7;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A203_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A203_0{
void test(){cout << (4 % 15 * 3 % 6);}
}
namespace A203_1{
void test(){int d = 4;
cout << d + 5 * 7 / 3 * 9;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A203_2{
void test(){cout << (! 7.0 < 5.0 or  5 == true || 7 > 9);}
}
namespace A203_4{
void test(){cout << (4 != 6 < false > 5);}
}
namespace A203_5{
void test(){if (13 != 3)
    cout << "m";
else
    cout << "z";}
}
namespace A203_3{


bool f(int n){
    cout<<"f";
    return n<-3;
}

int test(){
    cout<<(f(1) and f(-5));
    return 0;
}
}
namespace A203_6{


int h(int c){
    int x = 96;
    if (c <= 1) 
        x = 9;
    if (c == 3)
         return 0;
    else
         x = 1;
    return x;
}

int test(){
    cout << h(8);
    return 0;
}
}
namespace A203_7{



int f(int &x, int &y){
    x = 4;
    y-= 1;
    return y;
}

int test(){
    int a = 3, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((b<7) || ((a-=2) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A203_9{



int a = 2, b = 5, c = 3;

int g(int b){
    a = 4;
    b -= 3;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 8;
    int c = 4;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A203_10{



int a = 1, b = 4, c = 2;

int g(){
    int a = 1;
    b = 8;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 2;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A204_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A204_0{
void test(){cout << (3 / 3 / 9 / 9);}
}
namespace A204_1{
void test(){int c = 3;
cout << "c" << ":" << 'c' << ":" << c;
cout << ":" << c + 48 % 15 * 6;}
}
namespace A204_2{
void test(){cout << (! 8.0 <= 6 ||  9.0 > true and 4 == 7);}
}
namespace A204_4{
void test(){cout << (9.0 == 2 <= 7.0 < 7);}
}
namespace A204_5{
void test(){if (0 >= 19)
    cout << "n";
else
    cout << "m";}
}
namespace A204_3{


bool f(int n){
    cout<<"f";
    return n==4;
}

int test(){
    cout<<(f(5) || f(-4));
    return 0;
}
}
namespace A204_6{


int f(int a, int b){
    int c = 68;
    if (b)
        return 2;
    else if (a != 5)
         c = 1;
    else 
        c = 5;
    return c;
}

int test(){
    cout << f(-1, 4);
    return 0;
}
}
namespace A204_7{



int f(int &x, int &y){
    x = 5;
    y+= 5;
    return y;
}

int test(){
    int a = 1, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 9;
        cout << ((a>4) && ((b+=1) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A204_9{



int a = 2, b = 1, c = 5;

int h(int b){
    int c;
    a = 5;
    b += 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 0;
    c = 6;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A204_10{



int a = 1, b = 9, c = 4;

int f(){
    int a = 1;
    b = 5;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    b = 7;
    int c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A205_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A205_0{
void test(){cout << (9 % 12 / 12 % 12);}
}
namespace A205_1{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A205_2{
void test(){cout << ( false != 3 or ! 2 >= 5 || 6.0 < 4.0);}
}
namespace A205_4{
void test(){cout << (4.0 >= true > 6 != 6.0);}
}
namespace A205_5{
void test(){if (4 <= 2)
    cout << "s";
else
    cout << "q";}
}
namespace A205_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(3) && f(-7));
    return 0;
}
}
namespace A205_6{


int h(int a, int b){
    int c = 62;
    if (a == 0)
        return 9;
    if (a >= 2)
         return 2;
    else 
        c = 9;
    return c;
}

int test(){
    cout << h(-5, 1);
    return 0;
}
}
namespace A205_7{



int f(int &x, int &y){
    x = 7;
    y-= 8;
    return x;
}

int test(){
    int a = 4, b = 6;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 1;
        cout << ((a<=4) || ((b-=2) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A205_9{



int a = 9, b = 2, c = 7;

int h(int &a){
    a = 2;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 0;
    int b = 4;
    c = 1;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A205_10{



int a = 2, b = 1, c = 5;

int f(){
    int a = 2;
    b = 9;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 3;
    c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A206_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A206_0{
void test(){cout << (15 / 5 * 5 * 8);}
}
namespace A206_1{
void test(){int b = 5;
cout << b - 4 * 9 / 5 * 4;
cout << ":" << 'b' << ":" << b << ":" << "b";}
}
namespace A206_2{
void test(){cout << ( 8 == 5.0 and ! 9 < 3.0 && 9 >= true);}
}
namespace A206_4{
void test(){cout << (9 == 3 < 2.0 > 4);}
}
namespace A206_5{
void test(){if (14 < 18)
    cout << "k";
else
    cout << "i";}
}
namespace A206_3{


bool f(int n){
    cout<<"f";
    return n!=2;
}

int test(){
    cout<<(f(1) or f(0));
    return 0;
}
}
namespace A206_6{


int f(int c){
    int z = 48;
    if (c) 
        return 6;
    if (c != 0)
         z = 2;
    else
         z = 7;
    return z;
}

int test(){
    cout << f(-2);
    return 0;
}
}
namespace A206_7{



int f(int &x, int &y){
    x = 9;
    y-= 7;
    return y;
}

int test(){
    int a = 2, b = 3;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 9;
        cout << ((a<3) || ((b+=2) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A206_9{



int a = 3, b = 8, c = 5;

int g(int a){
    a = 4;
    b *= 1;
    c = 1;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 4;
    int c = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A206_10{



int a = 7, b = 0, c = 4;

int h(){
    a = 7;
    int b = 7;
    int c = 1;
    return a + b + c;
}

int test(){
    a = 8;
    b = 0;
    int c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A207_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A207_0{
void test(){cout << (5 * 10 % 10 / 15);}
}
namespace A207_1{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A207_2{
void test(){cout << ( 3 <= false && ! 2 != 2.0 or 7.0 > 8);}
}
namespace A207_4{
void test(){cout << (8 >= 3.0 <= false != 5);}
}
namespace A207_5{
void test(){if (2 > 15)
    cout << "q";
else
    cout << "b";}
}
namespace A207_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) and f(-3));
    return 0;
}
}
namespace A207_6{


int h(int a, int b){
    int c = 85;
    if (a >= -3)
        return 3;
    else if (b > 5)
         c = 4;
    else 
        return 7;
    return c;
}

int test(){
    cout << h(7, 8);
    return 0;
}
}
namespace A207_7{



int f(int &x, int &y){
    x = 8;
    y+= 5;
    return x;
}

int test(){
    int a = 1, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 4;
        cout << ((b>=7) && ((a-=1) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A207_9{



int a = 9, b = 0, c = 8;

int f(int &b){
    int c;
    a += 4;
    b -= 3;
    c = 2;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 7;
    c = 5;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A207_10{



int a = 5, b = 6, c = 2;

int g(){
    int a = 5;
    b = 9;
    int c = 1;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 8;
    c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A208_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A208_0{
void test(){cout << (6 * 4 % 4 / 9);}
}
namespace A208_1{
void test(){int d = 6;
cout << d - 67 % 15 * 5;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A208_2{
void test(){cout << (! 9.0 == 6.0 &&  4 < 5 || 6 >= false);}
}
namespace A208_4{
void test(){cout << (8.0 != 2 < 4 > false);}
}
namespace A208_5{
void test(){if (3 == 6)
    cout << "y";
else
    cout << "e";}
}
namespace A208_3{


bool f(int n){
    cout<<"f";
    return n<=3;
}

int test(){
    cout<<(f(8) and f(9));
    return 0;
}
}
namespace A208_6{


int g(int d){
    int y = 64;
    if (d < -4) 
        return 3;
    else if (d > 0)
         y = 7;
    else
         return 1;
    return y;
}

int test(){
    cout << g(0);
    return 0;
}
}
namespace A208_7{



int f(int &x, int &y){
    x = 4;
    y+= 5;
    return x;
}

int test(){
    int a = 6, b = 9;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 7;
        cout << ((b<=6) && ((a+=2) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A208_9{



int a = 1, b = 2, c = 7;

int g(int b){
    a -= 5;
    b = 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 8;
    int c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A208_10{



int a = 4, b = 5, c = 2;

int f(){
    int a = 4;
    b = 0;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 1;
    c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A209_8{
namespace B1{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A209_0{
void test(){cout << (10 / 15 / 9 * 6);}
}
namespace A209_1{
void test(){int a = 5;
cout << "a" << ":" << 'a' << ":" << a;
cout << ":" << a - 67 / 6 * 5;}
}
namespace A209_2{
void test(){cout << (! 7 != 3 or  8 > 8.0 && true <= 5.0);}
}
namespace A209_4{
void test(){cout << (5.0 >= 3 <= 5 == 7);}
}
namespace A209_5{
void test(){if (8 <= 16)
    cout << "o";
else
    cout << "t";}
}
namespace A209_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-5) or f(2));
    return 0;
}
}
namespace A209_6{


int h(int b){
    int y = 47;
    if (b >= -3) 
        y = 0;
    if (b > 5)
         return 4;
    else
         y = 9;
    return y;
}

int test(){
    cout << h(-5);
    return 0;
}
}
namespace A209_7{



int f(int &x, int &y){
    x = 1;
    y-= 3;
    return y;
}

int test(){
    int a = 4, b = 8;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 5;
        cout << ((a>=5) || ((b-=1) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A209_9{



int a = 4, b = 9, c = 5;

int f(int &a){
    int c;
    a = 5;
    b *= 4;
    c = 1;
    return a + b + c;
}

int test(){
    a = 3;
    b = 2;
    int c = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A209_10{



int a = 2, b = 0, c = 5;

int h(){
    a = 2;
    int b = 8;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 3;
    int c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A210_8{
namespace B1{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A210_0{
void test(){cout << (15 % 8 * 5 % 10);}
}
namespace A210_1{
void test(){int c = 2;
cout << c + 67 / 5 / 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A210_2{
void test(){cout << ( true == 6 and ! 3.0 != 4.0 and 9 < 7);}
}
namespace A210_4{
void test(){cout << (6.0 >= 6 != true <= 2.0);}
}
namespace A210_5{
void test(){if (5 != 0)
    cout << "m";
else
    cout << "k";}
}
namespace A210_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) && f(6));
    return 0;
}
}
namespace A210_6{


int f(int a, int b){
    int c = 79;
    if (a <= 4)
        c = 5;
    if (b < -1)
         return 1;
    else 
        c = 6;
    return c;
}

int test(){
    cout << f(2, 3);
    return 0;
}
}
namespace A210_7{



int f(int &x, int &y){
    x = 7;
    y+= 6;
    return x;
}

int test(){
    int a = 9, b = 3;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 8;
        cout << ((b<6) || ((a-=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A210_9{



int a = 7, b = 4, c = 5;

int h(int &a){
    int c;
    a = 1;
    b += 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 3;
    int c = 2;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A210_10{



int a = 2, b = 8, c = 7;

int g(){
    a = 2;
    int b = 4;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 9;
    int b = 5;
    c = 1;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A211_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A211_0{
void test(){cout << (12 / 3 * 6 * 3);}
}
namespace A211_1{
void test(){int d = 6;
cout << d - 4 * 5 / 3 * 7;
cout << ":" << d << ":" << 'd' << ":" << "d";}
}
namespace A211_2{
void test(){cout << (! 7.0 <= 2.0 ||  2 > 5 or 4 >= false);}
}
namespace A211_4{
void test(){cout << (8 < 9 == 7.0 > false);}
}
namespace A211_5{
void test(){if (16 > 9)
    cout << "b";
else
    cout << "v";}
}
namespace A211_3{


bool f(int n){
    cout<<"f";
    return n==-2;
}

int test(){
    cout<<(f(-9) || f(4));
    return 0;
}
}
namespace A211_6{


int g(int a){
    int v = 54;
    if (a) 
        return 5;
    else if (a <= -5)
         return 3;
    else
         v = 6;
    return v;
}

int test(){
    cout << g(-7);
    return 0;
}
}
namespace A211_7{



int f(int &x, int &y){
    x = 4;
    y-= 5;
    return y;
}

int test(){
    int a = 1, b = 6;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((b>3) && ((a+=1) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A211_9{



int a = 6, b = 9, c = 1;

int h(int b){
    a = 4;
    b = 5;
    c = 2;
    return a + b + c;
}

int test(){
    a = 8;
    b = 9;
    int c = 2;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A211_10{



int a = 6, b = 3, c = 4;

int f(){
    a = 6;
    int b = 6;
    int c = 9;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 8;
    c = 0;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A212_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A212_0{
void test(){cout << (3 % 10 % 12 % 8);}
}
namespace A212_1{
void test(){int b = 4;
cout << b - 7 * 5 / 9 * 6;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A212_2{
void test(){cout << ( 6 <= 7 && ! 8 >= 4.0 and true == 6.0);}
}
namespace A212_4{
void test(){cout << (5 != 4.0 <= 4 > 2);}
}
namespace A212_5{
void test(){if (17 < 8)
    cout << "v";
else
    cout << "l";}
}
namespace A212_3{


bool f(int n){
    cout<<"f";
    return n!=-3;
}

int test(){
    cout<<(f(-6) or f(5));
    return 0;
}
}
namespace A212_6{


int f(int b){
    int z = 58;
    if (b != 1) 
        z = 2;
    if (b < -2)
         return 8;
    else
         return 8;
    return z;
}

int test(){
    cout << f(9);
    return 0;
}
}
namespace A212_7{



int f(int &x, int &y){
    x = 8;
    y+= 3;
    return x;
}

int test(){
    int a = 2, b = 4;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 7;
        cout << ((a>=7) || ((b+=1) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A212_9{



int a = 7, b = 3, c = 8;

int f(int &b){
    int c;
    a -= 4;
    b = 1;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 0;
    int c = 6;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A212_10{



int a = 2, b = 1, c = 5;

int g(){
    int a = 2;
    b = 7;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 9;
    b = 5;
    int c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A213_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A213_0{
void test(){cout << (8 * 12 / 3 / 15);}
}
namespace A213_1{
void test(){int d = 6;
cout << d - 5 * 4 / 8 * 9;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A213_2{
void test(){cout << (! 2 > 2.0 and  3 < 8.0 || false != 9);}
}
namespace A213_4{
void test(){cout << (6 >= true == 9.0 < 3.0);}
}
namespace A213_5{
void test(){if (15 >= 13)
    cout << "g";
else
    cout << "p";}
}
namespace A213_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-2) and f(-1));
    return 0;
}
}
namespace A213_6{


int f(int a){
    int u = 80;
    if (a == 2) 
        u = 9;
    else if (a >= -1)
         return 4;
    else
         u = 0;
    return u;
}

int test(){
    cout << f(-8);
    return 0;
}
}
namespace A213_7{



int f(int &x, int &y){
    x = 9;
    y-= 6;
    return y;
}

int test(){
    int a = 1, b = 4;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 7;
        cout << ((b<=5) && ((a-=2) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A213_9{



int a = 4, b = 1, c = 1;

int g(int a){
    a *= 5;
    b += 2;
    c = 1;
    return a + b + c;
}

int test(){
    a = 2;
    b = 8;
    int c = 5;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A213_10{



int a = 2, b = 0, c = 7;

int h(){
    a = 2;
    int b = 4;
    int c = 1;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 2;
    c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A214_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A214_0{
void test(){cout << (5 / 9 * 15 * 5);}
}
namespace A214_1{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A214_2{
void test(){cout << (! true <= 4 ||  7.0 != 3.0 && 5 < 6);}
}
namespace A214_4{
void test(){cout << (7 != 8 < 3 <= true);}
}
namespace A214_5{
void test(){if (19 <= 11)
    cout << "e";
else
    cout << "d";}
}
namespace A214_3{


bool f(int n){
    cout<<"f";
    return n>=4;
}

int test(){
    cout<<(f(9) && f(4));
    return 0;
}
}
namespace A214_6{


int g(int a, int b){
    int c = 73;
    if (b)
        return 0;
    else if (a != 1)
         c = 8;
    else 
        c = 9;
    return c;
}

int test(){
    cout << g(-8, 5);
    return 0;
}
}
namespace A214_7{



int f(int &x, int &y){
    x = 2;
    y+= 9;
    return y;
}

int test(){
    int a = 8, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 3;
        cout << ((a>4) && ((b+=2) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A214_9{



int a = 0, b = 3, c = 7;

int h(int &a){
    a += 4;
    b *= 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 9;
    c = 4;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A214_10{



int a = 0, b = 8, c = 7;

int g(){
    a = 0;
    int b = 3;
    c = 9;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 5;
    int c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A215_8{
namespace B1{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A215_0{
void test(){cout << (4 * 6 / 8 % 4);}
}
namespace A215_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 59 % 15 * 6;}
}
namespace A215_2{
void test(){cout << (! 9.0 == 7 or  9 > 5.0 or false >= 4);}
}
namespace A215_4{
void test(){cout << (6.0 > 2.0 >= 9 == 5);}
}
namespace A215_5{
void test(){if (18 < 14)
    cout << "c";
else
    cout << "c";}
}
namespace A215_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) || f(3));
    return 0;
}
}
namespace A215_6{


int g(int a, int b){
    int c = 75;
    if (b)
        return 0;
    if (b == -2)
         c = 8;
    else 
        return 5;
    return c;
}

int test(){
    cout << g(-9, 7);
    return 0;
}
}
namespace A215_7{



int f(int &x, int &y){
    x = 1;
    y-= 2;
    return x;
}

int test(){
    int a = 4, b = 8;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 7;
        cout << ((b<6) || ((a-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A215_9{



int a = 9, b = 8, c = 3;

int g(int b){
    int c;
    a = 3;
    b -= 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 5;
    int c = 4;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A215_10{



int a = 9, b = 4, c = 1;

int f(){
    int a = 9;
    b = 6;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 5;
    int b = 0;
    c = 2;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A216_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A216_0{
void test(){cout << (9 % 5 % 10 / 12);}
}
namespace A216_1{
void test(){int b = 6;
cout << b + 48 % 15 * 5;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A216_2{
void test(){cout << (! 5.0 == 5 &&  false <= 4.0 || 8 < 2);}
}
namespace A216_4{
void test(){cout << (6 <= 4.0 == false != 3.0);}
}
namespace A216_5{
void test(){if (6 >= 17)
    cout << "z";
else
    cout << "h";}
}
namespace A216_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-9) or f(1));
    return 0;
}
}
namespace A216_6{


int f(int a, int b){
    int c = 99;
    if (b > -5)
        return 7;
    if (a <= 3)
         c = 6;
    else 
        return 3;
    return c;
}

int test(){
    cout << f(4, -9);
    return 0;
}
}
namespace A216_7{



int f(int &x, int &y){
    x = 4;
    y+= 3;
    return y;
}

int test(){
    int a = 9, b = 2;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 8;
        cout << ((a<=3) || ((b-=2) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A216_9{



int a = 2, b = 7, c = 1;

int f(int &a){
    int c;
    a = 1;
    b = 5;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 1;
    c = 4;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A216_10{



int a = 8, b = 7, c = 7;

int h(){
    int a = 8;
    b = 2;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 4;
    b = 9;
    int c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A217_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A217_0{
void test(){cout << (9 / 5 / 9 % 6);}
}
namespace A217_1{
void test(){int d = 5;
cout << "d" << ":" << 'd' << ":" << d;
cout << ":" << d - 53 % 15 * 6;}
}
namespace A217_2{
void test(){cout << ( 3 >= true || ! 8 > 3 and 8.0 != 6.0);}
}
namespace A217_4{
void test(){cout << (7 >= 4 > 7.0 < 8.0);}
}
namespace A217_5{
void test(){if (12 == 1)
    cout << "x";
else
    cout << "x";}
}
namespace A217_3{


bool f(int n){
    cout<<"f";
    return n>2;
}

int test(){
    cout<<(f(-8) and f(8));
    return 0;
}
}
namespace A217_6{


int g(int c){
    int w = 61;
    if (c < 3) 
        w = 5;
    else if (c == 4)
         return 3;
    else
         return 2;
    return w;
}

int test(){
    cout << g(7);
    return 0;
}
}
namespace A217_7{



int f(int &x, int &y){
    x = 6;
    y-= 4;
    return x;
}

int test(){
    int a = 5, b = 8;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 9, b = 2;
        cout << ((a>=4) && ((b+=1) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A217_9{



int a = 0, b = 3, c = 2;

int f(int b){
    a *= 4;
    b = 1;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 8;
    int c = 9;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A217_10{



int a = 8, b = 0, c = 3;

int g(){
    int a = 8;
    b = 5;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 0;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A218_8{
namespace B1{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A218_0{
void test(){cout << (12 % 6 % 8 * 9);}
}
namespace A218_1{
void test(){int d = 2;
cout << 'd' << ":" << "d" << ":" << d;
cout << ":" << d - 59 / 5 / 6;}
}
namespace A218_2{
void test(){cout << (! 6 != 9.0 or  2 <= true or 3.0 < 9);}
}
namespace A218_4{
void test(){cout << (9 <= false != true == 2);}
}
namespace A218_5{
void test(){if (10 > 10)
    cout << "u";
else
    cout << "u";}
}
namespace A218_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(2) || f(5));
    return 0;
}
}
namespace A218_6{


int h(int a, int b){
    int c = 67;
    if (a < -4)
        c = 2;
    else if (a == -3)
         return 1;
    else 
        c = 4;
    return c;
}

int test(){
    cout << h(1, -5);
    return 0;
}
}
namespace A218_7{



int f(int &x, int &y){
    x = 1;
    y+= 3;
    return x;
}

int test(){
    int a = 1, b = 5;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 9;
        cout << ((a<5) && ((b+=1) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A218_9{



int a = 5, b = 7, c = 9;

int g(int &b){
    int c;
    a = 3;
    b -= 5;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 5;
    c = 0;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A218_10{



int a = 9, b = 8, c = 4;

int f(){
    a = 9;
    int b = 7;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 2;
    int c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A219_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
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
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A219_0{
void test(){cout << (5 * 4 * 12 / 5);}
}
namespace A219_1{
void test(){int b = 8;
cout << b + 6 * 5 / 3 * 7;
cout << ":" << b << ":" << 'b' << ":" << "b";}
}
namespace A219_2{
void test(){cout << ( 7.0 == 5 and ! false > 4 && 7 >= 2.0);}
}
namespace A219_4{
void test(){cout << (3 > 9.0 < 8 >= 5.0);}
}
namespace A219_5{
void test(){if (1 != 12)
    cout << "j";
else
    cout << "j";}
}
namespace A219_3{


bool f(int n){
    cout<<"f";
    return n<-4;
}

int test(){
    cout<<(f(-6) && f(6));
    return 0;
}
}
namespace A219_6{


int h(int d){
    int x = 17;
    if (d) 
        x = 7;
    if (d > 4)
         x = 6;
    else
         return 1;
    return x;
}

int test(){
    cout << h(4);
    return 0;
}
}
namespace A219_7{



int f(int &x, int &y){
    x = 4;
    y-= 6;
    return y;
}

int test(){
    int a = 3, b = 2;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 1;
        cout << ((a>7) || ((b-=2) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A219_9{



int a = 8, b = 6, c = 4;

int h(int a){
    a = 1;
    b += 3;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 1;
    b = 2;
    int c = 3;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A219_10{



int a = 6, b = 9, c = 3;

int h(){
    a = 6;
    int b = 8;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 5;
    int c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A220_8{
namespace B1{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A220_0{
void test(){cout << (8 / 15 * 15 / 15);}
}
namespace A220_1{
void test(){int d = 5;
cout << d - 7 * 4 / 6 * 9;
cout << ":" << 'd' << ":" << d << ":" << "d";}
}
namespace A220_2{
void test(){cout << ( 2.0 >= 4 || ! 6 <= 9 && true > 6.0);}
}
namespace A220_4{
void test(){cout << (9 == 3.0 != 4 <= 4.0);}
}
namespace A220_5{
void test(){if (6 < 3)
    cout << "i";
else
    cout << "w";}
}
namespace A220_3{


bool f(int n){
    cout<<"f";
    return n<=1;
}

int test(){
    cout<<(f(0) && f(-3));
    return 0;
}
}
namespace A220_6{


int h(int a, int b){
    int c = 46;
    if (a)
        return 5;
    else if (b != 2)
         c = 1;
    else 
        c = 8;
    return c;
}

int test(){
    cout << h(0, -6);
    return 0;
}
}
namespace A220_7{



int f(int &x, int &y){
    x = 5;
    y-= 7;
    return y;
}

int test(){
    int a = 4, b = 6;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 9;
        cout << ((b>=5) || ((a+=1) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A220_9{



int a = 1, b = 7, c = 3;

int f(int &a){
    int c;
    a *= 1;
    b = 4;
    c = 2;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 0;
    c = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A220_10{



int a = 4, b = 8, c = 0;

int g(){
    a = 4;
    int b = 3;
    c = 7;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 2;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A221_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A221_0{
void test(){cout << (4 % 10 % 3 % 12);}
}
namespace A221_1{
void test(){int b = 4;
cout << "b" << ":" << b << ":" << 'b';
cout << ":" << b - 53 / 6 * 6;}
}
namespace A221_2{
void test(){cout << (! 3 < 7 &&  5.0 != 8 or 8.0 == false);}
}
namespace A221_4{
void test(){cout << (7 >= true < 2 > 6.0);}
}
namespace A221_5{
void test(){if (12 == 13)
    cout << "l";
else
    cout << "z";}
}
namespace A221_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-7) or f(-2));
    return 0;
}
}
namespace A221_6{


int g(int a){
    int v = 22;
    if (a <= -4) 
        return 9;
    if (a != 5)
         v = 6;
    else
         return 0;
    return v;
}

int test(){
    cout << g(-9);
    return 0;
}
}
namespace A221_7{



int f(int &x, int &y){
    x = 8;
    y+= 1;
    return x;
}

int test(){
    int a = 2, b = 5;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 6;
        cout << ((b>6) && ((a-=2) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A221_9{



int a = 9, b = 4, c = 2;

int h(int b){
    a = 3;
    b -= 5;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 3;
    c = 8;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A221_10{



int a = 9, b = 1, c = 6;

int h(){
    int a = 9;
    b = 7;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    int b = 1;
    c = 4;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A222_8{
namespace B1{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A222_0{
void test(){cout << (6 * 9 / 5 * 4);}
}
namespace A222_1{
void test(){int d = 5;
cout << d - 53 / 5 * 5;
cout << ":" << "d" << ":" << 'd' << ":" << d;}
}
namespace A222_2{
void test(){cout << ( 9.0 > 2 and ! 5 <= 3 || false >= 7.0);}
}
namespace A222_4{
void test(){cout << (8 <= false < 3 > 9.0);}
}
namespace A222_5{
void test(){if (16 > 10)
    cout << "d";
else
    cout << "n";}
}
namespace A222_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-5) and f(-1));
    return 0;
}
}
namespace A222_6{


int f(int d){
    int u = 56;
    if (d == 3) 
        u = 2;
    else if (d >= 1)
         return 4;
    else
         u = 5;
    return u;
}

int test(){
    cout << f(-6);
    return 0;
}
}
namespace A222_7{



int f(int &x, int &y){
    x = 4;
    y+= 4;
    return x;
}

int test(){
    int a = 5, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((b<4) && ((a+=2) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A222_9{



int a = 1, b = 4, c = 6;

int g(int b){
    a += 4;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 7;
    c = 5;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A222_10{



int a = 8, b = 5, c = 3;

int f(){
    a = 8;
    int b = 9;
    c = 6;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 9;
    c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A223_8{
namespace B1{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A223_0{
void test(){cout << (15 / 12 * 10 % 3);}
}
namespace A223_1{
void test(){int d = 2;
cout << d + 48 / 6 * 5;
cout << ":" << 'd' << ":" << "d" << ":" << d;}
}
namespace A223_2{
void test(){cout << (! 3.0 == 2 or  4.0 != true and 5 < 9);}
}
namespace A223_4{
void test(){cout << (6 != 5 == 7.0 >= 4);}
}
namespace A223_5{
void test(){if (1 >= 6)
    cout << "p";
else
    cout << "r";}
}
namespace A223_3{


bool f(int n){
    cout<<"f";
    return n!=-1;
}

int test(){
    cout<<(f(-4) || f(1));
    return 0;
}
}
namespace A223_6{


int f(int a, int b){
    int c = 35;
    if (b >= 4)
        return 7;
    if (a > 3)
         return 6;
    else 
        c = 4;
    return c;
}

int test(){
    cout << f(-6, 5);
    return 0;
}
}
namespace A223_7{



int f(int &x, int &y){
    x = 1;
    y-= 8;
    return y;
}

int test(){
    int a = 6, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 5;
        cout << ((a<=3) || ((b-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A223_9{



int a = 9, b = 0, c = 6;

int g(int &a){
    int c;
    a = 3;
    b = 3;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 8;
    int b = 1;
    c = 9;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A223_10{



int a = 7, b = 8, c = 4;

int g(){
    a = 7;
    int b = 1;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 2;
    int b = 9;
    c = 2;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A224_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    a = a + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A224_0{
void test(){cout << (10 * 8 / 4 / 10);}
}
namespace A224_1{
void test(){int c = 3;
cout << 'c' << ":" << "c" << ":" << c;
cout << ":" << c + 67 % 15 * 5;}
}
namespace A224_2{
void test(){cout << (! 5.0 < 3.0 ||  6 >= false and 4 <= 8);}
}
namespace A224_4{
void test(){cout << (5.0 < false >= true != 7);}
}
namespace A224_5{
void test(){if (11 <= 4)
    cout << "r";
else
    cout << "o";}
}
namespace A224_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(7) || f(8));
    return 0;
}
}
namespace A224_6{


int g(int a, int b){
    int c = 72;
    if (b != -5)
        return 9;
    if (a <= 1)
         c = 0;
    else 
        c = 2;
    return c;
}

int test(){
    cout << g(2, -4);
    return 0;
}
}
namespace A224_7{



int f(int &x, int &y){
    x = 6;
    y+= 1;
    return y;
}

int test(){
    int a = 4, b = 3;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 9;
        cout << ((a>7) && ((b-=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A224_9{



int a = 0, b = 5, c = 2;

int f(int &a){
    a += 4;
    b -= 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 4;
    c = 7;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A224_10{



int a = 8, b = 3, c = 0;

int h(){
    a = 8;
    int b = 5;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 4;
    c = 7;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A225_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A225_0{
void test(){cout << (3 % 3 % 6 * 8);}
}
namespace A225_1{
void test(){int a = 4;
cout << a + 59 % 15 / 5;
cout << ":" << a << ":" << 'a' << ":" << "a";}
}
namespace A225_2{
void test(){cout << (! 7 == 7.0 &&  true > 6 && 2 != 6.0);}
}
namespace A225_4{
void test(){cout << (2.0 <= 9 == 8.0 > 8);}
}
namespace A225_5{
void test(){if (14 != 11)
    cout << "f";
else
    cout << "f";}
}
namespace A225_3{


bool f(int n){
    cout<<"f";
    return n==0;
}

int test(){
    cout<<(f(-5) && f(-9));
    return 0;
}
}
namespace A225_6{


int f(int a, int b){
    int c = 11;
    if (b)
        return 3;
    else if (a == -1)
         return 8;
    else 
        c = 4;
    return c;
}

int test(){
    cout << f(8, 8);
    return 0;
}
}
namespace A225_7{



int f(int &x, int &y){
    x = 2;
    y-= 6;
    return x;
}

int test(){
    int a = 1, b = 7;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 4;
        cout << ((b>=4) || ((a+=2) >= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A225_9{



int a = 2, b = 1, c = 5;

int h(int b){
    int c;
    a = 1;
    b *= 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 3;
    c = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A225_10{



int a = 7, b = 4, c = 9;

int f(){
    a = 7;
    int b = 0;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 1;
    c = 8;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A226_8{
namespace B1{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A226_0{
void test(){cout << (10 % 15 * 3 * 8);}
}
namespace A226_1{
void test(){int c = 4;
cout << c - 9 * 4 / 9 * 3;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A226_2{
void test(){cout << (! 2.0 != 3 or  8.0 >= 8 or 9 < true);}
}
namespace A226_4{
void test(){cout << (6.0 != false < 3 > 2);}
}
namespace A226_5{
void test(){if (0 <= 16)
    cout << "w";
else
    cout << "s";}
}
namespace A226_3{


bool f(int n){
    cout<<"f";
    return n>=0;
}

int test(){
    cout<<(f(5) and f(4));
    return 0;
}
}
namespace A226_6{


int h(int b){
    int x = 28;
    if (b) 
        return 7;
    if (b <= -2)
         x = 1;
    else
         return 8;
    return x;
}

int test(){
    cout << h(3);
    return 0;
}
}
namespace A226_7{



int f(int &x, int &y){
    x = 2;
    y-= 6;
    return y;
}

int test(){
    int a = 4, b = 9;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 7;
        cout << ((b<=7) || ((a+=2) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A226_9{



int a = 0, b = 9, c = 7;

int f(int &a){
    int c;
    a -= 3;
    b *= 5;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 8;
    b = 5;
    int c = 4;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A226_10{



int a = 5, b = 3, c = 9;

int g(){
    int a = 5;
    b = 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 6;
    int c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A227_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"416:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A227_0{
void test(){cout << (8 / 10 / 9 / 15);}
}
namespace A227_1{
void test(){int a = 9;
cout << a + 6 * 8 / 9 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A227_2{
void test(){cout << (! 4 <= 9.0 and  5 > 7 || 4.0 == false);}
}
namespace A227_4{
void test(){cout << (5 == 7.0 >= 6 <= true);}
}
namespace A227_5{
void test(){if (7 != 14)
    cout << "t";
else
    cout << "g";}
}
namespace A227_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-7) or f(2));
    return 0;
}
}
namespace A227_6{


int h(int a, int b){
    int c = 66;
    if (b < -2)
        return 9;
    if (a >= 5)
         c = 5;
    else 
        c = 6;
    return c;
}

int test(){
    cout << h(-7, 3);
    return 0;
}
}
namespace A227_7{



int f(int &x, int &y){
    x = 1;
    y+= 8;
    return x;
}

int test(){
    int a = 2, b = 7;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 8;
        cout << ((a<6) && ((b-=1) <= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A227_9{



int a = 7, b = 3, c = 0;

int h(int b){
    a = 2;
    b = 5;
    c = 1;
    return a + b + c;
}

int test(){
    a = 9;
    b = 6;
    int c = 8;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A227_10{



int a = 5, b = 0, c = 8;

int f(){
    a = 5;
    int b = 2;
    c = 0;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 8;
    int c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A228_8{
namespace B1{
int f(int a, int &b){
    int t;
    t = a + b;
    a = a + 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A228_0{
void test(){cout << (12 * 3 % 6 % 3);}
}
namespace A228_1{
void test(){int c = 8;
cout << c - 7 * 6 / 3 * 9;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A228_2{
void test(){cout << (! 7.0 == true and  2 <= 3 || 9.0 != 5);}
}
namespace A228_4{
void test(){cout << (3 == 5.0 < 8.0 > 5);}
}
namespace A228_5{
void test(){if (3 == 1)
    cout << "a";
else
    cout << "y";}
}
namespace A228_3{


bool f(int n){
    cout<<"f";
    return n<4;
}

int test(){
    cout<<(f(6) or f(-8));
    return 0;
}
}
namespace A228_6{


int g(int a, int b){
    int c = 28;
    if (a == -4)
        return 2;
    else if (b < 0)
         return 1;
    else 
        c = 3;
    return c;
}

int test(){
    cout << g(-2, -2);
    return 0;
}
}
namespace A228_7{



int f(int &x, int &y){
    x = 9;
    y+= 1;
    return y;
}

int test(){
    int a = 5, b = 4;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 1;
        cout << ((b<=3) && ((a-=1) <= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A228_9{



int a = 1, b = 2, c = 3;

int g(int &b){
    int c;
    a = 4;
    b += 2;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 2;
    int c = 0;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A228_10{



int a = 9, b = 3, c = 4;

int h(){
    a = 9;
    int b = 2;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 6;
    c = 1;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A229_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A229_0{
void test(){cout << (15 % 9 % 4 * 12);}
}
namespace A229_1{
void test(){int b = 9;
cout << b - 48 % 15 * 6;
cout << ":" << 'b' << ":" << "b" << ":" << b;}
}
namespace A229_2{
void test(){cout << (! 3.0 >= 6 ||  false < 7 or 5.0 > 4);}
}
namespace A229_4{
void test(){cout << (2 <= false != 9 >= 7);}
}
namespace A229_5{
void test(){if (19 >= 12)
    cout << "h";
else
    cout << "a";}
}
namespace A229_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) || f(-4));
    return 0;
}
}
namespace A229_6{


int f(int c){
    int z = 66;
    if (c < 2) 
        z = 3;
    else if (c > -3)
         return 7;
    else
         z = 0;
    return z;
}

int test(){
    cout << f(6);
    return 0;
}
}
namespace A229_7{



int f(int &x, int &y){
    x = 6;
    y-= 4;
    return x;
}

int test(){
    int a = 5, b = 2;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((a>=5) || ((b+=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A229_9{



int a = 7, b = 6, c = 8;

int f(int a){
    a -= 1;
    b = 5;
    c = 4;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 9;
    c = 1;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A229_10{



int a = 4, b = 0, c = 5;

int g(){
    a = 4;
    int b = 7;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 9;
    c = 2;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A230_8{
namespace B1{
void f(int &n){
    if (n > 0) n = 0;
    else n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n > 0) n = 0;
    else n = 0;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 0, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"00:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A230_0{
void test(){cout << (9 / 4 * 12 / 9);}
}
namespace A230_1{
void test(){int a = 6;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a + 53 / 6 / 5;}
}
namespace A230_2{
void test(){cout << (! 8.0 >= true &&  9 <= 8 and 4.0 < 4);}
}
namespace A230_4{
void test(){cout << (2.0 > 3.0 <= 6 == 4.0);}
}
namespace A230_5{
void test(){if (18 < 0)
    cout << "j";
else
    cout << "o";}
}
namespace A230_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-2) and f(-1));
    return 0;
}
}
namespace A230_6{


int h(int a, int b){
    int c = 61;
    if (a)
        c = 0;
    else if (b >= -3)
         return 7;
    else 
        c = 1;
    return c;
}

int test(){
    cout << h(-5, 4);
    return 0;
}
}
namespace A230_7{



int f(int &x, int &y){
    x = 4;
    y+= 5;
    return y;
}

int test(){
    int a = 1, b = 6;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 3;
        cout << ((a>5) && ((b+=2) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A230_9{



int a = 2, b = 4, c = 1;

int h(int &a){
    int c;
    a *= 2;
    b += 5;
    c = 1;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 0;
    c = 3;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A230_10{



int a = 9, b = 2, c = 8;

int h(){
    a = 9;
    int b = 1;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 4;
    int b = 5;
    c = 6;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A231_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A231_0{
void test(){cout << (6 * 8 / 15 % 5);}
}
namespace A231_1{
void test(){int b = 3;
cout << b - 67 / 5 * 5;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A231_2{
void test(){cout << ( 6 != 5 or ! 7 == 2.0 && false > 6.0);}
}
namespace A231_4{
void test(){cout << (4 != 8 >= 9.0 < true);}
}
namespace A231_5{
void test(){if (4 > 8)
    cout << "e";
else
    cout << "q";}
}
namespace A231_3{


bool f(int n){
    cout<<"f";
    return n>-1;
}

int test(){
    cout<<(f(9) && f(0));
    return 0;
}
}
namespace A231_6{


int g(int b){
    int w = 75;
    if (b != 0) 
        return 9;
    if (b > -1)
         w = 4;
    else
         w = 5;
    return w;
}

int test(){
    cout << g(-2);
    return 0;
}
}
namespace A231_7{



int f(int &x, int &y){
    x = 2;
    y-= 8;
    return x;
}

int test(){
    int a = 3, b = 1;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 2;
        cout << ((b<7) || ((a-=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 6;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A231_9{



int a = 8, b = 7, c = 9;

int g(int b){
    a = 4;
    b = 3;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 2;
    c = 1;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A231_10{



int a = 7, b = 3, c = 7;

int f(){
    int a = 7;
    b = 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 6;
    int b = 9;
    c = 3;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A232_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A232_0{
void test(){cout << (4 % 5 % 5 * 10);}
}
namespace A232_1{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A232_2{
void test(){cout << (! 2 > 6.0 ||  4.0 < false or 8 == 9);}
}
namespace A232_4{
void test(){cout << (2.0 == 3 < 6 >= false);}
}
namespace A232_5{
void test(){if (9 == 18)
    cout << "y";
else
    cout << "w";}
}
namespace A232_3{


bool f(int n){
    cout<<"f";
    return n>=-4;
}

int test(){
    cout<<(f(-3) and f(3));
    return 0;
}
}
namespace A232_6{


int h(int a){
    int y = 77;
    if (a) 
        return 8;
    else if (a < -5)
         return 6;
    else
         y = 1;
    return y;
}

int test(){
    cout << h(-5);
    return 0;
}
}
namespace A232_7{



int f(int &x, int &y){
    x = 4;
    y-= 7;
    return y;
}

int test(){
    int a = 9, b = 7;
    a = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 2;
        cout << ((a<=6) && ((b-=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A232_9{



int a = 7, b = 9, c = 6;

int f(int a){
    int c;
    a += 1;
    b = 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 8;
    int c = 0;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A232_10{



int a = 1, b = 0, c = 8;

int g(){
    a = 1;
    int b = 2;
    int c = 6;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 7;
    c = 8;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A233_8{
namespace B1{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A233_0{
void test(){cout << (5 * 6 / 8 / 4);}
}
namespace A233_1{
void test(){int a = 8;
cout << a - 53 % 15 / 5;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A233_2{
void test(){cout << ( 3 != 3 and ! 3.0 <= 7.0 || 9 >= true);}
}
namespace A233_4{
void test(){cout << (6.0 != 7 <= 8 > 5);}
}
namespace A233_5{
void test(){if (17 != 2)
    cout << "z";
else
    cout << "d";}
}
namespace A233_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(1) || f(3));
    return 0;
}
}
namespace A233_6{


int g(int a, int b){
    int c = 53;
    if (a > -1)
        return 5;
    if (b <= 3)
         c = 7;
    else 
        return 2;
    return c;
}

int test(){
    cout << g(-1, 9);
    return 0;
}
}
namespace A233_7{



int f(int &x, int &y){
    x = 6;
    y+= 9;
    return x;
}

int test(){
    int a = 4, b = 8;
    b = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 4;
        cout << ((a>4) || ((b+=2) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A233_9{



int a = 5, b = 4, c = 1;

int g(int &b){
    a = 4;
    b = 4;
    c = 2;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 4;
    c = 9;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A233_10{



int a = 9, b = 1, c = 0;

int h(){
    int a = 9;
    b = 2;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 4;
    c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A234_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b - 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A234_0{
void test(){cout << (3 / 12 * 10 % 6);}
}
namespace A234_1{
void test(){int a = 8;
cout << a + 3 * 5 / 6 * 7;
cout << ":" << 'a' << ":" << a << ":" << "a";}
}
namespace A234_2{
void test(){cout << (! 8 <= 8.0 &&  5 != 5.0 and 2 >= true);}
}
namespace A234_4{
void test(){cout << (true != 4 <= 7.0 > 9.0);}
}
namespace A234_5{
void test(){if (5 >= 7)
    cout << "d";
else
    cout << "h";}
}
namespace A234_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-8) && f(4));
    return 0;
}
}
namespace A234_6{


int h(int c){
    int w = 52;
    if (c <= 1) 
        w = 2;
    else if (c != 0)
         return 3;
    else
         w = 6;
    return w;
}

int test(){
    cout << h(2);
    return 0;
}
}
namespace A234_7{



int f(int &x, int &y){
    x = 3;
    y-= 2;
    return x;
}

int test(){
    int a = 7, b = 5;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 8;
        cout << ((a<3) && ((b+=2) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A234_9{



int a = 2, b = 3, c = 5;

int h(int b){
    a *= 1;
    b -= 3;
    c = 5;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 8;
    c = 6;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A234_10{



int a = 9, b = 1, c = 2;

int f(){
    a = 9;
    int b = 7;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 3;
    c = 6;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A235_8{
namespace B1{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A235_0{
void test(){cout << (5 * 5 * 10 * 6);}
}
namespace A235_1{
void test(){int a = 7;
cout << 'a' << ":" << a << ":" << "a";
cout << ":" << a - 48 / 6 * 5;}
}
namespace A235_2{
void test(){cout << (! 7 < false or  2.0 == 9.0 && 6 > 4);}
}
namespace A235_4{
void test(){cout << (2 >= 8.0 < 9 == false);}
}
namespace A235_5{
void test(){if (2 < 15)
    cout << "o";
else
    cout << "k";}
}
namespace A235_3{


bool f(int n){
    cout<<"f";
    return n!=1;
}

int test(){
    cout<<(f(0) or f(-5));
    return 0;
}
}
namespace A235_6{


int f(int a, int b){
    int c = 49;
    if (b != -5)
        return 3;
    if (a > -4)
         c = 4;
    else 
        return 8;
    return c;
}

int test(){
    cout << f(3, -8);
    return 0;
}
}
namespace A235_7{



int f(int &x, int &y){
    x = 4;
    y+= 9;
    return y;
}

int test(){
    int a = 2, b = 8;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 1;
        cout << ((b>=7) || ((a-=1) >= 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A235_9{



int a = 5, b = 1, c = 6;

int f(int &a){
    int c;
    a -= 5;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 9;
    int c = 0;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A235_10{



int a = 4, b = 3, c = 7;

int h(){
    a = 4;
    int b = 9;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    int b = 5;
    c = 8;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A236_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"433:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A236_0{
void test(){cout << (8 / 8 / 5 / 10);}
}
namespace A236_1{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A236_2{
void test(){cout << (! 6 >= 3 and  9.0 <= 2.0 and 2 != false);}
}
namespace A236_4{
void test(){cout << (4 > 3.0 <= 9 < 5);}
}
namespace A236_5{
void test(){if (10 <= 17)
    cout << "u";
else
    cout << "z";}
}
namespace A236_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(9) or f(6));
    return 0;
}
}
namespace A236_6{


int f(int d){
    int v = 29;
    if (d) 
        return 3;
    if (d >= -5)
         v = 4;
    else
         return 7;
    return v;
}

int test(){
    cout << f(5);
    return 0;
}
}
namespace A236_7{



int f(int &x, int &y){
    x = 7;
    y+= 3;
    return y;
}

int test(){
    int a = 7, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 2;
        cout << ((b<3) && ((a+=2) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A236_9{



int a = 8, b = 2, c = 3;

int h(int a){
    int c;
    a = 4;
    b *= 3;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 4;
    b = 2;
    c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A236_10{



int a = 6, b = 1, c = 9;

int g(){
    int a = 6;
    b = 4;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 8;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A237_8{
namespace B1{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 2;
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
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 2;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"314:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A237_0{
void test(){cout << (12 % 4 % 3 % 4);}
}
namespace A237_1{
void test(){int b = 5;
cout << b + 67 % 15 / 6;
cout << ":" << "b" << ":" << 'b' << ":" << b;}
}
namespace A237_2{
void test(){cout << (! 8.0 < 5.0 or  true == 7 && 4 > 9);}
}
namespace A237_4{
void test(){cout << (3 == 4.0 != true >= 5.0);}
}
namespace A237_5{
void test(){if (13 > 9)
    cout << "k";
else
    cout << "n";}
}
namespace A237_3{


bool f(int n){
    cout<<"f";
    return n<2;
}

int test(){
    cout<<(f(-1) and f(-4));
    return 0;
}
}
namespace A237_6{


int g(int b){
    int x = 35;
    if (b == 5) 
        return 0;
    if (b < 3)
         x = 2;
    else
         return 8;
    return x;
}

int test(){
    cout << g(-3);
    return 0;
}
}
namespace A237_7{



int f(int &x, int &y){
    x = 4;
    y-= 5;
    return x;
}

int test(){
    int a = 9, b = 8;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 4;
        cout << ((b<=5) || ((a-=1) <= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A237_9{



int a = 6, b = 9, c = 4;

int g(int &b){
    a = 3;
    b += 5;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 0;
    int c = 1;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A237_10{



int a = 7, b = 1, c = 0;

int f(){
    int a = 7;
    b = 5;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 9;
    b = 7;
    int c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A238_8{
namespace B1{
int f(int n){
    return n + 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 1;
cout << f(n);
cout << n;}
}

void test(){cout<<"33:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A238_0{
void test(){cout << (4 % 3 * 15 * 9);}
}
namespace A238_1{
void test(){int a = 2;
cout << a - 48 % 15 * 6;
cout << ":" << a << ":" << "a" << ":" << 'a';}
}
namespace A238_2{
void test(){cout << (! 7.0 >= 5 ||  8 <= 3 || true < 4.0);}
}
namespace A238_4{
void test(){cout << (2 == 6 >= 5.0 != false);}
}
namespace A238_5{
void test(){if (15 == 5)
    cout << "c";
else
    cout << "f";}
}
namespace A238_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-6) || f(-9));
    return 0;
}
}
namespace A238_6{


int g(int a, int b){
    int c = 26;
    if (b >= -2)
        c = 0;
    else if (a == 0)
         c = 6;
    else 
        return 9;
    return c;
}

int test(){
    cout << g(-3, 6);
    return 0;
}
}
namespace A238_7{



int f(int &x, int &y){
    x = 7;
    y+= 1;
    return x;
}

int test(){
    int a = 2, b = 9;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 8;
        cout << ((b>=4) || ((a+=1) < 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A238_9{



int a = 8, b = 3, c = 3;

int f(int &b){
    int c;
    a *= 1;
    b += 5;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 5;
    b = 0;
    int c = 9;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A238_10{



int a = 8, b = 3, c = 0;

int f(){
    a = 8;
    int b = 6;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 1;
    int b = 5;
    c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A239_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    b += 2;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B3{
int f(int a, int &b){
    int t = a + b;
    b += 2;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    b += 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"415:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A239_0{
void test(){cout << (10 / 12 / 12 % 3);}
}
namespace A239_1{
void test(){int c = 7;
cout << c + 59 / 6 * 6;
cout << ":" << 'c' << ":" << c << ":" << "c";}
}
namespace A239_2{
void test(){cout << ( 6.0 == 7 && ! false != 5 or 2 > 3.0);}
}
namespace A239_4{
void test(){cout << (8.0 > 8 <= 9.0 < 7);}
}
namespace A239_5{
void test(){if (8 >= 19)
    cout << "g";
else
    cout << "j";}
}
namespace A239_3{


bool f(int n){
    cout<<"f";
    return n<=-3;
}

int test(){
    cout<<(f(-3) && f(7));
    return 0;
}
}
namespace A239_6{


int g(int a){
    int y = 30;
    if (a) 
        y = 9;
    else if (a != -2)
         return 5;
    else
         y = 1;
    return y;
}

int test(){
    cout << g(9);
    return 0;
}
}
namespace A239_7{



int f(int &x, int &y){
    x = 5;
    y-= 9;
    return y;
}

int test(){
    int a = 7, b = 8;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 4;
        cout << ((a>6) && ((b-=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A239_9{



int a = 2, b = 8, c = 6;

int g(int a){
    a = 3;
    b = 2;
    c = 4;
    return a + b + c;
}

int test(){
    a = 1;
    b = 4;
    int c = 7;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A239_10{



int a = 3, b = 8, c = 2;

int g(){
    a = 3;
    int b = 0;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 7;
    int b = 9;
    c = 6;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A240_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a < b) a = b;
    else b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int a, int &b){
    if (a < b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A240_0{
void test(){cout << (15 * 6 % 4 / 12);}
}
namespace A240_1{
void test(){int c = 3;
cout << c - 59 / 6 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A240_2{
void test(){cout << ( 4.0 >= 6 and ! 2.0 <= 9 and 8 == false);}
}
namespace A240_4{
void test(){cout << (9 == 4 > true != 2.0);}
}
namespace A240_5{
void test(){if (2 < 14)
    cout << "r";
else
    cout << "t";}
}
namespace A240_3{


bool f(int n){
    cout<<"f";
    return n>-2;
}

int test(){
    cout<<(f(2) or f(5));
    return 0;
}
}
namespace A240_6{


int f(int a, int b){
    int c = 34;
    if (b)
        c = 2;
    else if (a <= 4)
         return 3;
    else 
        return 0;
    return c;
}

int test(){
    cout << f(9, 1);
    return 0;
}
}
namespace A240_7{



int f(int &x, int &y){
    x = 2;
    y+= 3;
    return y;
}

int test(){
    int a = 2, b = 6;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 8;
        cout << ((a>=3) || ((b+=2) >= 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A240_9{



int a = 9, b = 8, c = 4;

int h(int a){
    int c;
    a -= 2;
    b = 1;
    c = 3;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 5;
    int c = 6;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A240_10{



int a = 4, b = 7, c = 6;

int h(){
    a = 4;
    int b = 2;
    int c = 0;
    return a + b + c;
}

int test(){
    a = 8;
    int b = 9;
    c = 3;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A241_8{
namespace B1{
int f(int a, int &b){
    b -= 1;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int &b){
    return a + b;
    b -= 1;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b -= 1;
    return t;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"412:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A241_0{
void test(){cout << (3 / 9 * 6 / 5);}
}
namespace A241_1{
void test(){int a = 5;
cout << a + 4 * 8 / 3 * 9;
cout << ":" << "a" << ":" << a << ":" << 'a';}
}
namespace A241_2{
void test(){cout << (! 3.0 < 7.0 ||  true != 4 && 4 > 8);}
}
namespace A241_4{
void test(){cout << (false >= 2 <= 3.0 < 6.0);}
}
namespace A241_5{
void test(){if (7 != 6)
    cout << "p";
else
    cout << "l";}
}
namespace A241_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-7) || f(8));
    return 0;
}
}
namespace A241_6{


int h(int a, int b){
    int c = 93;
    if (a < 5)
        c = 8;
    if (b != 2)
         c = 4;
    else 
        return 1;
    return c;
}

int test(){
    cout << h(-8, -1);
    return 0;
}
}
namespace A241_7{



int f(int &x, int &y){
    x = 9;
    y-= 5;
    return x;
}

int test(){
    int a = 7, b = 4;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 9;
        cout << ((b<4) && ((a-=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A241_9{



int a = 2, b = 7, c = 1;

int f(int &b){
    a = 4;
    b -= 5;
    c = 3;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 9;
    c = 4;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A241_10{



int a = 5, b = 1, c = 4;

int h(){
    a = 5;
    int b = 3;
    int c = 2;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 1;
    c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A242_8{
namespace B1{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    a = b;
    b = a;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int &a, int &b){
    int t = b;
    a = b;
    b = t;
}
void test(){int n = 1, m = 3;
f(n, m);
cout << n << m;}
}

void test(){cout<<"31:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A242_0{
void test(){cout << (6 * 10 / 9 * 8);}
}
namespace A242_1{
void test(){int d = 8;
cout << d << ":" << 'd' << ":" << "d";
cout << ":" << d + 48 % 15 * 5;}
}
namespace A242_2{
void test(){cout << ( 5.0 != 5 && ! 6.0 == true or 3 <= 6);}
}
namespace A242_4{
void test(){cout << (7 != 3 >= 5 > 4.0);}
}
namespace A242_5{
void test(){if (13 > 18)
    cout << "i";
else
    cout << "p";}
}
namespace A242_3{


bool f(int n){
    cout<<"f";
    return n==3;
}

int test(){
    cout<<(f(-2) and f(-7));
    return 0;
}
}
namespace A242_6{


int f(int a, int b){
    int c = 52;
    if (a != 1)
        return 5;
    else if (a > -4)
         c = 7;
    else 
        return 6;
    return c;
}

int test(){
    cout << f(6, 0);
    return 0;
}
}
namespace A242_7{



int f(int &x, int &y){
    x = 3;
    y+= 1;
    return x;
}

int test(){
    int a = 2, b = 6;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 2;
        cout << ((b<=5) || ((a-=1) > 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A242_9{



int a = 0, b = 5, c = 8;

int g(int a){
    int c;
    a = 5;
    b += 1;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 3;
    b = 7;
    int c = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A242_10{



int a = 9, b = 8, c = 6;

int f(){
    int a = 9;
    b = 0;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 5;
    int b = 2;
    c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A243_8{
namespace B1{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"22:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A243_0{
void test(){cout << (9 % 15 % 8 % 15);}
}
namespace A243_1{
void test(){int c = 6;
cout << c + 7 * 5 / 6 * 3;
cout << ":" << c << ":" << 'c' << ":" << "c";}
}
namespace A243_2{
void test(){cout << ( false < 9.0 or ! 7 >= 8.0 || 9 > 2);}
}
namespace A243_4{
void test(){cout << (7.0 < 8 <= 6 == true);}
}
namespace A243_5{
void test(){if (19 <= 13)
    cout << "f";
else
    cout << "i";}
}
namespace A243_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(3) && f(1));
    return 0;
}
}
namespace A243_6{


int h(int a, int b){
    int c = 29;
    if (b)
        c = 9;
    if (b < 4)
         c = 5;
    else 
        return 9;
    return c;
}

int test(){
    cout << h(-4, -3);
    return 0;
}
}
namespace A243_7{



int f(int &x, int &y){
    x = 7;
    y-= 4;
    return y;
}

int test(){
    int a = 6, b = 8;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 9;
        cout << ((b>7) && ((a+=2) <= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A243_9{



int a = 2, b = 1, c = 1;

int h(int &b){
    a = 2;
    b *= 3;
    c = 5;
    return a + b + c;
}

int test(){
    a = 3;
    int b = 2;
    c = 5;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A243_10{



int a = 6, b = 0, c = 1;

int g(){
    int a = 6;
    b = 7;
    int c = 3;
    return a + b + c;
}

int test(){
    a = 9;
    b = 0;
    int c = 5;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A244_8{
namespace B1{
int f(int a, int &b){
    b -= 2;
    return a + b;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b -= 2;
    return t;
}
void test(){int a = 1, b = 3;
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
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int &b){
    return a + b;
    b -= 2;
}
void test(){int a = 1, b = 3;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"411:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A244_0{
void test(){cout << (12 * 15 % 9 * 8);}
}
namespace A244_1{
void test(){int c = 8;
cout << c + 48 / 6 * 6;
cout << ":" << 'c' << ":" << "c" << ":" << c;}
}
namespace A244_2{
void test(){cout << (! 4 > 7 &&  true >= 2.0 and 3 < 5.0);}
}
namespace A244_4{
void test(){cout << (9 > 3 != 3.0 == true);}
}
namespace A244_5{
void test(){if (6 <= 9)
    cout << "h";
else
    cout << "g";}
}
namespace A244_3{


bool f(int n){
    cout<<"f";
    return n<=-2;
}

int test(){
    cout<<(f(2) or f(-5));
    return 0;
}
}
namespace A244_6{


int h(int c){
    int u = 14;
    if (c == -3) 
        u = 6;
    if (c > -1)
         return 8;
    else
         u = 5;
    return u;
}

int test(){
    cout << h(1);
    return 0;
}
}
namespace A244_7{



int f(int &x, int &y){
    x = 9;
    y+= 3;
    return x;
}

int test(){
    int a = 2, b = 5;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 6;
        cout << ((b>6) || ((a+=2) > 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A244_9{



int a = 8, b = 9, c = 7;

int f(int &b){
    a *= 4;
    b = 1;
    c = 2;
    return a + b + c;
}

int test(){
    a = 0;
    int b = 6;
    int c = 4;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A244_10{



int a = 6, b = 7, c = 3;

int g(){
    a = 6;
    int b = 2;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 8;
    c = 9;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A245_8{
namespace B1{
int f(int a, int b){
    int t;
    t = a + b;
    b = b + 3;
    return t;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B3{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 2, m = 1;
cout << f(n, m);
cout << n << m;}
}

void test(){cout<<"324:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A245_0{
void test(){cout << (4 / 12 / 4 % 10);}
}
namespace A245_1{
void test(){int c = 8;
cout << c + 9 * 8 / 4 * 4;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A245_2{
void test(){cout << (! 8 != 8.0 and  false == 5 && 6 <= 3.0);}
}
namespace A245_4{
void test(){cout << (5.0 <= 5 < 8 >= 4.0);}
}
namespace A245_5{
void test(){if (10 < 16)
    cout << "w";
else
    cout << "s";}
}
namespace A245_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(8) || f(9));
    return 0;
}
}
namespace A245_6{


int f(int d){
    int z = 97;
    if (d <= 4) 
        return 3;
    else if (d >= 2)
         return 1;
    else
         z = 0;
    return z;
}

int test(){
    cout << f(-1);
    return 0;
}
}
namespace A245_7{



int f(int &x, int &y){
    x = 4;
    y-= 7;
    return y;
}

int test(){
    int a = 7, b = 4;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 3;
        cout << ((a<=3) && ((b-=1) < 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A245_9{



int a = 0, b = 2, c = 3;

int h(int a){
    int c;
    a = 2;
    b -= 4;
    c = 1;
    return a + b + c;
}

int test(){
    a = 8;
    b = 1;
    int c = 9;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A245_10{



int a = 1, b = 6, c = 9;

int h(){
    int a = 1;
    b = 4;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 3;
    int b = 7;
    c = 0;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A246_8{
namespace B1{
int f(int n){
    return n;
    n += 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B2{
int f(int n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B3{
int f(int &n){
    n += 2;
    return n;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

namespace B4{
int f(int n){
    return n + 2;
}
void test(){int n = 2;
cout << f(n);
cout << n;}
}

void test(){cout<<"44:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A246_0{
void test(){cout << (10 % 5 * 5 / 3);}
}
namespace A246_1{
void test(){int b = 5;
cout << b - 3 * 7 / 6 * 9;
cout << ":" << "b" << ":" << b << ":" << 'b';}
}
namespace A246_2{
void test(){cout << ( 2 == 9 or ! false > 6 || 6.0 < 9.0);}
}
namespace A246_4{
void test(){cout << (false != 9.0 == 2 > 7);}
}
namespace A246_5{
void test(){if (3 >= 15)
    cout << "s";
else
    cout << "b";}
}
namespace A246_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-1) and f(5));
    return 0;
}
}
namespace A246_6{


int g(int a){
    int v = 27;
    if (a >= -4) 
        return 7;
    else if (a <= 0)
         v = 9;
    else
         v = 4;
    return v;
}

int test(){
    cout << g(8);
    return 0;
}
}
namespace A246_7{



int f(int &x, int &y){
    x = 8;
    y+= 6;
    return y;
}

int test(){
    int a = 2, b = 5;
    b = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 3;
        cout << ((b>=7) && ((a+=1) >= 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A246_9{



int a = 7, b = 5, c = 6;

int g(int a){
    int c;
    a += 5;
    b = 3;
    c = 1;
    return a + b + c;
}

int test(){
    int a = 4;
    b = 3;
    int c = 0;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A246_10{



int a = 2, b = 5, c = 5;

int f(){
    a = 2;
    int b = 3;
    int c = 8;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 1;
    c = 4;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A247_8{
namespace B1{
int f(int a, int &b){
    b += 3;
    return a + b;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B2{
int f(int a, int &b){
    return a + b;
    b += 3;
}
void test(){int n = 1, m = 3;
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
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

namespace B4{
int f(int a, int &b){
    int t = a + b;
    b += 3;
    return t;
}
void test(){int n = 1, m = 3;
cout << f(m, n);
cout << n << m;}
}

void test(){cout<<"443:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A247_0{
void test(){cout << (6 % 10 / 10 / 12);}
}
namespace A247_1{
void test(){int b = 8;
cout << "b" << ":" << 'b' << ":" << b;
cout << ":" << b + 59 / 5 * 6;}
}
namespace A247_2{
void test(){cout << (! true <= 9 ||  4.0 >= 7.0 or 7 != 5);}
}
namespace A247_4{
void test(){cout << (6 < 4 <= 3 >= true);}
}
namespace A247_5{
void test(){if (15 == 2)
    cout << "n";
else
    cout << "x";}
}
namespace A247_3{


bool f(int n){
    cout<<"f";
    return n!=3;
}

int test(){
    cout<<(f(-2) && f(-8));
    return 0;
}
}
namespace A247_6{


int g(int a, int b){
    int c = 37;
    if (b == -1)
        return 7;
    if (a >= -3)
         c = 1;
    else 
        return 3;
    return c;
}

int test(){
    cout << g(5, 2);
    return 0;
}
}
namespace A247_7{



int f(int &x, int &y){
    x = 1;
    y-= 6;
    return x;
}

int test(){
    int a = 5, b = 9;
    a = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 2;
        cout << ((a<5) || ((b-=2) <= 4)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A247_9{



int a = 1, b = 2, c = 4;

int f(int &b){
    a += 3;
    b = 4;
    c = 5;
    return a + b + c;
}

int test(){
    a = 7;
    int b = 9;
    c = 5;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A247_10{



int a = 7, b = 2, c = 0;

int g(){
    int a = 7;
    b = 9;
    c = 8;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 3;
    int c = 0;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A248_8{
namespace B1{
void f(int &a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B2{
void f(int &a, int &b){
    if (a > b) {a = b;
    b = a;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B3{
void f(int &a, int &b){
    if (a > b) a = b;
}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

namespace B4{
void f(int a, int &b){
    if (a > b) {int t = a;
    a = b;
    b = t;
}}
void test(){int n = 3, m = 1;
f(n, m);
cout << n << m;}
}

void test(){cout<<"13:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A248_0{
void test(){cout << (9 * 6 % 12 % 5);}
}
namespace A248_1{
void test(){int c = 3;
cout << c + 7 * 8 / 7 * 6;
cout << ":" << "c" << ":" << c << ":" << 'c';}
}
namespace A248_2{
void test(){cout << ( 3.0 <= 3 and ! 4 > 4.0 or true == 2);}
}
namespace A248_4{
void test(){cout << (2.0 == 7.0 >= 5 < 8.0);}
}
namespace A248_5{
void test(){if (18 > 19)
    cout << "v";
else
    cout << "y";}
}
namespace A248_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-4) || f(6));
    return 0;
}
}
namespace A248_6{


int h(int d){
    int z = 50;
    if (d != -2) 
        return 2;
    if (d < 3)
         z = 8;
    else
         return 7;
    return z;
}

int test(){
    cout << h(-7);
    return 0;
}
}
namespace A248_7{



int f(int &x, int &y){
    x = 2;
    y+= 6;
    return y;
}

int test(){
    int a = 3, b = 7;
    a = f(b, a);
    cout << a << ":" << b <<':';
    {
        int a = 1, b = 9;
        cout << ((a>6) || ((b-=1) < 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A248_9{



int a = 6, b = 8, c = 5;

int g(int &b){
    a = 2;
    b = 5;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 0;
    b = 6;
    c = 8;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A248_10{



int a = 4, b = 7, c = 1;

int f(){
    int a = 4;
    b = 9;
    int c = 5;
    return a + b + c;
}

int test(){
    a = 6;
    int b = 8;
    c = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A249_8{
namespace B1{
void f(int n){
    if (n < 0) n = 0;
    else n = 1;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B2{
void f(int &n){
    if (n < 0) n = -n;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B3{
void f(int &n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

namespace B4{
void f(int n){
    if (n < 0) n = 0;
}
void test(){int n = 3, m = -1;
f(n);
f(m);
cout << n << m;}
}

void test(){cout<<"30:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A249_0{
void test(){cout << (5 / 3 * 6 * 9);}
}
namespace A249_1{
void test(){int d = 9;
cout << d - 3 * 6 / 8 * 4;
cout << ":" << "d" << ":" << d << ":" << 'd';}
}
namespace A249_2{
void test(){cout << ( 8 < false or ! 5.0 != 8 && 7.0 >= 2);}
}
namespace A249_4{
void test(){cout << (false > 2 != 6.0 <= 8);}
}
namespace A249_5{
void test(){if (4 != 5)
    cout << "b";
else
    cout << "a";}
}
namespace A249_3{


bool f(int n){
    cout<<"f";
    return n==-1;
}

int test(){
    cout<<(f(-6) && f(-9));
    return 0;
}
}
namespace A249_6{


int h(int a, int b){
    int c = 40;
    if (b <= 2)
        c = 2;
    else if (a >= 3)
         c = 6;
    else 
        return 4;
    return c;
}

int test(){
    cout << h(7, -7);
    return 0;
}
}
namespace A249_7{



int f(int &x, int &y){
    x = 8;
    y-= 6;
    return x;
}

int test(){
    int a = 9, b = 4;
    b = f(a, b);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 7;
        cout << ((b<4) && ((a+=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        int a = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A249_9{



int a = 9, b = 1, c = 4;

int h(int a){
    int c;
    a -= 1;
    b *= 3;
    c = 4;
    return a + b + c;
}

int test(){
    int a = 2;
    b = 3;
    int c = 7;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A249_10{



int a = 0, b = 4, c = 3;

int h(){
    int a = 0;
    b = 9;
    c = 2;
    return a + b + c;
}

int test(){
    int a = 6;
    b = 7;
    int c = 5;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



namespace A250_8{
namespace B1{
int f(int &a, int &b){
    return a + b;
    a += 2;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B2{
int f(int &a, int b){
    int t = a + b;
    a += 2;
    return t;
}
void test(){int a = 2, b = 4;
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
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

namespace B4{
int f(int &a, int b){
    a += 2;
    return a + b;
}
void test(){int a = 2, b = 4;
cout << f(a, b);
cout << a << b;}
}

void test(){cout<<"644:";B1::test();cout<<":";B2::test();cout<<":";B3::test();cout<<":";B4::test();}
}

namespace A250_0{
void test(){cout << (3 % 4 % 8 % 4);}
}
namespace A250_1{
void test(){int b = 5;
cout << b - 8 * 6 / 3 * 4;
cout << ":" << b << ":" << "b" << ":" << 'b';}
}
namespace A250_2{
void test(){cout << ( 6 > 6.0 || ! 2.0 <= 5 and 3 >= false);}
}
namespace A250_4{
void test(){cout << (4.0 < 7 != 9.0 == true);}
}
namespace A250_5{
void test(){if (8 < 4)
    cout << "l";
else
    cout << "e";}
}
namespace A250_3{


bool f(int n){
    cout<<"f";
    return n;
}

int test(){
    cout<<(f(-3) and f(4));
    return 0;
}
}
namespace A250_6{


int f(int c){
    int x = 99;
    if (c) 
        return 0;
    else if (c > -3)
         x = 4;
    else
         x = 6;
    return x;
}

int test(){
    cout << f(0);
    return 0;
}
}
namespace A250_7{



int f(int &x, int &y){
    x = 5;
    y+= 1;
    return x;
}

int test(){
    int a = 2, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 2;
        cout << ((b>=7) || ((a+=1) > 7)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        a = 4;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
}
namespace A250_9{



int a = 8, b = 1, c = 5;

int h(int a){
    a = 1;
    b += 4;
    c = 5;
    return a + b + c;
}

int test(){
    int a = 7;
    b = 2;
    c = 3;
    cout << h(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
}
namespace A250_10{



int a = 9, b = 8, c = 5;

int g(){
    int a = 9;
    b = 1;
    c = 0;
    return a + b + c;
}

int test(){
    int a = 4;
    int b = 2;
    c = 3;
    cout << g() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
}



        int main(){
        cout<<"call 100.bat\n";
cout<<"=100_0.py\n";
A100_0::test(); cout<<endl;
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
cout<<"call 101.bat\n";
cout<<"=101_0.py\n";
A101_0::test(); cout<<endl;
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
cout<<"call 102.bat\n";
cout<<"=102_0.py\n";
A102_0::test(); cout<<endl;
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
cout<<"call 103.bat\n";
cout<<"=103_0.py\n";
A103_0::test(); cout<<endl;
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
cout<<"call 104.bat\n";
cout<<"=104_0.py\n";
A104_0::test(); cout<<endl;
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
cout<<"call 105.bat\n";
cout<<"=105_0.py\n";
A105_0::test(); cout<<endl;
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
cout<<"call 106.bat\n";
cout<<"=106_0.py\n";
A106_0::test(); cout<<endl;
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
cout<<"call 107.bat\n";
cout<<"=107_0.py\n";
A107_0::test(); cout<<endl;
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
cout<<"call 108.bat\n";
cout<<"=108_0.py\n";
A108_0::test(); cout<<endl;
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
cout<<"call 109.bat\n";
cout<<"=109_0.py\n";
A109_0::test(); cout<<endl;
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
cout<<"call 110.bat\n";
cout<<"=110_0.py\n";
A110_0::test(); cout<<endl;
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
cout<<"call 111.bat\n";
cout<<"=111_0.py\n";
A111_0::test(); cout<<endl;
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
cout<<"call 112.bat\n";
cout<<"=112_0.py\n";
A112_0::test(); cout<<endl;
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
cout<<"call 113.bat\n";
cout<<"=113_0.py\n";
A113_0::test(); cout<<endl;
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
cout<<"call 114.bat\n";
cout<<"=114_0.py\n";
A114_0::test(); cout<<endl;
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
cout<<"call 115.bat\n";
cout<<"=115_0.py\n";
A115_0::test(); cout<<endl;
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
cout<<"call 116.bat\n";
cout<<"=116_0.py\n";
A116_0::test(); cout<<endl;
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
cout<<"call 117.bat\n";
cout<<"=117_0.py\n";
A117_0::test(); cout<<endl;
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
cout<<"call 118.bat\n";
cout<<"=118_0.py\n";
A118_0::test(); cout<<endl;
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
cout<<"call 119.bat\n";
cout<<"=119_0.py\n";
A119_0::test(); cout<<endl;
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
cout<<"call 120.bat\n";
cout<<"=120_0.py\n";
A120_0::test(); cout<<endl;
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
cout<<"call 121.bat\n";
cout<<"=121_0.py\n";
A121_0::test(); cout<<endl;
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
cout<<"call 122.bat\n";
cout<<"=122_0.py\n";
A122_0::test(); cout<<endl;
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
cout<<"call 123.bat\n";
cout<<"=123_0.py\n";
A123_0::test(); cout<<endl;
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
cout<<"call 124.bat\n";
cout<<"=124_0.py\n";
A124_0::test(); cout<<endl;
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
cout<<"call 125.bat\n";
cout<<"=125_0.py\n";
A125_0::test(); cout<<endl;
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
cout<<"call 126.bat\n";
cout<<"=126_0.py\n";
A126_0::test(); cout<<endl;
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
cout<<"call 127.bat\n";
cout<<"=127_0.py\n";
A127_0::test(); cout<<endl;
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
cout<<"call 128.bat\n";
cout<<"=128_0.py\n";
A128_0::test(); cout<<endl;
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
cout<<"call 129.bat\n";
cout<<"=129_0.py\n";
A129_0::test(); cout<<endl;
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
cout<<"call 130.bat\n";
cout<<"=130_0.py\n";
A130_0::test(); cout<<endl;
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
cout<<"call 131.bat\n";
cout<<"=131_0.py\n";
A131_0::test(); cout<<endl;
cout<<"=131_1.py\n";
A131_1::test(); cout<<endl;
cout<<"=131_2.py\n";
A131_2::test(); cout<<endl;
cout<<"=131_3.py\n";
A131_3::test(); cout<<endl;
cout<<"=131_4.py\n";
A131_4::test(); cout<<endl;
cout<<"=131_5.py\n";
A131_5::test(); cout<<endl;
cout<<"=131_6.py\n";
A131_6::test(); cout<<endl;
cout<<"=131_7.py\n";
A131_7::test(); cout<<endl;
cout<<"=131_8.py\n";
A131_8::test(); cout<<endl;
cout<<"=131_9.py\n";
A131_9::test(); cout<<endl;
cout<<"=131_10.py\n";
A131_10::test(); cout<<endl;
cout<<"call 132.bat\n";
cout<<"=132_0.py\n";
A132_0::test(); cout<<endl;
cout<<"=132_1.py\n";
A132_1::test(); cout<<endl;
cout<<"=132_2.py\n";
A132_2::test(); cout<<endl;
cout<<"=132_3.py\n";
A132_3::test(); cout<<endl;
cout<<"=132_4.py\n";
A132_4::test(); cout<<endl;
cout<<"=132_5.py\n";
A132_5::test(); cout<<endl;
cout<<"=132_6.py\n";
A132_6::test(); cout<<endl;
cout<<"=132_7.py\n";
A132_7::test(); cout<<endl;
cout<<"=132_8.py\n";
A132_8::test(); cout<<endl;
cout<<"=132_9.py\n";
A132_9::test(); cout<<endl;
cout<<"=132_10.py\n";
A132_10::test(); cout<<endl;
cout<<"call 133.bat\n";
cout<<"=133_0.py\n";
A133_0::test(); cout<<endl;
cout<<"=133_1.py\n";
A133_1::test(); cout<<endl;
cout<<"=133_2.py\n";
A133_2::test(); cout<<endl;
cout<<"=133_3.py\n";
A133_3::test(); cout<<endl;
cout<<"=133_4.py\n";
A133_4::test(); cout<<endl;
cout<<"=133_5.py\n";
A133_5::test(); cout<<endl;
cout<<"=133_6.py\n";
A133_6::test(); cout<<endl;
cout<<"=133_7.py\n";
A133_7::test(); cout<<endl;
cout<<"=133_8.py\n";
A133_8::test(); cout<<endl;
cout<<"=133_9.py\n";
A133_9::test(); cout<<endl;
cout<<"=133_10.py\n";
A133_10::test(); cout<<endl;
cout<<"call 134.bat\n";
cout<<"=134_0.py\n";
A134_0::test(); cout<<endl;
cout<<"=134_1.py\n";
A134_1::test(); cout<<endl;
cout<<"=134_2.py\n";
A134_2::test(); cout<<endl;
cout<<"=134_3.py\n";
A134_3::test(); cout<<endl;
cout<<"=134_4.py\n";
A134_4::test(); cout<<endl;
cout<<"=134_5.py\n";
A134_5::test(); cout<<endl;
cout<<"=134_6.py\n";
A134_6::test(); cout<<endl;
cout<<"=134_7.py\n";
A134_7::test(); cout<<endl;
cout<<"=134_8.py\n";
A134_8::test(); cout<<endl;
cout<<"=134_9.py\n";
A134_9::test(); cout<<endl;
cout<<"=134_10.py\n";
A134_10::test(); cout<<endl;
cout<<"call 135.bat\n";
cout<<"=135_0.py\n";
A135_0::test(); cout<<endl;
cout<<"=135_1.py\n";
A135_1::test(); cout<<endl;
cout<<"=135_2.py\n";
A135_2::test(); cout<<endl;
cout<<"=135_3.py\n";
A135_3::test(); cout<<endl;
cout<<"=135_4.py\n";
A135_4::test(); cout<<endl;
cout<<"=135_5.py\n";
A135_5::test(); cout<<endl;
cout<<"=135_6.py\n";
A135_6::test(); cout<<endl;
cout<<"=135_7.py\n";
A135_7::test(); cout<<endl;
cout<<"=135_8.py\n";
A135_8::test(); cout<<endl;
cout<<"=135_9.py\n";
A135_9::test(); cout<<endl;
cout<<"=135_10.py\n";
A135_10::test(); cout<<endl;
cout<<"call 136.bat\n";
cout<<"=136_0.py\n";
A136_0::test(); cout<<endl;
cout<<"=136_1.py\n";
A136_1::test(); cout<<endl;
cout<<"=136_2.py\n";
A136_2::test(); cout<<endl;
cout<<"=136_3.py\n";
A136_3::test(); cout<<endl;
cout<<"=136_4.py\n";
A136_4::test(); cout<<endl;
cout<<"=136_5.py\n";
A136_5::test(); cout<<endl;
cout<<"=136_6.py\n";
A136_6::test(); cout<<endl;
cout<<"=136_7.py\n";
A136_7::test(); cout<<endl;
cout<<"=136_8.py\n";
A136_8::test(); cout<<endl;
cout<<"=136_9.py\n";
A136_9::test(); cout<<endl;
cout<<"=136_10.py\n";
A136_10::test(); cout<<endl;
cout<<"call 137.bat\n";
cout<<"=137_0.py\n";
A137_0::test(); cout<<endl;
cout<<"=137_1.py\n";
A137_1::test(); cout<<endl;
cout<<"=137_2.py\n";
A137_2::test(); cout<<endl;
cout<<"=137_3.py\n";
A137_3::test(); cout<<endl;
cout<<"=137_4.py\n";
A137_4::test(); cout<<endl;
cout<<"=137_5.py\n";
A137_5::test(); cout<<endl;
cout<<"=137_6.py\n";
A137_6::test(); cout<<endl;
cout<<"=137_7.py\n";
A137_7::test(); cout<<endl;
cout<<"=137_8.py\n";
A137_8::test(); cout<<endl;
cout<<"=137_9.py\n";
A137_9::test(); cout<<endl;
cout<<"=137_10.py\n";
A137_10::test(); cout<<endl;
cout<<"call 138.bat\n";
cout<<"=138_0.py\n";
A138_0::test(); cout<<endl;
cout<<"=138_1.py\n";
A138_1::test(); cout<<endl;
cout<<"=138_2.py\n";
A138_2::test(); cout<<endl;
cout<<"=138_3.py\n";
A138_3::test(); cout<<endl;
cout<<"=138_4.py\n";
A138_4::test(); cout<<endl;
cout<<"=138_5.py\n";
A138_5::test(); cout<<endl;
cout<<"=138_6.py\n";
A138_6::test(); cout<<endl;
cout<<"=138_7.py\n";
A138_7::test(); cout<<endl;
cout<<"=138_8.py\n";
A138_8::test(); cout<<endl;
cout<<"=138_9.py\n";
A138_9::test(); cout<<endl;
cout<<"=138_10.py\n";
A138_10::test(); cout<<endl;
cout<<"call 139.bat\n";
cout<<"=139_0.py\n";
A139_0::test(); cout<<endl;
cout<<"=139_1.py\n";
A139_1::test(); cout<<endl;
cout<<"=139_2.py\n";
A139_2::test(); cout<<endl;
cout<<"=139_3.py\n";
A139_3::test(); cout<<endl;
cout<<"=139_4.py\n";
A139_4::test(); cout<<endl;
cout<<"=139_5.py\n";
A139_5::test(); cout<<endl;
cout<<"=139_6.py\n";
A139_6::test(); cout<<endl;
cout<<"=139_7.py\n";
A139_7::test(); cout<<endl;
cout<<"=139_8.py\n";
A139_8::test(); cout<<endl;
cout<<"=139_9.py\n";
A139_9::test(); cout<<endl;
cout<<"=139_10.py\n";
A139_10::test(); cout<<endl;
cout<<"call 140.bat\n";
cout<<"=140_0.py\n";
A140_0::test(); cout<<endl;
cout<<"=140_1.py\n";
A140_1::test(); cout<<endl;
cout<<"=140_2.py\n";
A140_2::test(); cout<<endl;
cout<<"=140_3.py\n";
A140_3::test(); cout<<endl;
cout<<"=140_4.py\n";
A140_4::test(); cout<<endl;
cout<<"=140_5.py\n";
A140_5::test(); cout<<endl;
cout<<"=140_6.py\n";
A140_6::test(); cout<<endl;
cout<<"=140_7.py\n";
A140_7::test(); cout<<endl;
cout<<"=140_8.py\n";
A140_8::test(); cout<<endl;
cout<<"=140_9.py\n";
A140_9::test(); cout<<endl;
cout<<"=140_10.py\n";
A140_10::test(); cout<<endl;
cout<<"call 141.bat\n";
cout<<"=141_0.py\n";
A141_0::test(); cout<<endl;
cout<<"=141_1.py\n";
A141_1::test(); cout<<endl;
cout<<"=141_2.py\n";
A141_2::test(); cout<<endl;
cout<<"=141_3.py\n";
A141_3::test(); cout<<endl;
cout<<"=141_4.py\n";
A141_4::test(); cout<<endl;
cout<<"=141_5.py\n";
A141_5::test(); cout<<endl;
cout<<"=141_6.py\n";
A141_6::test(); cout<<endl;
cout<<"=141_7.py\n";
A141_7::test(); cout<<endl;
cout<<"=141_8.py\n";
A141_8::test(); cout<<endl;
cout<<"=141_9.py\n";
A141_9::test(); cout<<endl;
cout<<"=141_10.py\n";
A141_10::test(); cout<<endl;
cout<<"call 142.bat\n";
cout<<"=142_0.py\n";
A142_0::test(); cout<<endl;
cout<<"=142_1.py\n";
A142_1::test(); cout<<endl;
cout<<"=142_2.py\n";
A142_2::test(); cout<<endl;
cout<<"=142_3.py\n";
A142_3::test(); cout<<endl;
cout<<"=142_4.py\n";
A142_4::test(); cout<<endl;
cout<<"=142_5.py\n";
A142_5::test(); cout<<endl;
cout<<"=142_6.py\n";
A142_6::test(); cout<<endl;
cout<<"=142_7.py\n";
A142_7::test(); cout<<endl;
cout<<"=142_8.py\n";
A142_8::test(); cout<<endl;
cout<<"=142_9.py\n";
A142_9::test(); cout<<endl;
cout<<"=142_10.py\n";
A142_10::test(); cout<<endl;
cout<<"call 143.bat\n";
cout<<"=143_0.py\n";
A143_0::test(); cout<<endl;
cout<<"=143_1.py\n";
A143_1::test(); cout<<endl;
cout<<"=143_2.py\n";
A143_2::test(); cout<<endl;
cout<<"=143_3.py\n";
A143_3::test(); cout<<endl;
cout<<"=143_4.py\n";
A143_4::test(); cout<<endl;
cout<<"=143_5.py\n";
A143_5::test(); cout<<endl;
cout<<"=143_6.py\n";
A143_6::test(); cout<<endl;
cout<<"=143_7.py\n";
A143_7::test(); cout<<endl;
cout<<"=143_8.py\n";
A143_8::test(); cout<<endl;
cout<<"=143_9.py\n";
A143_9::test(); cout<<endl;
cout<<"=143_10.py\n";
A143_10::test(); cout<<endl;
cout<<"call 144.bat\n";
cout<<"=144_0.py\n";
A144_0::test(); cout<<endl;
cout<<"=144_1.py\n";
A144_1::test(); cout<<endl;
cout<<"=144_2.py\n";
A144_2::test(); cout<<endl;
cout<<"=144_3.py\n";
A144_3::test(); cout<<endl;
cout<<"=144_4.py\n";
A144_4::test(); cout<<endl;
cout<<"=144_5.py\n";
A144_5::test(); cout<<endl;
cout<<"=144_6.py\n";
A144_6::test(); cout<<endl;
cout<<"=144_7.py\n";
A144_7::test(); cout<<endl;
cout<<"=144_8.py\n";
A144_8::test(); cout<<endl;
cout<<"=144_9.py\n";
A144_9::test(); cout<<endl;
cout<<"=144_10.py\n";
A144_10::test(); cout<<endl;
cout<<"call 145.bat\n";
cout<<"=145_0.py\n";
A145_0::test(); cout<<endl;
cout<<"=145_1.py\n";
A145_1::test(); cout<<endl;
cout<<"=145_2.py\n";
A145_2::test(); cout<<endl;
cout<<"=145_3.py\n";
A145_3::test(); cout<<endl;
cout<<"=145_4.py\n";
A145_4::test(); cout<<endl;
cout<<"=145_5.py\n";
A145_5::test(); cout<<endl;
cout<<"=145_6.py\n";
A145_6::test(); cout<<endl;
cout<<"=145_7.py\n";
A145_7::test(); cout<<endl;
cout<<"=145_8.py\n";
A145_8::test(); cout<<endl;
cout<<"=145_9.py\n";
A145_9::test(); cout<<endl;
cout<<"=145_10.py\n";
A145_10::test(); cout<<endl;
cout<<"call 146.bat\n";
cout<<"=146_0.py\n";
A146_0::test(); cout<<endl;
cout<<"=146_1.py\n";
A146_1::test(); cout<<endl;
cout<<"=146_2.py\n";
A146_2::test(); cout<<endl;
cout<<"=146_3.py\n";
A146_3::test(); cout<<endl;
cout<<"=146_4.py\n";
A146_4::test(); cout<<endl;
cout<<"=146_5.py\n";
A146_5::test(); cout<<endl;
cout<<"=146_6.py\n";
A146_6::test(); cout<<endl;
cout<<"=146_7.py\n";
A146_7::test(); cout<<endl;
cout<<"=146_8.py\n";
A146_8::test(); cout<<endl;
cout<<"=146_9.py\n";
A146_9::test(); cout<<endl;
cout<<"=146_10.py\n";
A146_10::test(); cout<<endl;
cout<<"call 147.bat\n";
cout<<"=147_0.py\n";
A147_0::test(); cout<<endl;
cout<<"=147_1.py\n";
A147_1::test(); cout<<endl;
cout<<"=147_2.py\n";
A147_2::test(); cout<<endl;
cout<<"=147_3.py\n";
A147_3::test(); cout<<endl;
cout<<"=147_4.py\n";
A147_4::test(); cout<<endl;
cout<<"=147_5.py\n";
A147_5::test(); cout<<endl;
cout<<"=147_6.py\n";
A147_6::test(); cout<<endl;
cout<<"=147_7.py\n";
A147_7::test(); cout<<endl;
cout<<"=147_8.py\n";
A147_8::test(); cout<<endl;
cout<<"=147_9.py\n";
A147_9::test(); cout<<endl;
cout<<"=147_10.py\n";
A147_10::test(); cout<<endl;
cout<<"call 148.bat\n";
cout<<"=148_0.py\n";
A148_0::test(); cout<<endl;
cout<<"=148_1.py\n";
A148_1::test(); cout<<endl;
cout<<"=148_2.py\n";
A148_2::test(); cout<<endl;
cout<<"=148_3.py\n";
A148_3::test(); cout<<endl;
cout<<"=148_4.py\n";
A148_4::test(); cout<<endl;
cout<<"=148_5.py\n";
A148_5::test(); cout<<endl;
cout<<"=148_6.py\n";
A148_6::test(); cout<<endl;
cout<<"=148_7.py\n";
A148_7::test(); cout<<endl;
cout<<"=148_8.py\n";
A148_8::test(); cout<<endl;
cout<<"=148_9.py\n";
A148_9::test(); cout<<endl;
cout<<"=148_10.py\n";
A148_10::test(); cout<<endl;
cout<<"call 149.bat\n";
cout<<"=149_0.py\n";
A149_0::test(); cout<<endl;
cout<<"=149_1.py\n";
A149_1::test(); cout<<endl;
cout<<"=149_2.py\n";
A149_2::test(); cout<<endl;
cout<<"=149_3.py\n";
A149_3::test(); cout<<endl;
cout<<"=149_4.py\n";
A149_4::test(); cout<<endl;
cout<<"=149_5.py\n";
A149_5::test(); cout<<endl;
cout<<"=149_6.py\n";
A149_6::test(); cout<<endl;
cout<<"=149_7.py\n";
A149_7::test(); cout<<endl;
cout<<"=149_8.py\n";
A149_8::test(); cout<<endl;
cout<<"=149_9.py\n";
A149_9::test(); cout<<endl;
cout<<"=149_10.py\n";
A149_10::test(); cout<<endl;
cout<<"call 150.bat\n";
cout<<"=150_0.py\n";
A150_0::test(); cout<<endl;
cout<<"=150_1.py\n";
A150_1::test(); cout<<endl;
cout<<"=150_2.py\n";
A150_2::test(); cout<<endl;
cout<<"=150_3.py\n";
A150_3::test(); cout<<endl;
cout<<"=150_4.py\n";
A150_4::test(); cout<<endl;
cout<<"=150_5.py\n";
A150_5::test(); cout<<endl;
cout<<"=150_6.py\n";
A150_6::test(); cout<<endl;
cout<<"=150_7.py\n";
A150_7::test(); cout<<endl;
cout<<"=150_8.py\n";
A150_8::test(); cout<<endl;
cout<<"=150_9.py\n";
A150_9::test(); cout<<endl;
cout<<"=150_10.py\n";
A150_10::test(); cout<<endl;
cout<<"call 151.bat\n";
cout<<"=151_0.py\n";
A151_0::test(); cout<<endl;
cout<<"=151_1.py\n";
A151_1::test(); cout<<endl;
cout<<"=151_2.py\n";
A151_2::test(); cout<<endl;
cout<<"=151_3.py\n";
A151_3::test(); cout<<endl;
cout<<"=151_4.py\n";
A151_4::test(); cout<<endl;
cout<<"=151_5.py\n";
A151_5::test(); cout<<endl;
cout<<"=151_6.py\n";
A151_6::test(); cout<<endl;
cout<<"=151_7.py\n";
A151_7::test(); cout<<endl;
cout<<"=151_8.py\n";
A151_8::test(); cout<<endl;
cout<<"=151_9.py\n";
A151_9::test(); cout<<endl;
cout<<"=151_10.py\n";
A151_10::test(); cout<<endl;
cout<<"call 152.bat\n";
cout<<"=152_0.py\n";
A152_0::test(); cout<<endl;
cout<<"=152_1.py\n";
A152_1::test(); cout<<endl;
cout<<"=152_2.py\n";
A152_2::test(); cout<<endl;
cout<<"=152_3.py\n";
A152_3::test(); cout<<endl;
cout<<"=152_4.py\n";
A152_4::test(); cout<<endl;
cout<<"=152_5.py\n";
A152_5::test(); cout<<endl;
cout<<"=152_6.py\n";
A152_6::test(); cout<<endl;
cout<<"=152_7.py\n";
A152_7::test(); cout<<endl;
cout<<"=152_8.py\n";
A152_8::test(); cout<<endl;
cout<<"=152_9.py\n";
A152_9::test(); cout<<endl;
cout<<"=152_10.py\n";
A152_10::test(); cout<<endl;
cout<<"call 153.bat\n";
cout<<"=153_0.py\n";
A153_0::test(); cout<<endl;
cout<<"=153_1.py\n";
A153_1::test(); cout<<endl;
cout<<"=153_2.py\n";
A153_2::test(); cout<<endl;
cout<<"=153_3.py\n";
A153_3::test(); cout<<endl;
cout<<"=153_4.py\n";
A153_4::test(); cout<<endl;
cout<<"=153_5.py\n";
A153_5::test(); cout<<endl;
cout<<"=153_6.py\n";
A153_6::test(); cout<<endl;
cout<<"=153_7.py\n";
A153_7::test(); cout<<endl;
cout<<"=153_8.py\n";
A153_8::test(); cout<<endl;
cout<<"=153_9.py\n";
A153_9::test(); cout<<endl;
cout<<"=153_10.py\n";
A153_10::test(); cout<<endl;
cout<<"call 154.bat\n";
cout<<"=154_0.py\n";
A154_0::test(); cout<<endl;
cout<<"=154_1.py\n";
A154_1::test(); cout<<endl;
cout<<"=154_2.py\n";
A154_2::test(); cout<<endl;
cout<<"=154_3.py\n";
A154_3::test(); cout<<endl;
cout<<"=154_4.py\n";
A154_4::test(); cout<<endl;
cout<<"=154_5.py\n";
A154_5::test(); cout<<endl;
cout<<"=154_6.py\n";
A154_6::test(); cout<<endl;
cout<<"=154_7.py\n";
A154_7::test(); cout<<endl;
cout<<"=154_8.py\n";
A154_8::test(); cout<<endl;
cout<<"=154_9.py\n";
A154_9::test(); cout<<endl;
cout<<"=154_10.py\n";
A154_10::test(); cout<<endl;
cout<<"call 155.bat\n";
cout<<"=155_0.py\n";
A155_0::test(); cout<<endl;
cout<<"=155_1.py\n";
A155_1::test(); cout<<endl;
cout<<"=155_2.py\n";
A155_2::test(); cout<<endl;
cout<<"=155_3.py\n";
A155_3::test(); cout<<endl;
cout<<"=155_4.py\n";
A155_4::test(); cout<<endl;
cout<<"=155_5.py\n";
A155_5::test(); cout<<endl;
cout<<"=155_6.py\n";
A155_6::test(); cout<<endl;
cout<<"=155_7.py\n";
A155_7::test(); cout<<endl;
cout<<"=155_8.py\n";
A155_8::test(); cout<<endl;
cout<<"=155_9.py\n";
A155_9::test(); cout<<endl;
cout<<"=155_10.py\n";
A155_10::test(); cout<<endl;
cout<<"call 156.bat\n";
cout<<"=156_0.py\n";
A156_0::test(); cout<<endl;
cout<<"=156_1.py\n";
A156_1::test(); cout<<endl;
cout<<"=156_2.py\n";
A156_2::test(); cout<<endl;
cout<<"=156_3.py\n";
A156_3::test(); cout<<endl;
cout<<"=156_4.py\n";
A156_4::test(); cout<<endl;
cout<<"=156_5.py\n";
A156_5::test(); cout<<endl;
cout<<"=156_6.py\n";
A156_6::test(); cout<<endl;
cout<<"=156_7.py\n";
A156_7::test(); cout<<endl;
cout<<"=156_8.py\n";
A156_8::test(); cout<<endl;
cout<<"=156_9.py\n";
A156_9::test(); cout<<endl;
cout<<"=156_10.py\n";
A156_10::test(); cout<<endl;
cout<<"call 157.bat\n";
cout<<"=157_0.py\n";
A157_0::test(); cout<<endl;
cout<<"=157_1.py\n";
A157_1::test(); cout<<endl;
cout<<"=157_2.py\n";
A157_2::test(); cout<<endl;
cout<<"=157_3.py\n";
A157_3::test(); cout<<endl;
cout<<"=157_4.py\n";
A157_4::test(); cout<<endl;
cout<<"=157_5.py\n";
A157_5::test(); cout<<endl;
cout<<"=157_6.py\n";
A157_6::test(); cout<<endl;
cout<<"=157_7.py\n";
A157_7::test(); cout<<endl;
cout<<"=157_8.py\n";
A157_8::test(); cout<<endl;
cout<<"=157_9.py\n";
A157_9::test(); cout<<endl;
cout<<"=157_10.py\n";
A157_10::test(); cout<<endl;
cout<<"call 158.bat\n";
cout<<"=158_0.py\n";
A158_0::test(); cout<<endl;
cout<<"=158_1.py\n";
A158_1::test(); cout<<endl;
cout<<"=158_2.py\n";
A158_2::test(); cout<<endl;
cout<<"=158_3.py\n";
A158_3::test(); cout<<endl;
cout<<"=158_4.py\n";
A158_4::test(); cout<<endl;
cout<<"=158_5.py\n";
A158_5::test(); cout<<endl;
cout<<"=158_6.py\n";
A158_6::test(); cout<<endl;
cout<<"=158_7.py\n";
A158_7::test(); cout<<endl;
cout<<"=158_8.py\n";
A158_8::test(); cout<<endl;
cout<<"=158_9.py\n";
A158_9::test(); cout<<endl;
cout<<"=158_10.py\n";
A158_10::test(); cout<<endl;
cout<<"call 159.bat\n";
cout<<"=159_0.py\n";
A159_0::test(); cout<<endl;
cout<<"=159_1.py\n";
A159_1::test(); cout<<endl;
cout<<"=159_2.py\n";
A159_2::test(); cout<<endl;
cout<<"=159_3.py\n";
A159_3::test(); cout<<endl;
cout<<"=159_4.py\n";
A159_4::test(); cout<<endl;
cout<<"=159_5.py\n";
A159_5::test(); cout<<endl;
cout<<"=159_6.py\n";
A159_6::test(); cout<<endl;
cout<<"=159_7.py\n";
A159_7::test(); cout<<endl;
cout<<"=159_8.py\n";
A159_8::test(); cout<<endl;
cout<<"=159_9.py\n";
A159_9::test(); cout<<endl;
cout<<"=159_10.py\n";
A159_10::test(); cout<<endl;
cout<<"call 160.bat\n";
cout<<"=160_0.py\n";
A160_0::test(); cout<<endl;
cout<<"=160_1.py\n";
A160_1::test(); cout<<endl;
cout<<"=160_2.py\n";
A160_2::test(); cout<<endl;
cout<<"=160_3.py\n";
A160_3::test(); cout<<endl;
cout<<"=160_4.py\n";
A160_4::test(); cout<<endl;
cout<<"=160_5.py\n";
A160_5::test(); cout<<endl;
cout<<"=160_6.py\n";
A160_6::test(); cout<<endl;
cout<<"=160_7.py\n";
A160_7::test(); cout<<endl;
cout<<"=160_8.py\n";
A160_8::test(); cout<<endl;
cout<<"=160_9.py\n";
A160_9::test(); cout<<endl;
cout<<"=160_10.py\n";
A160_10::test(); cout<<endl;
cout<<"call 161.bat\n";
cout<<"=161_0.py\n";
A161_0::test(); cout<<endl;
cout<<"=161_1.py\n";
A161_1::test(); cout<<endl;
cout<<"=161_2.py\n";
A161_2::test(); cout<<endl;
cout<<"=161_3.py\n";
A161_3::test(); cout<<endl;
cout<<"=161_4.py\n";
A161_4::test(); cout<<endl;
cout<<"=161_5.py\n";
A161_5::test(); cout<<endl;
cout<<"=161_6.py\n";
A161_6::test(); cout<<endl;
cout<<"=161_7.py\n";
A161_7::test(); cout<<endl;
cout<<"=161_8.py\n";
A161_8::test(); cout<<endl;
cout<<"=161_9.py\n";
A161_9::test(); cout<<endl;
cout<<"=161_10.py\n";
A161_10::test(); cout<<endl;
cout<<"call 162.bat\n";
cout<<"=162_0.py\n";
A162_0::test(); cout<<endl;
cout<<"=162_1.py\n";
A162_1::test(); cout<<endl;
cout<<"=162_2.py\n";
A162_2::test(); cout<<endl;
cout<<"=162_3.py\n";
A162_3::test(); cout<<endl;
cout<<"=162_4.py\n";
A162_4::test(); cout<<endl;
cout<<"=162_5.py\n";
A162_5::test(); cout<<endl;
cout<<"=162_6.py\n";
A162_6::test(); cout<<endl;
cout<<"=162_7.py\n";
A162_7::test(); cout<<endl;
cout<<"=162_8.py\n";
A162_8::test(); cout<<endl;
cout<<"=162_9.py\n";
A162_9::test(); cout<<endl;
cout<<"=162_10.py\n";
A162_10::test(); cout<<endl;
cout<<"call 163.bat\n";
cout<<"=163_0.py\n";
A163_0::test(); cout<<endl;
cout<<"=163_1.py\n";
A163_1::test(); cout<<endl;
cout<<"=163_2.py\n";
A163_2::test(); cout<<endl;
cout<<"=163_3.py\n";
A163_3::test(); cout<<endl;
cout<<"=163_4.py\n";
A163_4::test(); cout<<endl;
cout<<"=163_5.py\n";
A163_5::test(); cout<<endl;
cout<<"=163_6.py\n";
A163_6::test(); cout<<endl;
cout<<"=163_7.py\n";
A163_7::test(); cout<<endl;
cout<<"=163_8.py\n";
A163_8::test(); cout<<endl;
cout<<"=163_9.py\n";
A163_9::test(); cout<<endl;
cout<<"=163_10.py\n";
A163_10::test(); cout<<endl;
cout<<"call 164.bat\n";
cout<<"=164_0.py\n";
A164_0::test(); cout<<endl;
cout<<"=164_1.py\n";
A164_1::test(); cout<<endl;
cout<<"=164_2.py\n";
A164_2::test(); cout<<endl;
cout<<"=164_3.py\n";
A164_3::test(); cout<<endl;
cout<<"=164_4.py\n";
A164_4::test(); cout<<endl;
cout<<"=164_5.py\n";
A164_5::test(); cout<<endl;
cout<<"=164_6.py\n";
A164_6::test(); cout<<endl;
cout<<"=164_7.py\n";
A164_7::test(); cout<<endl;
cout<<"=164_8.py\n";
A164_8::test(); cout<<endl;
cout<<"=164_9.py\n";
A164_9::test(); cout<<endl;
cout<<"=164_10.py\n";
A164_10::test(); cout<<endl;
cout<<"call 165.bat\n";
cout<<"=165_0.py\n";
A165_0::test(); cout<<endl;
cout<<"=165_1.py\n";
A165_1::test(); cout<<endl;
cout<<"=165_2.py\n";
A165_2::test(); cout<<endl;
cout<<"=165_3.py\n";
A165_3::test(); cout<<endl;
cout<<"=165_4.py\n";
A165_4::test(); cout<<endl;
cout<<"=165_5.py\n";
A165_5::test(); cout<<endl;
cout<<"=165_6.py\n";
A165_6::test(); cout<<endl;
cout<<"=165_7.py\n";
A165_7::test(); cout<<endl;
cout<<"=165_8.py\n";
A165_8::test(); cout<<endl;
cout<<"=165_9.py\n";
A165_9::test(); cout<<endl;
cout<<"=165_10.py\n";
A165_10::test(); cout<<endl;
cout<<"call 166.bat\n";
cout<<"=166_0.py\n";
A166_0::test(); cout<<endl;
cout<<"=166_1.py\n";
A166_1::test(); cout<<endl;
cout<<"=166_2.py\n";
A166_2::test(); cout<<endl;
cout<<"=166_3.py\n";
A166_3::test(); cout<<endl;
cout<<"=166_4.py\n";
A166_4::test(); cout<<endl;
cout<<"=166_5.py\n";
A166_5::test(); cout<<endl;
cout<<"=166_6.py\n";
A166_6::test(); cout<<endl;
cout<<"=166_7.py\n";
A166_7::test(); cout<<endl;
cout<<"=166_8.py\n";
A166_8::test(); cout<<endl;
cout<<"=166_9.py\n";
A166_9::test(); cout<<endl;
cout<<"=166_10.py\n";
A166_10::test(); cout<<endl;
cout<<"call 167.bat\n";
cout<<"=167_0.py\n";
A167_0::test(); cout<<endl;
cout<<"=167_1.py\n";
A167_1::test(); cout<<endl;
cout<<"=167_2.py\n";
A167_2::test(); cout<<endl;
cout<<"=167_3.py\n";
A167_3::test(); cout<<endl;
cout<<"=167_4.py\n";
A167_4::test(); cout<<endl;
cout<<"=167_5.py\n";
A167_5::test(); cout<<endl;
cout<<"=167_6.py\n";
A167_6::test(); cout<<endl;
cout<<"=167_7.py\n";
A167_7::test(); cout<<endl;
cout<<"=167_8.py\n";
A167_8::test(); cout<<endl;
cout<<"=167_9.py\n";
A167_9::test(); cout<<endl;
cout<<"=167_10.py\n";
A167_10::test(); cout<<endl;
cout<<"call 168.bat\n";
cout<<"=168_0.py\n";
A168_0::test(); cout<<endl;
cout<<"=168_1.py\n";
A168_1::test(); cout<<endl;
cout<<"=168_2.py\n";
A168_2::test(); cout<<endl;
cout<<"=168_3.py\n";
A168_3::test(); cout<<endl;
cout<<"=168_4.py\n";
A168_4::test(); cout<<endl;
cout<<"=168_5.py\n";
A168_5::test(); cout<<endl;
cout<<"=168_6.py\n";
A168_6::test(); cout<<endl;
cout<<"=168_7.py\n";
A168_7::test(); cout<<endl;
cout<<"=168_8.py\n";
A168_8::test(); cout<<endl;
cout<<"=168_9.py\n";
A168_9::test(); cout<<endl;
cout<<"=168_10.py\n";
A168_10::test(); cout<<endl;
cout<<"call 169.bat\n";
cout<<"=169_0.py\n";
A169_0::test(); cout<<endl;
cout<<"=169_1.py\n";
A169_1::test(); cout<<endl;
cout<<"=169_2.py\n";
A169_2::test(); cout<<endl;
cout<<"=169_3.py\n";
A169_3::test(); cout<<endl;
cout<<"=169_4.py\n";
A169_4::test(); cout<<endl;
cout<<"=169_5.py\n";
A169_5::test(); cout<<endl;
cout<<"=169_6.py\n";
A169_6::test(); cout<<endl;
cout<<"=169_7.py\n";
A169_7::test(); cout<<endl;
cout<<"=169_8.py\n";
A169_8::test(); cout<<endl;
cout<<"=169_9.py\n";
A169_9::test(); cout<<endl;
cout<<"=169_10.py\n";
A169_10::test(); cout<<endl;
cout<<"call 170.bat\n";
cout<<"=170_0.py\n";
A170_0::test(); cout<<endl;
cout<<"=170_1.py\n";
A170_1::test(); cout<<endl;
cout<<"=170_2.py\n";
A170_2::test(); cout<<endl;
cout<<"=170_3.py\n";
A170_3::test(); cout<<endl;
cout<<"=170_4.py\n";
A170_4::test(); cout<<endl;
cout<<"=170_5.py\n";
A170_5::test(); cout<<endl;
cout<<"=170_6.py\n";
A170_6::test(); cout<<endl;
cout<<"=170_7.py\n";
A170_7::test(); cout<<endl;
cout<<"=170_8.py\n";
A170_8::test(); cout<<endl;
cout<<"=170_9.py\n";
A170_9::test(); cout<<endl;
cout<<"=170_10.py\n";
A170_10::test(); cout<<endl;
cout<<"call 171.bat\n";
cout<<"=171_0.py\n";
A171_0::test(); cout<<endl;
cout<<"=171_1.py\n";
A171_1::test(); cout<<endl;
cout<<"=171_2.py\n";
A171_2::test(); cout<<endl;
cout<<"=171_3.py\n";
A171_3::test(); cout<<endl;
cout<<"=171_4.py\n";
A171_4::test(); cout<<endl;
cout<<"=171_5.py\n";
A171_5::test(); cout<<endl;
cout<<"=171_6.py\n";
A171_6::test(); cout<<endl;
cout<<"=171_7.py\n";
A171_7::test(); cout<<endl;
cout<<"=171_8.py\n";
A171_8::test(); cout<<endl;
cout<<"=171_9.py\n";
A171_9::test(); cout<<endl;
cout<<"=171_10.py\n";
A171_10::test(); cout<<endl;
cout<<"call 172.bat\n";
cout<<"=172_0.py\n";
A172_0::test(); cout<<endl;
cout<<"=172_1.py\n";
A172_1::test(); cout<<endl;
cout<<"=172_2.py\n";
A172_2::test(); cout<<endl;
cout<<"=172_3.py\n";
A172_3::test(); cout<<endl;
cout<<"=172_4.py\n";
A172_4::test(); cout<<endl;
cout<<"=172_5.py\n";
A172_5::test(); cout<<endl;
cout<<"=172_6.py\n";
A172_6::test(); cout<<endl;
cout<<"=172_7.py\n";
A172_7::test(); cout<<endl;
cout<<"=172_8.py\n";
A172_8::test(); cout<<endl;
cout<<"=172_9.py\n";
A172_9::test(); cout<<endl;
cout<<"=172_10.py\n";
A172_10::test(); cout<<endl;
cout<<"call 173.bat\n";
cout<<"=173_0.py\n";
A173_0::test(); cout<<endl;
cout<<"=173_1.py\n";
A173_1::test(); cout<<endl;
cout<<"=173_2.py\n";
A173_2::test(); cout<<endl;
cout<<"=173_3.py\n";
A173_3::test(); cout<<endl;
cout<<"=173_4.py\n";
A173_4::test(); cout<<endl;
cout<<"=173_5.py\n";
A173_5::test(); cout<<endl;
cout<<"=173_6.py\n";
A173_6::test(); cout<<endl;
cout<<"=173_7.py\n";
A173_7::test(); cout<<endl;
cout<<"=173_8.py\n";
A173_8::test(); cout<<endl;
cout<<"=173_9.py\n";
A173_9::test(); cout<<endl;
cout<<"=173_10.py\n";
A173_10::test(); cout<<endl;
cout<<"call 174.bat\n";
cout<<"=174_0.py\n";
A174_0::test(); cout<<endl;
cout<<"=174_1.py\n";
A174_1::test(); cout<<endl;
cout<<"=174_2.py\n";
A174_2::test(); cout<<endl;
cout<<"=174_3.py\n";
A174_3::test(); cout<<endl;
cout<<"=174_4.py\n";
A174_4::test(); cout<<endl;
cout<<"=174_5.py\n";
A174_5::test(); cout<<endl;
cout<<"=174_6.py\n";
A174_6::test(); cout<<endl;
cout<<"=174_7.py\n";
A174_7::test(); cout<<endl;
cout<<"=174_8.py\n";
A174_8::test(); cout<<endl;
cout<<"=174_9.py\n";
A174_9::test(); cout<<endl;
cout<<"=174_10.py\n";
A174_10::test(); cout<<endl;
cout<<"call 175.bat\n";
cout<<"=175_0.py\n";
A175_0::test(); cout<<endl;
cout<<"=175_1.py\n";
A175_1::test(); cout<<endl;
cout<<"=175_2.py\n";
A175_2::test(); cout<<endl;
cout<<"=175_3.py\n";
A175_3::test(); cout<<endl;
cout<<"=175_4.py\n";
A175_4::test(); cout<<endl;
cout<<"=175_5.py\n";
A175_5::test(); cout<<endl;
cout<<"=175_6.py\n";
A175_6::test(); cout<<endl;
cout<<"=175_7.py\n";
A175_7::test(); cout<<endl;
cout<<"=175_8.py\n";
A175_8::test(); cout<<endl;
cout<<"=175_9.py\n";
A175_9::test(); cout<<endl;
cout<<"=175_10.py\n";
A175_10::test(); cout<<endl;
cout<<"call 176.bat\n";
cout<<"=176_0.py\n";
A176_0::test(); cout<<endl;
cout<<"=176_1.py\n";
A176_1::test(); cout<<endl;
cout<<"=176_2.py\n";
A176_2::test(); cout<<endl;
cout<<"=176_3.py\n";
A176_3::test(); cout<<endl;
cout<<"=176_4.py\n";
A176_4::test(); cout<<endl;
cout<<"=176_5.py\n";
A176_5::test(); cout<<endl;
cout<<"=176_6.py\n";
A176_6::test(); cout<<endl;
cout<<"=176_7.py\n";
A176_7::test(); cout<<endl;
cout<<"=176_8.py\n";
A176_8::test(); cout<<endl;
cout<<"=176_9.py\n";
A176_9::test(); cout<<endl;
cout<<"=176_10.py\n";
A176_10::test(); cout<<endl;
cout<<"call 177.bat\n";
cout<<"=177_0.py\n";
A177_0::test(); cout<<endl;
cout<<"=177_1.py\n";
A177_1::test(); cout<<endl;
cout<<"=177_2.py\n";
A177_2::test(); cout<<endl;
cout<<"=177_3.py\n";
A177_3::test(); cout<<endl;
cout<<"=177_4.py\n";
A177_4::test(); cout<<endl;
cout<<"=177_5.py\n";
A177_5::test(); cout<<endl;
cout<<"=177_6.py\n";
A177_6::test(); cout<<endl;
cout<<"=177_7.py\n";
A177_7::test(); cout<<endl;
cout<<"=177_8.py\n";
A177_8::test(); cout<<endl;
cout<<"=177_9.py\n";
A177_9::test(); cout<<endl;
cout<<"=177_10.py\n";
A177_10::test(); cout<<endl;
cout<<"call 178.bat\n";
cout<<"=178_0.py\n";
A178_0::test(); cout<<endl;
cout<<"=178_1.py\n";
A178_1::test(); cout<<endl;
cout<<"=178_2.py\n";
A178_2::test(); cout<<endl;
cout<<"=178_3.py\n";
A178_3::test(); cout<<endl;
cout<<"=178_4.py\n";
A178_4::test(); cout<<endl;
cout<<"=178_5.py\n";
A178_5::test(); cout<<endl;
cout<<"=178_6.py\n";
A178_6::test(); cout<<endl;
cout<<"=178_7.py\n";
A178_7::test(); cout<<endl;
cout<<"=178_8.py\n";
A178_8::test(); cout<<endl;
cout<<"=178_9.py\n";
A178_9::test(); cout<<endl;
cout<<"=178_10.py\n";
A178_10::test(); cout<<endl;
cout<<"call 179.bat\n";
cout<<"=179_0.py\n";
A179_0::test(); cout<<endl;
cout<<"=179_1.py\n";
A179_1::test(); cout<<endl;
cout<<"=179_2.py\n";
A179_2::test(); cout<<endl;
cout<<"=179_3.py\n";
A179_3::test(); cout<<endl;
cout<<"=179_4.py\n";
A179_4::test(); cout<<endl;
cout<<"=179_5.py\n";
A179_5::test(); cout<<endl;
cout<<"=179_6.py\n";
A179_6::test(); cout<<endl;
cout<<"=179_7.py\n";
A179_7::test(); cout<<endl;
cout<<"=179_8.py\n";
A179_8::test(); cout<<endl;
cout<<"=179_9.py\n";
A179_9::test(); cout<<endl;
cout<<"=179_10.py\n";
A179_10::test(); cout<<endl;
cout<<"call 180.bat\n";
cout<<"=180_0.py\n";
A180_0::test(); cout<<endl;
cout<<"=180_1.py\n";
A180_1::test(); cout<<endl;
cout<<"=180_2.py\n";
A180_2::test(); cout<<endl;
cout<<"=180_3.py\n";
A180_3::test(); cout<<endl;
cout<<"=180_4.py\n";
A180_4::test(); cout<<endl;
cout<<"=180_5.py\n";
A180_5::test(); cout<<endl;
cout<<"=180_6.py\n";
A180_6::test(); cout<<endl;
cout<<"=180_7.py\n";
A180_7::test(); cout<<endl;
cout<<"=180_8.py\n";
A180_8::test(); cout<<endl;
cout<<"=180_9.py\n";
A180_9::test(); cout<<endl;
cout<<"=180_10.py\n";
A180_10::test(); cout<<endl;
cout<<"call 181.bat\n";
cout<<"=181_0.py\n";
A181_0::test(); cout<<endl;
cout<<"=181_1.py\n";
A181_1::test(); cout<<endl;
cout<<"=181_2.py\n";
A181_2::test(); cout<<endl;
cout<<"=181_3.py\n";
A181_3::test(); cout<<endl;
cout<<"=181_4.py\n";
A181_4::test(); cout<<endl;
cout<<"=181_5.py\n";
A181_5::test(); cout<<endl;
cout<<"=181_6.py\n";
A181_6::test(); cout<<endl;
cout<<"=181_7.py\n";
A181_7::test(); cout<<endl;
cout<<"=181_8.py\n";
A181_8::test(); cout<<endl;
cout<<"=181_9.py\n";
A181_9::test(); cout<<endl;
cout<<"=181_10.py\n";
A181_10::test(); cout<<endl;
cout<<"call 182.bat\n";
cout<<"=182_0.py\n";
A182_0::test(); cout<<endl;
cout<<"=182_1.py\n";
A182_1::test(); cout<<endl;
cout<<"=182_2.py\n";
A182_2::test(); cout<<endl;
cout<<"=182_3.py\n";
A182_3::test(); cout<<endl;
cout<<"=182_4.py\n";
A182_4::test(); cout<<endl;
cout<<"=182_5.py\n";
A182_5::test(); cout<<endl;
cout<<"=182_6.py\n";
A182_6::test(); cout<<endl;
cout<<"=182_7.py\n";
A182_7::test(); cout<<endl;
cout<<"=182_8.py\n";
A182_8::test(); cout<<endl;
cout<<"=182_9.py\n";
A182_9::test(); cout<<endl;
cout<<"=182_10.py\n";
A182_10::test(); cout<<endl;
cout<<"call 183.bat\n";
cout<<"=183_0.py\n";
A183_0::test(); cout<<endl;
cout<<"=183_1.py\n";
A183_1::test(); cout<<endl;
cout<<"=183_2.py\n";
A183_2::test(); cout<<endl;
cout<<"=183_3.py\n";
A183_3::test(); cout<<endl;
cout<<"=183_4.py\n";
A183_4::test(); cout<<endl;
cout<<"=183_5.py\n";
A183_5::test(); cout<<endl;
cout<<"=183_6.py\n";
A183_6::test(); cout<<endl;
cout<<"=183_7.py\n";
A183_7::test(); cout<<endl;
cout<<"=183_8.py\n";
A183_8::test(); cout<<endl;
cout<<"=183_9.py\n";
A183_9::test(); cout<<endl;
cout<<"=183_10.py\n";
A183_10::test(); cout<<endl;
cout<<"call 184.bat\n";
cout<<"=184_0.py\n";
A184_0::test(); cout<<endl;
cout<<"=184_1.py\n";
A184_1::test(); cout<<endl;
cout<<"=184_2.py\n";
A184_2::test(); cout<<endl;
cout<<"=184_3.py\n";
A184_3::test(); cout<<endl;
cout<<"=184_4.py\n";
A184_4::test(); cout<<endl;
cout<<"=184_5.py\n";
A184_5::test(); cout<<endl;
cout<<"=184_6.py\n";
A184_6::test(); cout<<endl;
cout<<"=184_7.py\n";
A184_7::test(); cout<<endl;
cout<<"=184_8.py\n";
A184_8::test(); cout<<endl;
cout<<"=184_9.py\n";
A184_9::test(); cout<<endl;
cout<<"=184_10.py\n";
A184_10::test(); cout<<endl;
cout<<"call 185.bat\n";
cout<<"=185_0.py\n";
A185_0::test(); cout<<endl;
cout<<"=185_1.py\n";
A185_1::test(); cout<<endl;
cout<<"=185_2.py\n";
A185_2::test(); cout<<endl;
cout<<"=185_3.py\n";
A185_3::test(); cout<<endl;
cout<<"=185_4.py\n";
A185_4::test(); cout<<endl;
cout<<"=185_5.py\n";
A185_5::test(); cout<<endl;
cout<<"=185_6.py\n";
A185_6::test(); cout<<endl;
cout<<"=185_7.py\n";
A185_7::test(); cout<<endl;
cout<<"=185_8.py\n";
A185_8::test(); cout<<endl;
cout<<"=185_9.py\n";
A185_9::test(); cout<<endl;
cout<<"=185_10.py\n";
A185_10::test(); cout<<endl;
cout<<"call 186.bat\n";
cout<<"=186_0.py\n";
A186_0::test(); cout<<endl;
cout<<"=186_1.py\n";
A186_1::test(); cout<<endl;
cout<<"=186_2.py\n";
A186_2::test(); cout<<endl;
cout<<"=186_3.py\n";
A186_3::test(); cout<<endl;
cout<<"=186_4.py\n";
A186_4::test(); cout<<endl;
cout<<"=186_5.py\n";
A186_5::test(); cout<<endl;
cout<<"=186_6.py\n";
A186_6::test(); cout<<endl;
cout<<"=186_7.py\n";
A186_7::test(); cout<<endl;
cout<<"=186_8.py\n";
A186_8::test(); cout<<endl;
cout<<"=186_9.py\n";
A186_9::test(); cout<<endl;
cout<<"=186_10.py\n";
A186_10::test(); cout<<endl;
cout<<"call 187.bat\n";
cout<<"=187_0.py\n";
A187_0::test(); cout<<endl;
cout<<"=187_1.py\n";
A187_1::test(); cout<<endl;
cout<<"=187_2.py\n";
A187_2::test(); cout<<endl;
cout<<"=187_3.py\n";
A187_3::test(); cout<<endl;
cout<<"=187_4.py\n";
A187_4::test(); cout<<endl;
cout<<"=187_5.py\n";
A187_5::test(); cout<<endl;
cout<<"=187_6.py\n";
A187_6::test(); cout<<endl;
cout<<"=187_7.py\n";
A187_7::test(); cout<<endl;
cout<<"=187_8.py\n";
A187_8::test(); cout<<endl;
cout<<"=187_9.py\n";
A187_9::test(); cout<<endl;
cout<<"=187_10.py\n";
A187_10::test(); cout<<endl;
cout<<"call 188.bat\n";
cout<<"=188_0.py\n";
A188_0::test(); cout<<endl;
cout<<"=188_1.py\n";
A188_1::test(); cout<<endl;
cout<<"=188_2.py\n";
A188_2::test(); cout<<endl;
cout<<"=188_3.py\n";
A188_3::test(); cout<<endl;
cout<<"=188_4.py\n";
A188_4::test(); cout<<endl;
cout<<"=188_5.py\n";
A188_5::test(); cout<<endl;
cout<<"=188_6.py\n";
A188_6::test(); cout<<endl;
cout<<"=188_7.py\n";
A188_7::test(); cout<<endl;
cout<<"=188_8.py\n";
A188_8::test(); cout<<endl;
cout<<"=188_9.py\n";
A188_9::test(); cout<<endl;
cout<<"=188_10.py\n";
A188_10::test(); cout<<endl;
cout<<"call 189.bat\n";
cout<<"=189_0.py\n";
A189_0::test(); cout<<endl;
cout<<"=189_1.py\n";
A189_1::test(); cout<<endl;
cout<<"=189_2.py\n";
A189_2::test(); cout<<endl;
cout<<"=189_3.py\n";
A189_3::test(); cout<<endl;
cout<<"=189_4.py\n";
A189_4::test(); cout<<endl;
cout<<"=189_5.py\n";
A189_5::test(); cout<<endl;
cout<<"=189_6.py\n";
A189_6::test(); cout<<endl;
cout<<"=189_7.py\n";
A189_7::test(); cout<<endl;
cout<<"=189_8.py\n";
A189_8::test(); cout<<endl;
cout<<"=189_9.py\n";
A189_9::test(); cout<<endl;
cout<<"=189_10.py\n";
A189_10::test(); cout<<endl;
cout<<"call 190.bat\n";
cout<<"=190_0.py\n";
A190_0::test(); cout<<endl;
cout<<"=190_1.py\n";
A190_1::test(); cout<<endl;
cout<<"=190_2.py\n";
A190_2::test(); cout<<endl;
cout<<"=190_3.py\n";
A190_3::test(); cout<<endl;
cout<<"=190_4.py\n";
A190_4::test(); cout<<endl;
cout<<"=190_5.py\n";
A190_5::test(); cout<<endl;
cout<<"=190_6.py\n";
A190_6::test(); cout<<endl;
cout<<"=190_7.py\n";
A190_7::test(); cout<<endl;
cout<<"=190_8.py\n";
A190_8::test(); cout<<endl;
cout<<"=190_9.py\n";
A190_9::test(); cout<<endl;
cout<<"=190_10.py\n";
A190_10::test(); cout<<endl;
cout<<"call 191.bat\n";
cout<<"=191_0.py\n";
A191_0::test(); cout<<endl;
cout<<"=191_1.py\n";
A191_1::test(); cout<<endl;
cout<<"=191_2.py\n";
A191_2::test(); cout<<endl;
cout<<"=191_3.py\n";
A191_3::test(); cout<<endl;
cout<<"=191_4.py\n";
A191_4::test(); cout<<endl;
cout<<"=191_5.py\n";
A191_5::test(); cout<<endl;
cout<<"=191_6.py\n";
A191_6::test(); cout<<endl;
cout<<"=191_7.py\n";
A191_7::test(); cout<<endl;
cout<<"=191_8.py\n";
A191_8::test(); cout<<endl;
cout<<"=191_9.py\n";
A191_9::test(); cout<<endl;
cout<<"=191_10.py\n";
A191_10::test(); cout<<endl;
cout<<"call 192.bat\n";
cout<<"=192_0.py\n";
A192_0::test(); cout<<endl;
cout<<"=192_1.py\n";
A192_1::test(); cout<<endl;
cout<<"=192_2.py\n";
A192_2::test(); cout<<endl;
cout<<"=192_3.py\n";
A192_3::test(); cout<<endl;
cout<<"=192_4.py\n";
A192_4::test(); cout<<endl;
cout<<"=192_5.py\n";
A192_5::test(); cout<<endl;
cout<<"=192_6.py\n";
A192_6::test(); cout<<endl;
cout<<"=192_7.py\n";
A192_7::test(); cout<<endl;
cout<<"=192_8.py\n";
A192_8::test(); cout<<endl;
cout<<"=192_9.py\n";
A192_9::test(); cout<<endl;
cout<<"=192_10.py\n";
A192_10::test(); cout<<endl;
cout<<"call 193.bat\n";
cout<<"=193_0.py\n";
A193_0::test(); cout<<endl;
cout<<"=193_1.py\n";
A193_1::test(); cout<<endl;
cout<<"=193_2.py\n";
A193_2::test(); cout<<endl;
cout<<"=193_3.py\n";
A193_3::test(); cout<<endl;
cout<<"=193_4.py\n";
A193_4::test(); cout<<endl;
cout<<"=193_5.py\n";
A193_5::test(); cout<<endl;
cout<<"=193_6.py\n";
A193_6::test(); cout<<endl;
cout<<"=193_7.py\n";
A193_7::test(); cout<<endl;
cout<<"=193_8.py\n";
A193_8::test(); cout<<endl;
cout<<"=193_9.py\n";
A193_9::test(); cout<<endl;
cout<<"=193_10.py\n";
A193_10::test(); cout<<endl;
cout<<"call 194.bat\n";
cout<<"=194_0.py\n";
A194_0::test(); cout<<endl;
cout<<"=194_1.py\n";
A194_1::test(); cout<<endl;
cout<<"=194_2.py\n";
A194_2::test(); cout<<endl;
cout<<"=194_3.py\n";
A194_3::test(); cout<<endl;
cout<<"=194_4.py\n";
A194_4::test(); cout<<endl;
cout<<"=194_5.py\n";
A194_5::test(); cout<<endl;
cout<<"=194_6.py\n";
A194_6::test(); cout<<endl;
cout<<"=194_7.py\n";
A194_7::test(); cout<<endl;
cout<<"=194_8.py\n";
A194_8::test(); cout<<endl;
cout<<"=194_9.py\n";
A194_9::test(); cout<<endl;
cout<<"=194_10.py\n";
A194_10::test(); cout<<endl;
cout<<"call 195.bat\n";
cout<<"=195_0.py\n";
A195_0::test(); cout<<endl;
cout<<"=195_1.py\n";
A195_1::test(); cout<<endl;
cout<<"=195_2.py\n";
A195_2::test(); cout<<endl;
cout<<"=195_3.py\n";
A195_3::test(); cout<<endl;
cout<<"=195_4.py\n";
A195_4::test(); cout<<endl;
cout<<"=195_5.py\n";
A195_5::test(); cout<<endl;
cout<<"=195_6.py\n";
A195_6::test(); cout<<endl;
cout<<"=195_7.py\n";
A195_7::test(); cout<<endl;
cout<<"=195_8.py\n";
A195_8::test(); cout<<endl;
cout<<"=195_9.py\n";
A195_9::test(); cout<<endl;
cout<<"=195_10.py\n";
A195_10::test(); cout<<endl;
cout<<"call 196.bat\n";
cout<<"=196_0.py\n";
A196_0::test(); cout<<endl;
cout<<"=196_1.py\n";
A196_1::test(); cout<<endl;
cout<<"=196_2.py\n";
A196_2::test(); cout<<endl;
cout<<"=196_3.py\n";
A196_3::test(); cout<<endl;
cout<<"=196_4.py\n";
A196_4::test(); cout<<endl;
cout<<"=196_5.py\n";
A196_5::test(); cout<<endl;
cout<<"=196_6.py\n";
A196_6::test(); cout<<endl;
cout<<"=196_7.py\n";
A196_7::test(); cout<<endl;
cout<<"=196_8.py\n";
A196_8::test(); cout<<endl;
cout<<"=196_9.py\n";
A196_9::test(); cout<<endl;
cout<<"=196_10.py\n";
A196_10::test(); cout<<endl;
cout<<"call 197.bat\n";
cout<<"=197_0.py\n";
A197_0::test(); cout<<endl;
cout<<"=197_1.py\n";
A197_1::test(); cout<<endl;
cout<<"=197_2.py\n";
A197_2::test(); cout<<endl;
cout<<"=197_3.py\n";
A197_3::test(); cout<<endl;
cout<<"=197_4.py\n";
A197_4::test(); cout<<endl;
cout<<"=197_5.py\n";
A197_5::test(); cout<<endl;
cout<<"=197_6.py\n";
A197_6::test(); cout<<endl;
cout<<"=197_7.py\n";
A197_7::test(); cout<<endl;
cout<<"=197_8.py\n";
A197_8::test(); cout<<endl;
cout<<"=197_9.py\n";
A197_9::test(); cout<<endl;
cout<<"=197_10.py\n";
A197_10::test(); cout<<endl;
cout<<"call 198.bat\n";
cout<<"=198_0.py\n";
A198_0::test(); cout<<endl;
cout<<"=198_1.py\n";
A198_1::test(); cout<<endl;
cout<<"=198_2.py\n";
A198_2::test(); cout<<endl;
cout<<"=198_3.py\n";
A198_3::test(); cout<<endl;
cout<<"=198_4.py\n";
A198_4::test(); cout<<endl;
cout<<"=198_5.py\n";
A198_5::test(); cout<<endl;
cout<<"=198_6.py\n";
A198_6::test(); cout<<endl;
cout<<"=198_7.py\n";
A198_7::test(); cout<<endl;
cout<<"=198_8.py\n";
A198_8::test(); cout<<endl;
cout<<"=198_9.py\n";
A198_9::test(); cout<<endl;
cout<<"=198_10.py\n";
A198_10::test(); cout<<endl;
cout<<"call 199.bat\n";
cout<<"=199_0.py\n";
A199_0::test(); cout<<endl;
cout<<"=199_1.py\n";
A199_1::test(); cout<<endl;
cout<<"=199_2.py\n";
A199_2::test(); cout<<endl;
cout<<"=199_3.py\n";
A199_3::test(); cout<<endl;
cout<<"=199_4.py\n";
A199_4::test(); cout<<endl;
cout<<"=199_5.py\n";
A199_5::test(); cout<<endl;
cout<<"=199_6.py\n";
A199_6::test(); cout<<endl;
cout<<"=199_7.py\n";
A199_7::test(); cout<<endl;
cout<<"=199_8.py\n";
A199_8::test(); cout<<endl;
cout<<"=199_9.py\n";
A199_9::test(); cout<<endl;
cout<<"=199_10.py\n";
A199_10::test(); cout<<endl;
cout<<"call 200.bat\n";
cout<<"=200_0.py\n";
A200_0::test(); cout<<endl;
cout<<"=200_1.py\n";
A200_1::test(); cout<<endl;
cout<<"=200_2.py\n";
A200_2::test(); cout<<endl;
cout<<"=200_3.py\n";
A200_3::test(); cout<<endl;
cout<<"=200_4.py\n";
A200_4::test(); cout<<endl;
cout<<"=200_5.py\n";
A200_5::test(); cout<<endl;
cout<<"=200_6.py\n";
A200_6::test(); cout<<endl;
cout<<"=200_7.py\n";
A200_7::test(); cout<<endl;
cout<<"=200_8.py\n";
A200_8::test(); cout<<endl;
cout<<"=200_9.py\n";
A200_9::test(); cout<<endl;
cout<<"=200_10.py\n";
A200_10::test(); cout<<endl;
cout<<"call 201.bat\n";
cout<<"=201_0.py\n";
A201_0::test(); cout<<endl;
cout<<"=201_1.py\n";
A201_1::test(); cout<<endl;
cout<<"=201_2.py\n";
A201_2::test(); cout<<endl;
cout<<"=201_3.py\n";
A201_3::test(); cout<<endl;
cout<<"=201_4.py\n";
A201_4::test(); cout<<endl;
cout<<"=201_5.py\n";
A201_5::test(); cout<<endl;
cout<<"=201_6.py\n";
A201_6::test(); cout<<endl;
cout<<"=201_7.py\n";
A201_7::test(); cout<<endl;
cout<<"=201_8.py\n";
A201_8::test(); cout<<endl;
cout<<"=201_9.py\n";
A201_9::test(); cout<<endl;
cout<<"=201_10.py\n";
A201_10::test(); cout<<endl;
cout<<"call 202.bat\n";
cout<<"=202_0.py\n";
A202_0::test(); cout<<endl;
cout<<"=202_1.py\n";
A202_1::test(); cout<<endl;
cout<<"=202_2.py\n";
A202_2::test(); cout<<endl;
cout<<"=202_3.py\n";
A202_3::test(); cout<<endl;
cout<<"=202_4.py\n";
A202_4::test(); cout<<endl;
cout<<"=202_5.py\n";
A202_5::test(); cout<<endl;
cout<<"=202_6.py\n";
A202_6::test(); cout<<endl;
cout<<"=202_7.py\n";
A202_7::test(); cout<<endl;
cout<<"=202_8.py\n";
A202_8::test(); cout<<endl;
cout<<"=202_9.py\n";
A202_9::test(); cout<<endl;
cout<<"=202_10.py\n";
A202_10::test(); cout<<endl;
cout<<"call 203.bat\n";
cout<<"=203_0.py\n";
A203_0::test(); cout<<endl;
cout<<"=203_1.py\n";
A203_1::test(); cout<<endl;
cout<<"=203_2.py\n";
A203_2::test(); cout<<endl;
cout<<"=203_3.py\n";
A203_3::test(); cout<<endl;
cout<<"=203_4.py\n";
A203_4::test(); cout<<endl;
cout<<"=203_5.py\n";
A203_5::test(); cout<<endl;
cout<<"=203_6.py\n";
A203_6::test(); cout<<endl;
cout<<"=203_7.py\n";
A203_7::test(); cout<<endl;
cout<<"=203_8.py\n";
A203_8::test(); cout<<endl;
cout<<"=203_9.py\n";
A203_9::test(); cout<<endl;
cout<<"=203_10.py\n";
A203_10::test(); cout<<endl;
cout<<"call 204.bat\n";
cout<<"=204_0.py\n";
A204_0::test(); cout<<endl;
cout<<"=204_1.py\n";
A204_1::test(); cout<<endl;
cout<<"=204_2.py\n";
A204_2::test(); cout<<endl;
cout<<"=204_3.py\n";
A204_3::test(); cout<<endl;
cout<<"=204_4.py\n";
A204_4::test(); cout<<endl;
cout<<"=204_5.py\n";
A204_5::test(); cout<<endl;
cout<<"=204_6.py\n";
A204_6::test(); cout<<endl;
cout<<"=204_7.py\n";
A204_7::test(); cout<<endl;
cout<<"=204_8.py\n";
A204_8::test(); cout<<endl;
cout<<"=204_9.py\n";
A204_9::test(); cout<<endl;
cout<<"=204_10.py\n";
A204_10::test(); cout<<endl;
cout<<"call 205.bat\n";
cout<<"=205_0.py\n";
A205_0::test(); cout<<endl;
cout<<"=205_1.py\n";
A205_1::test(); cout<<endl;
cout<<"=205_2.py\n";
A205_2::test(); cout<<endl;
cout<<"=205_3.py\n";
A205_3::test(); cout<<endl;
cout<<"=205_4.py\n";
A205_4::test(); cout<<endl;
cout<<"=205_5.py\n";
A205_5::test(); cout<<endl;
cout<<"=205_6.py\n";
A205_6::test(); cout<<endl;
cout<<"=205_7.py\n";
A205_7::test(); cout<<endl;
cout<<"=205_8.py\n";
A205_8::test(); cout<<endl;
cout<<"=205_9.py\n";
A205_9::test(); cout<<endl;
cout<<"=205_10.py\n";
A205_10::test(); cout<<endl;
cout<<"call 206.bat\n";
cout<<"=206_0.py\n";
A206_0::test(); cout<<endl;
cout<<"=206_1.py\n";
A206_1::test(); cout<<endl;
cout<<"=206_2.py\n";
A206_2::test(); cout<<endl;
cout<<"=206_3.py\n";
A206_3::test(); cout<<endl;
cout<<"=206_4.py\n";
A206_4::test(); cout<<endl;
cout<<"=206_5.py\n";
A206_5::test(); cout<<endl;
cout<<"=206_6.py\n";
A206_6::test(); cout<<endl;
cout<<"=206_7.py\n";
A206_7::test(); cout<<endl;
cout<<"=206_8.py\n";
A206_8::test(); cout<<endl;
cout<<"=206_9.py\n";
A206_9::test(); cout<<endl;
cout<<"=206_10.py\n";
A206_10::test(); cout<<endl;
cout<<"call 207.bat\n";
cout<<"=207_0.py\n";
A207_0::test(); cout<<endl;
cout<<"=207_1.py\n";
A207_1::test(); cout<<endl;
cout<<"=207_2.py\n";
A207_2::test(); cout<<endl;
cout<<"=207_3.py\n";
A207_3::test(); cout<<endl;
cout<<"=207_4.py\n";
A207_4::test(); cout<<endl;
cout<<"=207_5.py\n";
A207_5::test(); cout<<endl;
cout<<"=207_6.py\n";
A207_6::test(); cout<<endl;
cout<<"=207_7.py\n";
A207_7::test(); cout<<endl;
cout<<"=207_8.py\n";
A207_8::test(); cout<<endl;
cout<<"=207_9.py\n";
A207_9::test(); cout<<endl;
cout<<"=207_10.py\n";
A207_10::test(); cout<<endl;
cout<<"call 208.bat\n";
cout<<"=208_0.py\n";
A208_0::test(); cout<<endl;
cout<<"=208_1.py\n";
A208_1::test(); cout<<endl;
cout<<"=208_2.py\n";
A208_2::test(); cout<<endl;
cout<<"=208_3.py\n";
A208_3::test(); cout<<endl;
cout<<"=208_4.py\n";
A208_4::test(); cout<<endl;
cout<<"=208_5.py\n";
A208_5::test(); cout<<endl;
cout<<"=208_6.py\n";
A208_6::test(); cout<<endl;
cout<<"=208_7.py\n";
A208_7::test(); cout<<endl;
cout<<"=208_8.py\n";
A208_8::test(); cout<<endl;
cout<<"=208_9.py\n";
A208_9::test(); cout<<endl;
cout<<"=208_10.py\n";
A208_10::test(); cout<<endl;
cout<<"call 209.bat\n";
cout<<"=209_0.py\n";
A209_0::test(); cout<<endl;
cout<<"=209_1.py\n";
A209_1::test(); cout<<endl;
cout<<"=209_2.py\n";
A209_2::test(); cout<<endl;
cout<<"=209_3.py\n";
A209_3::test(); cout<<endl;
cout<<"=209_4.py\n";
A209_4::test(); cout<<endl;
cout<<"=209_5.py\n";
A209_5::test(); cout<<endl;
cout<<"=209_6.py\n";
A209_6::test(); cout<<endl;
cout<<"=209_7.py\n";
A209_7::test(); cout<<endl;
cout<<"=209_8.py\n";
A209_8::test(); cout<<endl;
cout<<"=209_9.py\n";
A209_9::test(); cout<<endl;
cout<<"=209_10.py\n";
A209_10::test(); cout<<endl;
cout<<"call 210.bat\n";
cout<<"=210_0.py\n";
A210_0::test(); cout<<endl;
cout<<"=210_1.py\n";
A210_1::test(); cout<<endl;
cout<<"=210_2.py\n";
A210_2::test(); cout<<endl;
cout<<"=210_3.py\n";
A210_3::test(); cout<<endl;
cout<<"=210_4.py\n";
A210_4::test(); cout<<endl;
cout<<"=210_5.py\n";
A210_5::test(); cout<<endl;
cout<<"=210_6.py\n";
A210_6::test(); cout<<endl;
cout<<"=210_7.py\n";
A210_7::test(); cout<<endl;
cout<<"=210_8.py\n";
A210_8::test(); cout<<endl;
cout<<"=210_9.py\n";
A210_9::test(); cout<<endl;
cout<<"=210_10.py\n";
A210_10::test(); cout<<endl;
cout<<"call 211.bat\n";
cout<<"=211_0.py\n";
A211_0::test(); cout<<endl;
cout<<"=211_1.py\n";
A211_1::test(); cout<<endl;
cout<<"=211_2.py\n";
A211_2::test(); cout<<endl;
cout<<"=211_3.py\n";
A211_3::test(); cout<<endl;
cout<<"=211_4.py\n";
A211_4::test(); cout<<endl;
cout<<"=211_5.py\n";
A211_5::test(); cout<<endl;
cout<<"=211_6.py\n";
A211_6::test(); cout<<endl;
cout<<"=211_7.py\n";
A211_7::test(); cout<<endl;
cout<<"=211_8.py\n";
A211_8::test(); cout<<endl;
cout<<"=211_9.py\n";
A211_9::test(); cout<<endl;
cout<<"=211_10.py\n";
A211_10::test(); cout<<endl;
cout<<"call 212.bat\n";
cout<<"=212_0.py\n";
A212_0::test(); cout<<endl;
cout<<"=212_1.py\n";
A212_1::test(); cout<<endl;
cout<<"=212_2.py\n";
A212_2::test(); cout<<endl;
cout<<"=212_3.py\n";
A212_3::test(); cout<<endl;
cout<<"=212_4.py\n";
A212_4::test(); cout<<endl;
cout<<"=212_5.py\n";
A212_5::test(); cout<<endl;
cout<<"=212_6.py\n";
A212_6::test(); cout<<endl;
cout<<"=212_7.py\n";
A212_7::test(); cout<<endl;
cout<<"=212_8.py\n";
A212_8::test(); cout<<endl;
cout<<"=212_9.py\n";
A212_9::test(); cout<<endl;
cout<<"=212_10.py\n";
A212_10::test(); cout<<endl;
cout<<"call 213.bat\n";
cout<<"=213_0.py\n";
A213_0::test(); cout<<endl;
cout<<"=213_1.py\n";
A213_1::test(); cout<<endl;
cout<<"=213_2.py\n";
A213_2::test(); cout<<endl;
cout<<"=213_3.py\n";
A213_3::test(); cout<<endl;
cout<<"=213_4.py\n";
A213_4::test(); cout<<endl;
cout<<"=213_5.py\n";
A213_5::test(); cout<<endl;
cout<<"=213_6.py\n";
A213_6::test(); cout<<endl;
cout<<"=213_7.py\n";
A213_7::test(); cout<<endl;
cout<<"=213_8.py\n";
A213_8::test(); cout<<endl;
cout<<"=213_9.py\n";
A213_9::test(); cout<<endl;
cout<<"=213_10.py\n";
A213_10::test(); cout<<endl;
cout<<"call 214.bat\n";
cout<<"=214_0.py\n";
A214_0::test(); cout<<endl;
cout<<"=214_1.py\n";
A214_1::test(); cout<<endl;
cout<<"=214_2.py\n";
A214_2::test(); cout<<endl;
cout<<"=214_3.py\n";
A214_3::test(); cout<<endl;
cout<<"=214_4.py\n";
A214_4::test(); cout<<endl;
cout<<"=214_5.py\n";
A214_5::test(); cout<<endl;
cout<<"=214_6.py\n";
A214_6::test(); cout<<endl;
cout<<"=214_7.py\n";
A214_7::test(); cout<<endl;
cout<<"=214_8.py\n";
A214_8::test(); cout<<endl;
cout<<"=214_9.py\n";
A214_9::test(); cout<<endl;
cout<<"=214_10.py\n";
A214_10::test(); cout<<endl;
cout<<"call 215.bat\n";
cout<<"=215_0.py\n";
A215_0::test(); cout<<endl;
cout<<"=215_1.py\n";
A215_1::test(); cout<<endl;
cout<<"=215_2.py\n";
A215_2::test(); cout<<endl;
cout<<"=215_3.py\n";
A215_3::test(); cout<<endl;
cout<<"=215_4.py\n";
A215_4::test(); cout<<endl;
cout<<"=215_5.py\n";
A215_5::test(); cout<<endl;
cout<<"=215_6.py\n";
A215_6::test(); cout<<endl;
cout<<"=215_7.py\n";
A215_7::test(); cout<<endl;
cout<<"=215_8.py\n";
A215_8::test(); cout<<endl;
cout<<"=215_9.py\n";
A215_9::test(); cout<<endl;
cout<<"=215_10.py\n";
A215_10::test(); cout<<endl;
cout<<"call 216.bat\n";
cout<<"=216_0.py\n";
A216_0::test(); cout<<endl;
cout<<"=216_1.py\n";
A216_1::test(); cout<<endl;
cout<<"=216_2.py\n";
A216_2::test(); cout<<endl;
cout<<"=216_3.py\n";
A216_3::test(); cout<<endl;
cout<<"=216_4.py\n";
A216_4::test(); cout<<endl;
cout<<"=216_5.py\n";
A216_5::test(); cout<<endl;
cout<<"=216_6.py\n";
A216_6::test(); cout<<endl;
cout<<"=216_7.py\n";
A216_7::test(); cout<<endl;
cout<<"=216_8.py\n";
A216_8::test(); cout<<endl;
cout<<"=216_9.py\n";
A216_9::test(); cout<<endl;
cout<<"=216_10.py\n";
A216_10::test(); cout<<endl;
cout<<"call 217.bat\n";
cout<<"=217_0.py\n";
A217_0::test(); cout<<endl;
cout<<"=217_1.py\n";
A217_1::test(); cout<<endl;
cout<<"=217_2.py\n";
A217_2::test(); cout<<endl;
cout<<"=217_3.py\n";
A217_3::test(); cout<<endl;
cout<<"=217_4.py\n";
A217_4::test(); cout<<endl;
cout<<"=217_5.py\n";
A217_5::test(); cout<<endl;
cout<<"=217_6.py\n";
A217_6::test(); cout<<endl;
cout<<"=217_7.py\n";
A217_7::test(); cout<<endl;
cout<<"=217_8.py\n";
A217_8::test(); cout<<endl;
cout<<"=217_9.py\n";
A217_9::test(); cout<<endl;
cout<<"=217_10.py\n";
A217_10::test(); cout<<endl;
cout<<"call 218.bat\n";
cout<<"=218_0.py\n";
A218_0::test(); cout<<endl;
cout<<"=218_1.py\n";
A218_1::test(); cout<<endl;
cout<<"=218_2.py\n";
A218_2::test(); cout<<endl;
cout<<"=218_3.py\n";
A218_3::test(); cout<<endl;
cout<<"=218_4.py\n";
A218_4::test(); cout<<endl;
cout<<"=218_5.py\n";
A218_5::test(); cout<<endl;
cout<<"=218_6.py\n";
A218_6::test(); cout<<endl;
cout<<"=218_7.py\n";
A218_7::test(); cout<<endl;
cout<<"=218_8.py\n";
A218_8::test(); cout<<endl;
cout<<"=218_9.py\n";
A218_9::test(); cout<<endl;
cout<<"=218_10.py\n";
A218_10::test(); cout<<endl;
cout<<"call 219.bat\n";
cout<<"=219_0.py\n";
A219_0::test(); cout<<endl;
cout<<"=219_1.py\n";
A219_1::test(); cout<<endl;
cout<<"=219_2.py\n";
A219_2::test(); cout<<endl;
cout<<"=219_3.py\n";
A219_3::test(); cout<<endl;
cout<<"=219_4.py\n";
A219_4::test(); cout<<endl;
cout<<"=219_5.py\n";
A219_5::test(); cout<<endl;
cout<<"=219_6.py\n";
A219_6::test(); cout<<endl;
cout<<"=219_7.py\n";
A219_7::test(); cout<<endl;
cout<<"=219_8.py\n";
A219_8::test(); cout<<endl;
cout<<"=219_9.py\n";
A219_9::test(); cout<<endl;
cout<<"=219_10.py\n";
A219_10::test(); cout<<endl;
cout<<"call 220.bat\n";
cout<<"=220_0.py\n";
A220_0::test(); cout<<endl;
cout<<"=220_1.py\n";
A220_1::test(); cout<<endl;
cout<<"=220_2.py\n";
A220_2::test(); cout<<endl;
cout<<"=220_3.py\n";
A220_3::test(); cout<<endl;
cout<<"=220_4.py\n";
A220_4::test(); cout<<endl;
cout<<"=220_5.py\n";
A220_5::test(); cout<<endl;
cout<<"=220_6.py\n";
A220_6::test(); cout<<endl;
cout<<"=220_7.py\n";
A220_7::test(); cout<<endl;
cout<<"=220_8.py\n";
A220_8::test(); cout<<endl;
cout<<"=220_9.py\n";
A220_9::test(); cout<<endl;
cout<<"=220_10.py\n";
A220_10::test(); cout<<endl;
cout<<"call 221.bat\n";
cout<<"=221_0.py\n";
A221_0::test(); cout<<endl;
cout<<"=221_1.py\n";
A221_1::test(); cout<<endl;
cout<<"=221_2.py\n";
A221_2::test(); cout<<endl;
cout<<"=221_3.py\n";
A221_3::test(); cout<<endl;
cout<<"=221_4.py\n";
A221_4::test(); cout<<endl;
cout<<"=221_5.py\n";
A221_5::test(); cout<<endl;
cout<<"=221_6.py\n";
A221_6::test(); cout<<endl;
cout<<"=221_7.py\n";
A221_7::test(); cout<<endl;
cout<<"=221_8.py\n";
A221_8::test(); cout<<endl;
cout<<"=221_9.py\n";
A221_9::test(); cout<<endl;
cout<<"=221_10.py\n";
A221_10::test(); cout<<endl;
cout<<"call 222.bat\n";
cout<<"=222_0.py\n";
A222_0::test(); cout<<endl;
cout<<"=222_1.py\n";
A222_1::test(); cout<<endl;
cout<<"=222_2.py\n";
A222_2::test(); cout<<endl;
cout<<"=222_3.py\n";
A222_3::test(); cout<<endl;
cout<<"=222_4.py\n";
A222_4::test(); cout<<endl;
cout<<"=222_5.py\n";
A222_5::test(); cout<<endl;
cout<<"=222_6.py\n";
A222_6::test(); cout<<endl;
cout<<"=222_7.py\n";
A222_7::test(); cout<<endl;
cout<<"=222_8.py\n";
A222_8::test(); cout<<endl;
cout<<"=222_9.py\n";
A222_9::test(); cout<<endl;
cout<<"=222_10.py\n";
A222_10::test(); cout<<endl;
cout<<"call 223.bat\n";
cout<<"=223_0.py\n";
A223_0::test(); cout<<endl;
cout<<"=223_1.py\n";
A223_1::test(); cout<<endl;
cout<<"=223_2.py\n";
A223_2::test(); cout<<endl;
cout<<"=223_3.py\n";
A223_3::test(); cout<<endl;
cout<<"=223_4.py\n";
A223_4::test(); cout<<endl;
cout<<"=223_5.py\n";
A223_5::test(); cout<<endl;
cout<<"=223_6.py\n";
A223_6::test(); cout<<endl;
cout<<"=223_7.py\n";
A223_7::test(); cout<<endl;
cout<<"=223_8.py\n";
A223_8::test(); cout<<endl;
cout<<"=223_9.py\n";
A223_9::test(); cout<<endl;
cout<<"=223_10.py\n";
A223_10::test(); cout<<endl;
cout<<"call 224.bat\n";
cout<<"=224_0.py\n";
A224_0::test(); cout<<endl;
cout<<"=224_1.py\n";
A224_1::test(); cout<<endl;
cout<<"=224_2.py\n";
A224_2::test(); cout<<endl;
cout<<"=224_3.py\n";
A224_3::test(); cout<<endl;
cout<<"=224_4.py\n";
A224_4::test(); cout<<endl;
cout<<"=224_5.py\n";
A224_5::test(); cout<<endl;
cout<<"=224_6.py\n";
A224_6::test(); cout<<endl;
cout<<"=224_7.py\n";
A224_7::test(); cout<<endl;
cout<<"=224_8.py\n";
A224_8::test(); cout<<endl;
cout<<"=224_9.py\n";
A224_9::test(); cout<<endl;
cout<<"=224_10.py\n";
A224_10::test(); cout<<endl;
cout<<"call 225.bat\n";
cout<<"=225_0.py\n";
A225_0::test(); cout<<endl;
cout<<"=225_1.py\n";
A225_1::test(); cout<<endl;
cout<<"=225_2.py\n";
A225_2::test(); cout<<endl;
cout<<"=225_3.py\n";
A225_3::test(); cout<<endl;
cout<<"=225_4.py\n";
A225_4::test(); cout<<endl;
cout<<"=225_5.py\n";
A225_5::test(); cout<<endl;
cout<<"=225_6.py\n";
A225_6::test(); cout<<endl;
cout<<"=225_7.py\n";
A225_7::test(); cout<<endl;
cout<<"=225_8.py\n";
A225_8::test(); cout<<endl;
cout<<"=225_9.py\n";
A225_9::test(); cout<<endl;
cout<<"=225_10.py\n";
A225_10::test(); cout<<endl;
cout<<"call 226.bat\n";
cout<<"=226_0.py\n";
A226_0::test(); cout<<endl;
cout<<"=226_1.py\n";
A226_1::test(); cout<<endl;
cout<<"=226_2.py\n";
A226_2::test(); cout<<endl;
cout<<"=226_3.py\n";
A226_3::test(); cout<<endl;
cout<<"=226_4.py\n";
A226_4::test(); cout<<endl;
cout<<"=226_5.py\n";
A226_5::test(); cout<<endl;
cout<<"=226_6.py\n";
A226_6::test(); cout<<endl;
cout<<"=226_7.py\n";
A226_7::test(); cout<<endl;
cout<<"=226_8.py\n";
A226_8::test(); cout<<endl;
cout<<"=226_9.py\n";
A226_9::test(); cout<<endl;
cout<<"=226_10.py\n";
A226_10::test(); cout<<endl;
cout<<"call 227.bat\n";
cout<<"=227_0.py\n";
A227_0::test(); cout<<endl;
cout<<"=227_1.py\n";
A227_1::test(); cout<<endl;
cout<<"=227_2.py\n";
A227_2::test(); cout<<endl;
cout<<"=227_3.py\n";
A227_3::test(); cout<<endl;
cout<<"=227_4.py\n";
A227_4::test(); cout<<endl;
cout<<"=227_5.py\n";
A227_5::test(); cout<<endl;
cout<<"=227_6.py\n";
A227_6::test(); cout<<endl;
cout<<"=227_7.py\n";
A227_7::test(); cout<<endl;
cout<<"=227_8.py\n";
A227_8::test(); cout<<endl;
cout<<"=227_9.py\n";
A227_9::test(); cout<<endl;
cout<<"=227_10.py\n";
A227_10::test(); cout<<endl;
cout<<"call 228.bat\n";
cout<<"=228_0.py\n";
A228_0::test(); cout<<endl;
cout<<"=228_1.py\n";
A228_1::test(); cout<<endl;
cout<<"=228_2.py\n";
A228_2::test(); cout<<endl;
cout<<"=228_3.py\n";
A228_3::test(); cout<<endl;
cout<<"=228_4.py\n";
A228_4::test(); cout<<endl;
cout<<"=228_5.py\n";
A228_5::test(); cout<<endl;
cout<<"=228_6.py\n";
A228_6::test(); cout<<endl;
cout<<"=228_7.py\n";
A228_7::test(); cout<<endl;
cout<<"=228_8.py\n";
A228_8::test(); cout<<endl;
cout<<"=228_9.py\n";
A228_9::test(); cout<<endl;
cout<<"=228_10.py\n";
A228_10::test(); cout<<endl;
cout<<"call 229.bat\n";
cout<<"=229_0.py\n";
A229_0::test(); cout<<endl;
cout<<"=229_1.py\n";
A229_1::test(); cout<<endl;
cout<<"=229_2.py\n";
A229_2::test(); cout<<endl;
cout<<"=229_3.py\n";
A229_3::test(); cout<<endl;
cout<<"=229_4.py\n";
A229_4::test(); cout<<endl;
cout<<"=229_5.py\n";
A229_5::test(); cout<<endl;
cout<<"=229_6.py\n";
A229_6::test(); cout<<endl;
cout<<"=229_7.py\n";
A229_7::test(); cout<<endl;
cout<<"=229_8.py\n";
A229_8::test(); cout<<endl;
cout<<"=229_9.py\n";
A229_9::test(); cout<<endl;
cout<<"=229_10.py\n";
A229_10::test(); cout<<endl;
cout<<"call 230.bat\n";
cout<<"=230_0.py\n";
A230_0::test(); cout<<endl;
cout<<"=230_1.py\n";
A230_1::test(); cout<<endl;
cout<<"=230_2.py\n";
A230_2::test(); cout<<endl;
cout<<"=230_3.py\n";
A230_3::test(); cout<<endl;
cout<<"=230_4.py\n";
A230_4::test(); cout<<endl;
cout<<"=230_5.py\n";
A230_5::test(); cout<<endl;
cout<<"=230_6.py\n";
A230_6::test(); cout<<endl;
cout<<"=230_7.py\n";
A230_7::test(); cout<<endl;
cout<<"=230_8.py\n";
A230_8::test(); cout<<endl;
cout<<"=230_9.py\n";
A230_9::test(); cout<<endl;
cout<<"=230_10.py\n";
A230_10::test(); cout<<endl;
cout<<"call 231.bat\n";
cout<<"=231_0.py\n";
A231_0::test(); cout<<endl;
cout<<"=231_1.py\n";
A231_1::test(); cout<<endl;
cout<<"=231_2.py\n";
A231_2::test(); cout<<endl;
cout<<"=231_3.py\n";
A231_3::test(); cout<<endl;
cout<<"=231_4.py\n";
A231_4::test(); cout<<endl;
cout<<"=231_5.py\n";
A231_5::test(); cout<<endl;
cout<<"=231_6.py\n";
A231_6::test(); cout<<endl;
cout<<"=231_7.py\n";
A231_7::test(); cout<<endl;
cout<<"=231_8.py\n";
A231_8::test(); cout<<endl;
cout<<"=231_9.py\n";
A231_9::test(); cout<<endl;
cout<<"=231_10.py\n";
A231_10::test(); cout<<endl;
cout<<"call 232.bat\n";
cout<<"=232_0.py\n";
A232_0::test(); cout<<endl;
cout<<"=232_1.py\n";
A232_1::test(); cout<<endl;
cout<<"=232_2.py\n";
A232_2::test(); cout<<endl;
cout<<"=232_3.py\n";
A232_3::test(); cout<<endl;
cout<<"=232_4.py\n";
A232_4::test(); cout<<endl;
cout<<"=232_5.py\n";
A232_5::test(); cout<<endl;
cout<<"=232_6.py\n";
A232_6::test(); cout<<endl;
cout<<"=232_7.py\n";
A232_7::test(); cout<<endl;
cout<<"=232_8.py\n";
A232_8::test(); cout<<endl;
cout<<"=232_9.py\n";
A232_9::test(); cout<<endl;
cout<<"=232_10.py\n";
A232_10::test(); cout<<endl;
cout<<"call 233.bat\n";
cout<<"=233_0.py\n";
A233_0::test(); cout<<endl;
cout<<"=233_1.py\n";
A233_1::test(); cout<<endl;
cout<<"=233_2.py\n";
A233_2::test(); cout<<endl;
cout<<"=233_3.py\n";
A233_3::test(); cout<<endl;
cout<<"=233_4.py\n";
A233_4::test(); cout<<endl;
cout<<"=233_5.py\n";
A233_5::test(); cout<<endl;
cout<<"=233_6.py\n";
A233_6::test(); cout<<endl;
cout<<"=233_7.py\n";
A233_7::test(); cout<<endl;
cout<<"=233_8.py\n";
A233_8::test(); cout<<endl;
cout<<"=233_9.py\n";
A233_9::test(); cout<<endl;
cout<<"=233_10.py\n";
A233_10::test(); cout<<endl;
cout<<"call 234.bat\n";
cout<<"=234_0.py\n";
A234_0::test(); cout<<endl;
cout<<"=234_1.py\n";
A234_1::test(); cout<<endl;
cout<<"=234_2.py\n";
A234_2::test(); cout<<endl;
cout<<"=234_3.py\n";
A234_3::test(); cout<<endl;
cout<<"=234_4.py\n";
A234_4::test(); cout<<endl;
cout<<"=234_5.py\n";
A234_5::test(); cout<<endl;
cout<<"=234_6.py\n";
A234_6::test(); cout<<endl;
cout<<"=234_7.py\n";
A234_7::test(); cout<<endl;
cout<<"=234_8.py\n";
A234_8::test(); cout<<endl;
cout<<"=234_9.py\n";
A234_9::test(); cout<<endl;
cout<<"=234_10.py\n";
A234_10::test(); cout<<endl;
cout<<"call 235.bat\n";
cout<<"=235_0.py\n";
A235_0::test(); cout<<endl;
cout<<"=235_1.py\n";
A235_1::test(); cout<<endl;
cout<<"=235_2.py\n";
A235_2::test(); cout<<endl;
cout<<"=235_3.py\n";
A235_3::test(); cout<<endl;
cout<<"=235_4.py\n";
A235_4::test(); cout<<endl;
cout<<"=235_5.py\n";
A235_5::test(); cout<<endl;
cout<<"=235_6.py\n";
A235_6::test(); cout<<endl;
cout<<"=235_7.py\n";
A235_7::test(); cout<<endl;
cout<<"=235_8.py\n";
A235_8::test(); cout<<endl;
cout<<"=235_9.py\n";
A235_9::test(); cout<<endl;
cout<<"=235_10.py\n";
A235_10::test(); cout<<endl;
cout<<"call 236.bat\n";
cout<<"=236_0.py\n";
A236_0::test(); cout<<endl;
cout<<"=236_1.py\n";
A236_1::test(); cout<<endl;
cout<<"=236_2.py\n";
A236_2::test(); cout<<endl;
cout<<"=236_3.py\n";
A236_3::test(); cout<<endl;
cout<<"=236_4.py\n";
A236_4::test(); cout<<endl;
cout<<"=236_5.py\n";
A236_5::test(); cout<<endl;
cout<<"=236_6.py\n";
A236_6::test(); cout<<endl;
cout<<"=236_7.py\n";
A236_7::test(); cout<<endl;
cout<<"=236_8.py\n";
A236_8::test(); cout<<endl;
cout<<"=236_9.py\n";
A236_9::test(); cout<<endl;
cout<<"=236_10.py\n";
A236_10::test(); cout<<endl;
cout<<"call 237.bat\n";
cout<<"=237_0.py\n";
A237_0::test(); cout<<endl;
cout<<"=237_1.py\n";
A237_1::test(); cout<<endl;
cout<<"=237_2.py\n";
A237_2::test(); cout<<endl;
cout<<"=237_3.py\n";
A237_3::test(); cout<<endl;
cout<<"=237_4.py\n";
A237_4::test(); cout<<endl;
cout<<"=237_5.py\n";
A237_5::test(); cout<<endl;
cout<<"=237_6.py\n";
A237_6::test(); cout<<endl;
cout<<"=237_7.py\n";
A237_7::test(); cout<<endl;
cout<<"=237_8.py\n";
A237_8::test(); cout<<endl;
cout<<"=237_9.py\n";
A237_9::test(); cout<<endl;
cout<<"=237_10.py\n";
A237_10::test(); cout<<endl;
cout<<"call 238.bat\n";
cout<<"=238_0.py\n";
A238_0::test(); cout<<endl;
cout<<"=238_1.py\n";
A238_1::test(); cout<<endl;
cout<<"=238_2.py\n";
A238_2::test(); cout<<endl;
cout<<"=238_3.py\n";
A238_3::test(); cout<<endl;
cout<<"=238_4.py\n";
A238_4::test(); cout<<endl;
cout<<"=238_5.py\n";
A238_5::test(); cout<<endl;
cout<<"=238_6.py\n";
A238_6::test(); cout<<endl;
cout<<"=238_7.py\n";
A238_7::test(); cout<<endl;
cout<<"=238_8.py\n";
A238_8::test(); cout<<endl;
cout<<"=238_9.py\n";
A238_9::test(); cout<<endl;
cout<<"=238_10.py\n";
A238_10::test(); cout<<endl;
cout<<"call 239.bat\n";
cout<<"=239_0.py\n";
A239_0::test(); cout<<endl;
cout<<"=239_1.py\n";
A239_1::test(); cout<<endl;
cout<<"=239_2.py\n";
A239_2::test(); cout<<endl;
cout<<"=239_3.py\n";
A239_3::test(); cout<<endl;
cout<<"=239_4.py\n";
A239_4::test(); cout<<endl;
cout<<"=239_5.py\n";
A239_5::test(); cout<<endl;
cout<<"=239_6.py\n";
A239_6::test(); cout<<endl;
cout<<"=239_7.py\n";
A239_7::test(); cout<<endl;
cout<<"=239_8.py\n";
A239_8::test(); cout<<endl;
cout<<"=239_9.py\n";
A239_9::test(); cout<<endl;
cout<<"=239_10.py\n";
A239_10::test(); cout<<endl;
cout<<"call 240.bat\n";
cout<<"=240_0.py\n";
A240_0::test(); cout<<endl;
cout<<"=240_1.py\n";
A240_1::test(); cout<<endl;
cout<<"=240_2.py\n";
A240_2::test(); cout<<endl;
cout<<"=240_3.py\n";
A240_3::test(); cout<<endl;
cout<<"=240_4.py\n";
A240_4::test(); cout<<endl;
cout<<"=240_5.py\n";
A240_5::test(); cout<<endl;
cout<<"=240_6.py\n";
A240_6::test(); cout<<endl;
cout<<"=240_7.py\n";
A240_7::test(); cout<<endl;
cout<<"=240_8.py\n";
A240_8::test(); cout<<endl;
cout<<"=240_9.py\n";
A240_9::test(); cout<<endl;
cout<<"=240_10.py\n";
A240_10::test(); cout<<endl;
cout<<"call 241.bat\n";
cout<<"=241_0.py\n";
A241_0::test(); cout<<endl;
cout<<"=241_1.py\n";
A241_1::test(); cout<<endl;
cout<<"=241_2.py\n";
A241_2::test(); cout<<endl;
cout<<"=241_3.py\n";
A241_3::test(); cout<<endl;
cout<<"=241_4.py\n";
A241_4::test(); cout<<endl;
cout<<"=241_5.py\n";
A241_5::test(); cout<<endl;
cout<<"=241_6.py\n";
A241_6::test(); cout<<endl;
cout<<"=241_7.py\n";
A241_7::test(); cout<<endl;
cout<<"=241_8.py\n";
A241_8::test(); cout<<endl;
cout<<"=241_9.py\n";
A241_9::test(); cout<<endl;
cout<<"=241_10.py\n";
A241_10::test(); cout<<endl;
cout<<"call 242.bat\n";
cout<<"=242_0.py\n";
A242_0::test(); cout<<endl;
cout<<"=242_1.py\n";
A242_1::test(); cout<<endl;
cout<<"=242_2.py\n";
A242_2::test(); cout<<endl;
cout<<"=242_3.py\n";
A242_3::test(); cout<<endl;
cout<<"=242_4.py\n";
A242_4::test(); cout<<endl;
cout<<"=242_5.py\n";
A242_5::test(); cout<<endl;
cout<<"=242_6.py\n";
A242_6::test(); cout<<endl;
cout<<"=242_7.py\n";
A242_7::test(); cout<<endl;
cout<<"=242_8.py\n";
A242_8::test(); cout<<endl;
cout<<"=242_9.py\n";
A242_9::test(); cout<<endl;
cout<<"=242_10.py\n";
A242_10::test(); cout<<endl;
cout<<"call 243.bat\n";
cout<<"=243_0.py\n";
A243_0::test(); cout<<endl;
cout<<"=243_1.py\n";
A243_1::test(); cout<<endl;
cout<<"=243_2.py\n";
A243_2::test(); cout<<endl;
cout<<"=243_3.py\n";
A243_3::test(); cout<<endl;
cout<<"=243_4.py\n";
A243_4::test(); cout<<endl;
cout<<"=243_5.py\n";
A243_5::test(); cout<<endl;
cout<<"=243_6.py\n";
A243_6::test(); cout<<endl;
cout<<"=243_7.py\n";
A243_7::test(); cout<<endl;
cout<<"=243_8.py\n";
A243_8::test(); cout<<endl;
cout<<"=243_9.py\n";
A243_9::test(); cout<<endl;
cout<<"=243_10.py\n";
A243_10::test(); cout<<endl;
cout<<"call 244.bat\n";
cout<<"=244_0.py\n";
A244_0::test(); cout<<endl;
cout<<"=244_1.py\n";
A244_1::test(); cout<<endl;
cout<<"=244_2.py\n";
A244_2::test(); cout<<endl;
cout<<"=244_3.py\n";
A244_3::test(); cout<<endl;
cout<<"=244_4.py\n";
A244_4::test(); cout<<endl;
cout<<"=244_5.py\n";
A244_5::test(); cout<<endl;
cout<<"=244_6.py\n";
A244_6::test(); cout<<endl;
cout<<"=244_7.py\n";
A244_7::test(); cout<<endl;
cout<<"=244_8.py\n";
A244_8::test(); cout<<endl;
cout<<"=244_9.py\n";
A244_9::test(); cout<<endl;
cout<<"=244_10.py\n";
A244_10::test(); cout<<endl;
cout<<"call 245.bat\n";
cout<<"=245_0.py\n";
A245_0::test(); cout<<endl;
cout<<"=245_1.py\n";
A245_1::test(); cout<<endl;
cout<<"=245_2.py\n";
A245_2::test(); cout<<endl;
cout<<"=245_3.py\n";
A245_3::test(); cout<<endl;
cout<<"=245_4.py\n";
A245_4::test(); cout<<endl;
cout<<"=245_5.py\n";
A245_5::test(); cout<<endl;
cout<<"=245_6.py\n";
A245_6::test(); cout<<endl;
cout<<"=245_7.py\n";
A245_7::test(); cout<<endl;
cout<<"=245_8.py\n";
A245_8::test(); cout<<endl;
cout<<"=245_9.py\n";
A245_9::test(); cout<<endl;
cout<<"=245_10.py\n";
A245_10::test(); cout<<endl;
cout<<"call 246.bat\n";
cout<<"=246_0.py\n";
A246_0::test(); cout<<endl;
cout<<"=246_1.py\n";
A246_1::test(); cout<<endl;
cout<<"=246_2.py\n";
A246_2::test(); cout<<endl;
cout<<"=246_3.py\n";
A246_3::test(); cout<<endl;
cout<<"=246_4.py\n";
A246_4::test(); cout<<endl;
cout<<"=246_5.py\n";
A246_5::test(); cout<<endl;
cout<<"=246_6.py\n";
A246_6::test(); cout<<endl;
cout<<"=246_7.py\n";
A246_7::test(); cout<<endl;
cout<<"=246_8.py\n";
A246_8::test(); cout<<endl;
cout<<"=246_9.py\n";
A246_9::test(); cout<<endl;
cout<<"=246_10.py\n";
A246_10::test(); cout<<endl;
cout<<"call 247.bat\n";
cout<<"=247_0.py\n";
A247_0::test(); cout<<endl;
cout<<"=247_1.py\n";
A247_1::test(); cout<<endl;
cout<<"=247_2.py\n";
A247_2::test(); cout<<endl;
cout<<"=247_3.py\n";
A247_3::test(); cout<<endl;
cout<<"=247_4.py\n";
A247_4::test(); cout<<endl;
cout<<"=247_5.py\n";
A247_5::test(); cout<<endl;
cout<<"=247_6.py\n";
A247_6::test(); cout<<endl;
cout<<"=247_7.py\n";
A247_7::test(); cout<<endl;
cout<<"=247_8.py\n";
A247_8::test(); cout<<endl;
cout<<"=247_9.py\n";
A247_9::test(); cout<<endl;
cout<<"=247_10.py\n";
A247_10::test(); cout<<endl;
cout<<"call 248.bat\n";
cout<<"=248_0.py\n";
A248_0::test(); cout<<endl;
cout<<"=248_1.py\n";
A248_1::test(); cout<<endl;
cout<<"=248_2.py\n";
A248_2::test(); cout<<endl;
cout<<"=248_3.py\n";
A248_3::test(); cout<<endl;
cout<<"=248_4.py\n";
A248_4::test(); cout<<endl;
cout<<"=248_5.py\n";
A248_5::test(); cout<<endl;
cout<<"=248_6.py\n";
A248_6::test(); cout<<endl;
cout<<"=248_7.py\n";
A248_7::test(); cout<<endl;
cout<<"=248_8.py\n";
A248_8::test(); cout<<endl;
cout<<"=248_9.py\n";
A248_9::test(); cout<<endl;
cout<<"=248_10.py\n";
A248_10::test(); cout<<endl;
cout<<"call 249.bat\n";
cout<<"=249_0.py\n";
A249_0::test(); cout<<endl;
cout<<"=249_1.py\n";
A249_1::test(); cout<<endl;
cout<<"=249_2.py\n";
A249_2::test(); cout<<endl;
cout<<"=249_3.py\n";
A249_3::test(); cout<<endl;
cout<<"=249_4.py\n";
A249_4::test(); cout<<endl;
cout<<"=249_5.py\n";
A249_5::test(); cout<<endl;
cout<<"=249_6.py\n";
A249_6::test(); cout<<endl;
cout<<"=249_7.py\n";
A249_7::test(); cout<<endl;
cout<<"=249_8.py\n";
A249_8::test(); cout<<endl;
cout<<"=249_9.py\n";
A249_9::test(); cout<<endl;
cout<<"=249_10.py\n";
A249_10::test(); cout<<endl;
cout<<"call 250.bat\n";
cout<<"=250_0.py\n";
A250_0::test(); cout<<endl;
cout<<"=250_1.py\n";
A250_1::test(); cout<<endl;
cout<<"=250_2.py\n";
A250_2::test(); cout<<endl;
cout<<"=250_3.py\n";
A250_3::test(); cout<<endl;
cout<<"=250_4.py\n";
A250_4::test(); cout<<endl;
cout<<"=250_5.py\n";
A250_5::test(); cout<<endl;
cout<<"=250_6.py\n";
A250_6::test(); cout<<endl;
cout<<"=250_7.py\n";
A250_7::test(); cout<<endl;
cout<<"=250_8.py\n";
A250_8::test(); cout<<endl;
cout<<"=250_9.py\n";
A250_9::test(); cout<<endl;
cout<<"=250_10.py\n";
A250_10::test(); cout<<endl;

        return 0;
        }
        
