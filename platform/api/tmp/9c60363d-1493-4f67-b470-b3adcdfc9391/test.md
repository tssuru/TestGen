# Контрольна робота №1

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

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

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**3.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 2

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**2.** Що буде виведено за виконання фрагменту коду?

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

**3.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 3

**1.** Що буде виведено за виконання фрагменту коду?

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

**2.** Що буде виведено за виконання фрагменту коду?

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

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 < 2.0 != 8 > 7.0);
```

## Варіант 4

**1.** Що буде виведено за виконання фрагменту коду?

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

**2.** Що буде виведено за виконання фрагменту коду?

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

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6.0 >= false == 8.0 <= 9);
```
