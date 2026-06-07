# dedupe-check

## Варіант 1

**1.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**2.** Що буде виведено за виконання фрагменту коду?

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

**4.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

## Варіант 2

**1.** Що буде виведено за виконання фрагменту коду?

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

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) int f(int a,b);
- ( 2 ) if a<b a=0;
- ( 3 ) x-=2;
- ( 4 ) int x='a'-'c';

**3.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) =<
- ( 3 ) z13
- ( 4 ) >

**4.** Що буде виведено за виконання фрагменту коду?

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

## Варіант 3

**1.** Що буде виведено за виконання фрагменту коду?

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

**3.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) (1)
- ( 3 ) /
- ( 4 ) "1.1.1"

**4.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cin<<x;
- ( 2 ) int 3a=2;
- ( 3 ) x=int(4);
- ( 4 ) x+=y;
