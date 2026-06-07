# Контрольна робота

## Варіант 1

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(-6) && f(0));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int c){
    int w = 72;
    if (c > -2) 
        return 2;
    if (c >= 4)
         w = 9;
    else
         w = 0;
    return w;
}

int main(){
    cout << f(-6);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a, int b){
    int c = 72;
    if (a > -2)
        return 2;
    if (b >= 4)
         c = 9;
    else 
        c = 0;
    return c;
}

int main(){
    cout << f(-6, -6);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "v";
```

## Варіант 2

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) =<
- ( 3 ) z13
- ( 4 ) >

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) int f(int a,b);
- ( 2 ) if a<b a=0;
- ( 3 ) x-=2;
- ( 4 ) int x='a'-'c';

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 14 % 14 % 14 % 14;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7!=false || !6== 2.0 || 8<=7.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n>-1;
}

int main(){
    cout<<(f(1) || f(6));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int d){
    int x = 31;
    if (d < 5) 
        return 5;
    else if (d != 1)
         x = 4;
    else
         return 6;
    return x;
}

int main(){
    cout << h(0);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int a, int b){
    int c = 31;
    if (a < 5)
        return 5;
    else if (b != 1)
         c = 4;
    else 
        return 6;
    return c;
}

int main(){
    cout << h(0, 0);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (9 >= 9)
    cout << "u";
else
    cout << "o";
```

## Варіант 3

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) (1)
- ( 3 ) /
- ( 4 ) "1.1.1"

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin<<x;
- ( 2 ) int 3a=2;
- ( 3 ) x=int(4);
- ( 4 ) x+=y;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 15 / 15 / 15 / 15;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6.0<false and !8.0!= 9 and 3>5);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n>=-2;
}

int main(){
    cout<<(f(-8) and f(-4));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 < 2.0 != 8 > 7.0);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a){
    int u = 37;
    if (a) 
        u = 7;
    else if (a == -4)
         return 1;
    else
         return 3;
    return u;
}

int main(){
    cout << g(1);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a, int b){
    int c = 37;
    if (b)
        c = 7;
    else if (a == -4)
         return 1;
    else 
        return 3;
    return c;
}

int main(){
    cout << g(1, 1);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (0 < 0)
    cout << "e";
else
    cout << "s";
```

## Варіант 4

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) False
- ( 2 ) x*y
- ( 3 ) 'c'
- ( 4 ) +>

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) bool r=('N'>'5');
- ( 2 ) "a"=6;
- ( 3 ) cout<<"\n";
- ( 4 ) 'a'=3;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 / 10 / 10 / 10;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 9 / 9 / 9 / 9;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9.0>=9 or !2== 3.0 or 8<=true);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(-1) or f(9));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6.0 >= false == 8.0 <= 9);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int b){
    int z = 95;
    if (b) 
        z = 8;
    if (b <= 0)
         return 6;
    else
         z = 4;
    return z;
}

int main(){
    cout << g(6);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a, int b){
    int c = 95;
    if (a)
        c = 8;
    if (b <= 0)
         return 6;
    else 
        c = 4;
    return c;
}

int main(){
    cout << g(6, 6);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (14 != 14)
    cout << "y";
else
    cout << "l";
```

## Варіант 5

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) while
- ( 2 ) x^2
- ( 3 ) Switch
- ( 4 ) x-y

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin>>x;
- ( 2 ) double n.m;
- ( 3 ) cin>>y;
- ( 4 ) x=2'*'7;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 4 * 4 * 4 * 4;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 4 * 4 * 4 * 4;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!3<=5.0 && !7!= 4 && false>=9.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n<0;
}

int main(){
    cout<<(f(3) && f(7));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (3 <= 5 != 9.0 >= 9);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int c){
    int y = 14;
    if (c < 3) 
        return 3;
    else if (c != -5)
         y = 1;
    else
         y = 7;
    return y;
}

int main(){
    cout << f(-8);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a, int b){
    int c = 14;
    if (a < 3)
        return 3;
    else if (b != -5)
         c = 1;
    else 
        c = 7;
    return c;
}

int main(){
    cout << f(-8, -8);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (4 == 4)
    cout << "d";
else
    cout << "i";
```

## Варіант 6

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 3a
- ( 2 ) "1e3"
- ( 3 ) !!=
- ( 4 ) "1,3"

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>x;
- ( 2 ) int x='a'*'c';
- ( 3 ) cout<<(3<>5);
- ( 4 ) {double n3;}

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 9 % 9 % 9 % 9;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 % 8 % 8 % 8;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6==2.0 || !3< 9 || true>8.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(-5) || f(8));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 == 3.0 < 8 > true);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int d){
    int v = 60;
    if (d > 2) 
        return 2;
    if (d >= -3)
         v = 9;
    else
         return 8;
    return v;
}

int main(){
    cout << h(-4);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int a, int b){
    int c = 60;
    if (b > 2)
        return 2;
    if (a >= -3)
         c = 9;
    else 
        return 8;
    return c;
}

int main(){
    cout << h(-4, -4);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (18 <= 18)
    cout << "q";
else
    cout << "m";
```

## Варіант 7

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 83x
- ( 2 ) a++
- ( 3 ) for
- ( 4 ) !=

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) double x.0;
- ( 2 ) int f(int a, int 4);
- ( 3 ) int f(int &n, int m);
- ( 4 ) int z=3.1415;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 15 / 15 / 15 / 15;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 12 / 12 / 12 / 12;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!false>=3.0 or !7== 4 or 7.0<2);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n!=2;
}

int main(){
    cout<<(f(4) or f(-2));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (3 >= 5.0 == 7 < 4);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int b){
    int u = 50;
    if (b) 
        return 5;
    else if (b == -1)
         u = 0;
    else
         u = 4;
    return u;
}

int main(){
    cout << g(-1);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a, int b){
    int c = 50;
    if (a)
        return 5;
    else if (b == -1)
         c = 0;
    else 
        c = 4;
    return c;
}

int main(){
    cout << g(-1, -1);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (7 < 7)
    cout << "w";
else
    cout << "r";
```

## Варіант 8

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 0,5
- ( 2 ) 2*6
- ( 3 ) LIFO
- ( 4 ) >=

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) int n,n;
- ( 2 ) if ('x'<>'y') a=6;
- ( 3 ) bool f(int a);
- ( 4 ) int f(int &a);

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 3 * 3 * 3 * 3;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 3 * 3 * 3 * 3;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!true<=4.0 and !5> 6 and 6.0!=8);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(2) and f(-3));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (false <= 9.0 > 6 != 2.0);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a){
    int z = 76;
    if (a <= -1) 
        return 9;
    if (a <= 0)
         z = 8;
    else
         return 6;
    return z;
}

int main(){
    cout << f(9);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a, int b){
    int c = 76;
    if (b <= -1)
        return 9;
    if (b <= 0)
         c = 8;
    else 
        return 6;
    return c;
}

int main(){
    cout << f(9, 9);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (11 != 11)
    cout << "x";
else
    cout << "g";
```

## Варіант 9

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) <+
- ( 2 ) 'qwerty'
- ( 3 ) {
- ( 4 ) vsop

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin<<3;
- ( 2 ) y=/x;
- ( 3 ) cout<<'\n';
- ( 4 ) cout<<endl;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 12 % 12 % 12 % 12;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 % 10 % 10 % 10;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7<3 || !2>= 3.0 || true>9.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(-7) || f(5));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (3 < 9 >= true > 8.0);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int d){
    int w = 70;
    if (d != 3) 
        return 5;
    if (d >= -3)
         w = 1;
    else
         w = 7;
    return w;
}

int main(){
    cout << h(3);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int a, int b){
    int c = 70;
    if (a != 3)
        return 5;
    if (a >= -3)
         c = 1;
    else 
        c = 7;
    return c;
}

int main(){
    cout << h(3, 3);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (3 > 3)
    cout << "k";
else
    cout << "t";
```

## Варіант 10

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) =>
- ( 2 ) x+23
- ( 3 ) *
- ( 4 ) For

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) y=3^^2;
- ( 2 ) cin>>x+3;
- ( 3 ) int x='a'+'c';
- ( 4 ) j=i;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 / 5 / 5 / 5;
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9==false && !7.0!= 5 && 4.0<=4);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n==-3;
}

int main(){
    cout<<(f(-9) && f(6));
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (false == 3.0 != 7 <= 4);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int c){
    int x = 91;
    if (c) 
        return 2;
    else if (c == 1)
         x = 3;
    else
         return 0;
    return x;
}

int main(){
    cout << g(7);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a, int b){
    int c = 91;
    if (b)
        return 2;
    else if (b == 1)
         c = 3;
    else 
        return 0;
    return c;
}

int main(){
    cout << g(7, 7);
    return 0;
}
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (8 >= 8)
    cout << "p";
else
    cout << "b";
```
