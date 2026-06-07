# Тест open

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

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

**2.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

## Варіант 2

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 5 % 5 % 5 % 5;
```

**2.** Що буде виведено за виконання фрагменту коду?

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
