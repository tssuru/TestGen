# Контрольна робота

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
        cout << ((a>6) && ((b+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        inta = 9;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 * 6 * 6 * 6);
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "c";
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
print(-2**-2+1)
```

**7.** Що буде виведено за виконання фрагменту коду?

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

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

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
    std::cout << f(-6);
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**10.** Відмітити всі правильні варіанти:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**11.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**12.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 * 6 * 6 * 6);
```

**13.** Що буде виведено за виконання фрагменту коду?

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

**14.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "v";
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
cout << 6 * 6 * 6 * 6;
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4 > 4.0 && !5 >= true && 2 < 5.0);
```

**19.** Що буде виведено за виконання фрагменту коду?

```cpp
print(-2**-2+1)
```

**20.** Що буде виведено за виконання фрагменту коду?

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

**21.** Що буде виведено за виконання фрагменту коду?

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

**22.** Відмітити всі правильні варіанти:

- ( 1 ) 8,3
- ( 2 ) <>
- ( 3 ) 8.3
- ( 4 ) FIFO

**23.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**24.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout>>3;
- ( 2 ) int x+y=z;
- ( 3 ) cout<<3.4;
- ( 4 ) int f(int n);

**25.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

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
    std::cout << f(-6, -6);
    return 0;
}
```

**26.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 2, b = 9, c = 0;

int f(){
    inta = 2;
    intb = 5;
    intc = 4;
    return a + b + c;
}

int main(){
    inta = 6;
    intb = 7;
    intc = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
```

**27.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

bool f(int n){
    std::cout<<"f";
    return n;
}

int main(){
    std::cout<<(f(-6) && f(0));
    return 0;
}
```

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 2, b = 9, c = 0;

int f(){
    inta = 2;
    intb = 5;
    intc = 4;
    return a + b + c;
}

int main(){
    inta = 6;
    intb = 7;
    intc = 1;
    cout << f() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
```
