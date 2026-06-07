# Контрольна робота

## Варіант 1

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**3.** Що буде виведено за виконання фрагменту коду?

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

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 2, b = 9, c = 0;

int f(int &a){
int c;    a *= 4;
    b = 3;
    c = 5;
    return a + b + c;
}

int main(){
    inta = 5;
    intb = 4;
    intc = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 4;
    y+= 3;
    return x;
}

int main(){
    int a = 5, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 6;
        cout << ((a>6) && ((b+=1) > 6))
             << a << ":" << b << ":";
    }
    {
        inta = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**8.** Що буде виведено за виконання фрагменту коду?

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

**9.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "v";
```

**11.** Що буде виведено за виконання фрагменту коду?

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

**12.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 2, b = 9, c = 0;

int f(int &a){
int c;    a *= 4;
    b = 3;
    c = 5;
    return a + b + c;
}

int main(){
    inta = 5;
    intb = 4;
    intc = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**17.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 4;
    y+= 3;
    return x;
}

int main(){
    int a = 5, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 6;
        cout << ((a>6) && ((b+=1) > 6))
             << a << ":" << b << ":";
    }
    {
        inta = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**19.** Що буде виведено за виконання фрагменту коду?

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

**20.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "v";
```

**22.** Що буде виведено за виконання фрагменту коду?

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

**23.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**25.** Що буде виведено за виконання фрагменту коду?

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

**26.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**27.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 2, b = 9, c = 0;

int f(int &a){
int c;    a *= 4;
    b = 3;
    c = 5;
    return a + b + c;
}

int main(){
    inta = 5;
    intb = 4;
    intc = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 4;
    y+= 3;
    return x;
}

int main(){
    int a = 5, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 6;
        cout << ((a>6) && ((b+=1) > 6))
             << a << ":" << b << ":";
    }
    {
        inta = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**30.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 2

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) =<
- ( 3 ) z13
- ( 4 ) >

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7!=false || !6== 2.0 || 8<=7.0);
```

**3.** Що буде виведено за виконання фрагменту коду?

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

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 7, b = 1, c = 3;

int h(int &b){
int c;    a += 1;
    b = 2;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 8;
    intb = 6;
    intc = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 1;
    y-= 8;
    return y;
}

int main(){
    int a = 5, b = 1;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((b>=5) || ((a-=2) >= 5))
             << a << ":" << b << ":";
    }
    {
        inta = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**8.** Що буде виведено за виконання фрагменту коду?

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

**9.** Відмітити все, що є коректним оператором С++:

- ( 1 ) int f(int a,b);
- ( 2 ) if a<b a=0;
- ( 3 ) x-=2;
- ( 4 ) int x='a'-'c';

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (9 >= 9)
    cout << "u";
else
    cout << "o";
```

**11.** Що буде виведено за виконання фрагменту коду?

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

**12.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) =<
- ( 3 ) z13
- ( 4 ) >

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7!=false || !6== 2.0 || 8<=7.0);
```

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 7, b = 1, c = 3;

int h(int &b){
int c;    a += 1;
    b = 2;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 8;
    intb = 6;
    intc = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**17.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 1;
    y-= 8;
    return y;
}

int main(){
    int a = 5, b = 1;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((b>=5) || ((a-=2) >= 5))
             << a << ":" << b << ":";
    }
    {
        inta = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**19.** Що буде виведено за виконання фрагменту коду?

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

**20.** Відмітити все, що є коректним оператором С++:

- ( 1 ) int f(int a,b);
- ( 2 ) if a<b a=0;
- ( 3 ) x-=2;
- ( 4 ) int x='a'-'c';

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
if (9 >= 9)
    cout << "u";
else
    cout << "o";
```

**22.** Що буде виведено за виконання фрагменту коду?

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

**23.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) =<
- ( 3 ) z13
- ( 4 ) >

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7!=false || !6== 2.0 || 8<=7.0);
```

**25.** Що буде виведено за виконання фрагменту коду?

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

**26.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**27.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 7, b = 1, c = 3;

int h(int &b){
int c;    a += 1;
    b = 2;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 8;
    intb = 6;
    intc = 4;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 1;
    y-= 8;
    return y;
}

int main(){
    int a = 5, b = 1;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 3, b = 9;
        cout << ((b>=5) || ((a-=2) >= 5))
             << a << ":" << b << ":";
    }
    {
        inta = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**30.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 3

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) (1)
- ( 3 ) /
- ( 4 ) "1.1.1"

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6.0<false and !8.0!= 9 and 3>5);
```

**3.** Що буде виведено за виконання фрагменту коду?

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

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 < 2.0 != 8 > 7.0);
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 3, b = 1, c = 7;

int g(int &b){
int c;    a = 2;
    b -= 5;
    c = 1;
    return a + b + c;
}

int main(){
    inta = 2;
    intb = 9;
    intc = 8;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 6;
    y-= 8;
    return y;
}

int main(){
    int a = 4, b = 7;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 2;
        cout << ((b<7) || ((a-=2) < 7))
             << a << ":" << b << ":";
    }
    {
        inta = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**8.** Що буде виведено за виконання фрагменту коду?

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

**9.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin<<x;
- ( 2 ) int 3a=2;
- ( 3 ) x=int(4);
- ( 4 ) x+=y;

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (0 < 0)
    cout << "e";
else
    cout << "s";
```

**11.** Що буде виведено за виконання фрагменту коду?

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

**12.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) (1)
- ( 3 ) /
- ( 4 ) "1.1.1"

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6.0<false and !8.0!= 9 and 3>5);
```

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 < 2.0 != 8 > 7.0);
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 3, b = 1, c = 7;

int g(int &b){
int c;    a = 2;
    b -= 5;
    c = 1;
    return a + b + c;
}

int main(){
    inta = 2;
    intb = 9;
    intc = 8;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**17.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 6;
    y-= 8;
    return y;
}

int main(){
    int a = 4, b = 7;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 2;
        cout << ((b<7) || ((a-=2) < 7))
             << a << ":" << b << ":";
    }
    {
        inta = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**19.** Що буде виведено за виконання фрагменту коду?

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

**20.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin<<x;
- ( 2 ) int 3a=2;
- ( 3 ) x=int(4);
- ( 4 ) x+=y;

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
if (0 < 0)
    cout << "e";
else
    cout << "s";
```

**22.** Що буде виведено за виконання фрагменту коду?

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

**23.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) (1)
- ( 3 ) /
- ( 4 ) "1.1.1"

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6.0<false and !8.0!= 9 and 3>5);
```

**25.** Що буде виведено за виконання фрагменту коду?

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

**26.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 < 2.0 != 8 > 7.0);
```

**27.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 3, b = 1, c = 7;

int g(int &b){
int c;    a = 2;
    b -= 5;
    c = 1;
    return a + b + c;
}

int main(){
    inta = 2;
    intb = 9;
    intc = 8;
    cout << g(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 6;
    y-= 8;
    return y;
}

int main(){
    int a = 4, b = 7;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 6, b = 2;
        cout << ((b<7) || ((a-=2) < 7))
             << a << ":" << b << ":";
    }
    {
        inta = 5;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**30.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 4

**1.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) False
- ( 2 ) x*y
- ( 3 ) 'c'
- ( 4 ) +>

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9.0>=9 or !2== 3.0 or 8<=true);
```

**3.** Що буде виведено за виконання фрагменту коду?

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

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6.0 >= false == 8.0 <= 9);
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 5, b = 0, c = 4;

int g(int &a){
int c;    a += 3;
    b = 5;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 9;
    intb = 8;
    intc = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 7;
    y+= 4;
    return x;
}

int main(){
    int a = 3, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 1;
        cout << ((b<=3) && ((a+=1) <= 3))
             << a << ":" << b << ":";
    }
    {
        inta = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 / 10 / 10 / 10;
```

**8.** Що буде виведено за виконання фрагменту коду?

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

**9.** Відмітити все, що є коректним оператором С++:

- ( 1 ) bool r=('N'>'5');
- ( 2 ) "a"=6;
- ( 3 ) cout<<"\n";
- ( 4 ) 'a'=3;

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (14 != 14)
    cout << "y";
else
    cout << "l";
```

**11.** Що буде виведено за виконання фрагменту коду?

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

**12.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) False
- ( 2 ) x*y
- ( 3 ) 'c'
- ( 4 ) +>

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9.0>=9 or !2== 3.0 or 8<=true);
```

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6.0 >= false == 8.0 <= 9);
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 5, b = 0, c = 4;

int g(int &a){
int c;    a += 3;
    b = 5;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 9;
    intb = 8;
    intc = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**17.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 7;
    y+= 4;
    return x;
}

int main(){
    int a = 3, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 1;
        cout << ((b<=3) && ((a+=1) <= 3))
             << a << ":" << b << ":";
    }
    {
        inta = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 / 10 / 10 / 10;
```

**19.** Що буде виведено за виконання фрагменту коду?

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

**20.** Відмітити все, що є коректним оператором С++:

- ( 1 ) bool r=('N'>'5');
- ( 2 ) "a"=6;
- ( 3 ) cout<<"\n";
- ( 4 ) 'a'=3;

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
if (14 != 14)
    cout << "y";
else
    cout << "l";
```

**22.** Що буде виведено за виконання фрагменту коду?

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

**23.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) False
- ( 2 ) x*y
- ( 3 ) 'c'
- ( 4 ) +>

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9.0>=9 or !2== 3.0 or 8<=true);
```

**25.** Що буде виведено за виконання фрагменту коду?

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

**26.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6.0 >= false == 8.0 <= 9);
```

**27.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 5, b = 0, c = 4;

int g(int &a){
int c;    a += 3;
    b = 5;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 9;
    intb = 8;
    intc = 6;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 7;
    y+= 4;
    return x;
}

int main(){
    int a = 3, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 8, b = 1;
        cout << ((b<=3) && ((a+=1) <= 3))
             << a << ":" << b << ":";
    }
    {
        inta = 7;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 / 10 / 10 / 10;
```

**30.** Що буде виведено за виконання фрагменту коду?

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
