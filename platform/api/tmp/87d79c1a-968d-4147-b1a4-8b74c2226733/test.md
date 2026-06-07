# pdf-open-stable

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**4.** Що буде виведено за виконання фрагменту коду?

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

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4>4.0 && !5>= true && 2<5.0);
```

**6.** Що буде виведено за виконання фрагменту коду?

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
cout << (6 * 6 * 6 * 6);
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "v";
```

**10.** Що буде виведено за виконання фрагменту коду?

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

**11.** Що буде виведено за виконання фрагменту коду?

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

**12.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (4 > 4.0 >= 5 < true);
```

**13.** Що буде виведено за виконання фрагменту коду?

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

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!4 > 4.0 && !5 >= true && 2 < 5.0);
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
if (2 > 2)
    cout << "c";
else
    cout << "c";
```

**17.** Що буде виведено за виконання фрагменту коду?

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

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
print(-2**-2+1)
```

**19.** Що буде виведено за виконання фрагменту коду?

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

**20.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 * 6 * 6 * 6);
```

## Варіант 2

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 14 % 14 % 14 % 14;
```

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
if (9 >= 9)
    cout << "u";
else
    cout << "o";
```

**3.** Що буде виведено за виконання фрагменту коду?

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

**4.** Що буде виведено за виконання фрагменту коду?

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

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
print(2**1.0-2)
```

**6.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (5 % 5 % 5 % 5);
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 3, b = 8, c = 6;

int h(){
    inta = 3;
    intb = 4;
    intc = 3;
    return a + b + c;
}

int main(){
    inta = 1;
    intb = 7;
    intc = 2;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
```

**9.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
if (9 >= 9)
    cout << "v";
else
    cout << "v";
```

**11.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

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
    std::cout << h(0, 0);
    return 0;
}
```

**12.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (2 != 5.0 == 7 <= false);
```

**13.** Що буде виведено за виконання фрагменту коду?

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

**14.** Що буде виведено за виконання фрагменту коду?

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

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

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
    std::cout << h(0);
    return 0;
}
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (14 % 14 % 14 % 14);
```

**17.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 3, b = 8, c = 6;

int h(){
    inta = 3;
    intb = 4;
    intc = 3;
    return a + b + c;
}

int main(){
    inta = 1;
    intb = 7;
    intc = 2;
    cout << h() << ':';
    cout << a << ':' << b << ':' << c;
    return 0;
}
```

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7!=false || !6== 2.0 || 8<=7.0);
```

**19.** Що буде виведено за виконання фрагменту коду?

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
        cout << ((b>=5) || ((a-=2) >= 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        inta = 2;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**20.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!7 != false || !6 == 2.0 || 8 <= 7.0);
```
