# Контрольна робота

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
not9==4 and notTrue>9.0 and 7!=4.0
```

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) return x<=2;
- ( 2 ) cout<<(3=!5);
- ( 3 ) int f(int a, int 4);
- ( 4 ) int f(int &n, int m);

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(9) and f(4));
    return 0;
}
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int h(int a){
    int y = 45;
    if (a == 2) 
        return 7;
    if (a > 4)
         y = 8;
    else
         return 5;
    return y;
}

int main(){
    std::cout << h(9);
    return 0;
}
```

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

bool f(int n){
    std::cout<<"f";
    return n;
}

int main(){
    std::cout<<(f(9) and f(4));
    return 0;
}
```

**6.** Що буде виведено за виконання фрагменту коду? try: m = 7 while m<12: m += 1 print(m, end=';') except: print('ERR')

**7.** В умовах попередньої задачі було виконано p->prev=p->next->next; Чому дорівнює значення p->prev->prev->prev->prev->n ?

**8.** Що буде виведено за виконання фрагменту коду? try: res = 9**0.5*True if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**9.** Що буде виведено за виконання фрагменту коду? try: res = "8.0"==True if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**10.** Що буде виведено за виконання фрагменту коду?

```cpp

x,y,z=4,2,5
y,z,z,y=6,z,y,x
print(x,y,z)
```

**11.** Що буде виведено за виконання фрагменту коду? a = 7 b = 8 c = 5 def h(a): global c    a = 3 b *= 5 c = 4 return a + b + c a = 9 b = 0 c = 3 try: print(h(b), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**12.** Що буде виведено за виконання фрагменту коду?

```cpp
def h(a,b):
    c=45
    if b==2:
        return 7
    if a>4:
         c=8
    else: 
        return 5
    return c

print(h(9,9))
```

**13.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -35 до 50. Нехай змінна p позначає вузол, що зберігає значення 9. Яке число зберігається у вузлі p.prev.prev.prev.prev.prev ?

**14.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -35 до 50. Нехай змінна p позначає вузол, що зберігає значення 9. Яке значення зберігається у вузлі p.prev.prev.prev.prev.prev ?

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
h = ('a','b','c','d','e',0,1,2,3)
print(h[5])
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int h(int a, int b){
    int c = 45;
    if (b == 2)
        return 7;
    if (a > 4)
         c = 8;
    else 
        return 5;
    return c;
}

int main(){
    std::cout << h(9, 9);
    return 0;
}
```

**17.** Що буде виведено за виконання фрагменту коду? def h(a,b): c=45 if b==2: return 7 if a>4: c=8 else: return 5 return c print(h(9,9))

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
9**0.5*True
```

**19.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Обхід дерева починається з кореня (на рис. це верхня вершина).

**20.** Що буде виведено за виконання фрагменту коду? try: res = 9**0.5*True if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int a, int b){
    int c = 45;
    if (b == 2)
        return 7;
    if (a > 4)
         c = 8;
    else 
        return 5;
    return c;
}

int main(){
    cout << h(9, 9);
    return 0;
}
```

**22.** Що буде виведено за виконання фрагменту коду? def h(a): y=45 if a==2: return 7 if a>4: y=8 else: return 5 return y print(h(9))

**23.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
for e in range(8,8,-1):
    if e<7:
        break
        print(e, end=' ')
    if e<7:
        break
    else:
        print(e, end=' ')
    print(e, end=' ')
```

**24.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Алгоритм починає роботу з кореня (на рис. це верхня вершина).

**25.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') for e in range(13,13,-3): if e<7: break print(e, end=' ') if e<7: break else: print(e, end=' ') print(e)

**26.** Що буде виведено за виконання фрагменту коду? for e in range(13,13,-3): if e<7: break print(e,end=' ') if e<7: break else: print(e, end=' ') print(e, end=' ')

**27.** Що буде виведено за виконання фрагменту коду? def f(arg, n): n = 7 tmp = arg del tmp[-2:] return len(tmp)>3 try: h = [10,11,12,13,14] n = 8 f(h, n) print(n, end=';') for el in h: print(el, end=';') except: print('Z')

**28.** Що буде виведено за виконання фрагменту коду? try: res = "8.0"==True if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 0
k = 1

class A:
    a = 2
    
    def __init__(self):
global a        self.a = 3
        a = 4
        A.a = 5

obj = A()
print(a, k, A.a, obj.a, sep=' ')
```

**30.** Що буде виведено за виконання фрагменту коду? def f(arg, n): n = 7 tmp = arg del tmp[-2:] return len(tmp)>3 try: h = [10,11,12,13,14] n = 8 f(h, n) print(n, end=';') for el in h: print(el, end=';') except: print('ERR')

**31.** Що буде виведено за виконання фрагменту коду? try: m = 12 while m>7: m += -3 print(m, end=';') except: print('Z')

**32.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 7, b = 8, c = 5;

int h(int &a){
int c;    a = 3;
    b *= 5;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 9;
    intb = 0;
    intc = 3;
    cout << h(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**33.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') h=[10,11,12,13,14] h.extend([4,5]) print(h)

**34.** Що буде виведено за виконання фрагменту коду? a = 7 b = 8 c = 5 def h(a): global c    a = 3 b = 5 c = 4 return a + b + c a = 9 b = 0 c = 3 try: print(h(b), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**35.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    m = 7
    while m<12:
        m += 1
    print(m, end=';')
except:
    print('Z')

```

**36.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=7,8,5
def h(a):
    a=3
    b=5
    c=4
    return a+b+c

a,b,c=9,0,3
print(h(b),a,b,c)
```

**37.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
m=7
while m<12:
    m+=1
print(m)
```

**38.** Що буде виведено за виконання фрагменту коду? try: res = 8/8*8*8 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**39.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=7,8,5
def h(a):
    a=3
    b*=5
    c=4
    return a+b+c

a,b,c=9,0,3
print(h(b),a,b,c)
```

**40.** Що буде виведено за виконання фрагменту коду?

```cpp
for e in range(8,8+4,-3):
    if e<7:
        continue
    print(e, end=' ')
    e=8
    if e<7:
        break
else:
    print(e, end=' ')
print(e, end=' ')
```

**41.** Кожен рядок текстового файлу містить по два дійсних числа, розділені білими символами. Написати функцію, що для заданого текстового файлу будує новий текстовий файл, рядки якого крім зображень дйсних чисел ще містять результат обчислення на них функції f. У вихідному файлі зображення чисел мають розділятися пробілами. Якість коду також оцінюється.

**42.** Що буде виведено за виконання фрагменту коду?

```cpp
_a = 0

class A:
    _a = 1
    
    def __init__(self):
        self._a = 2
        _a = 3
        A._a = 4

obj = A()
obj._a = 5
try:
    print(_a, end=' ')
    print(obj._a, end=' ')
    print(A._a, end=' ')
    print(obj._a, end=' ')
    print(obj._A__a)
except:
    print('ERR')
```

**43.** Відмітити всі коректні оператори Python:

- ( 1 ) return 'a'<'c'
- ( 2 ) return +
- ( 3 ) input()*1.2
- ( 4 ) x=1%3

**44.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -35 до 50. Нехай змінна p позначає вузол, що зберігає значення 9. Яке значення зберігається у вузлі p.prev.prev.prev.prev.prev ?

**45.** Що буде виведено за виконання фрагменту коду? try: res = 8/8*8*8 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**46.** Значенням змінної a є цілочисловий масив типу numpy.ndarray розмірів 55. На скільки збільшиться сума елементів масиву a після виконання a[1] += 3 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**47.** Що буде виведено за виконання фрагменту коду? def f(n): print('f', end='') return n try: print(f(9) and f(4)) except: print('ERR')

**48.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
h=[10,11,12,13,14]
h.extend([4,5])
print(h)
```

**49.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
h=[0,1,2,3,4,5,6,7,8,9]
print(h[13::-3])
```

**50.** Що буде виведено за виконання фрагменту коду? try: for e in range(13, 13, -3): if e<7: break print(e, end=';') if e<7: break else: print(e,end=';') print(e) except: print('ERR')

**51.** Що буде виведено за виконання фрагменту коду? try: print(7,end="") print(8j==7j,end="") print(5,end="") except ZeroDivisionError: print(9,end="") except ValueError: print(0,end="") else: print(3,end="") finally: print(4,end="")

**52.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int h(int a){
    int y = 45;
    if (a == 2) 
        return 7;
    if (a > 4)
         y = 8;
    else
         return 5;
    return y;
}

int main(){
    cout << h(9);
    return 0;
}
```

**53.** Що буде виведено за виконання фрагменту коду? x,y,z=4,2,5 y,z,z,y=6,z,y,x print(x,y,z)

**54.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=7,8,5
def h(a):
global c    a=3
    b*=5
    c=4
    return a+b+c

a,b,c=9,0,3
print(h(b),a,b,c)
```

**55.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') m=12 while m>7: m+=-3 print(m)

**56.** Що буде виведено за виконання фрагменту коду? a,b,c=7,8,5 def h(a): global c    a=3 b=5 c=4 return a+b+c a,b,c=9,0,3 print(h(b),a,b,c)

**57.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**58.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) fop
- ( 2 ) 0123
- ( 3 ) 2int
- ( 4 ) """a"a"""

**59.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**60.** Що буде виведено за виконання фрагменту коду?

```cpp
print(8/8*8*8)
```

**61.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=6,8,9
def h(a,b,c):
    print(a,b,c,end=" ")

h(c=4,b=2,a=5)
print(a,b,c)
```

**62.** Що буде виведено за виконання фрагменту коду?

```cpp
if (7 == 7)
    cout << "h";
else
    cout << "h";
```

**63.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) a2f
- ( 2 ) a1.3
- ( 3 ) 83x
- ( 4 ) for

**64.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') m=7 while m<12: m+=1 print(m)

**65.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    m = 12
    while m>7:
        m += -3
    print(m, end=';')
except:
    print('Z')

```

**66.** Що буде виведено за виконання фрагменту коду? try: res = not9==4 and notTrue>9.0 and 7!=4.0 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**67.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (10 % 10 % 10 % 10);
```

**68.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 10 % 10 % 10 % 10;
```

**69.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 12 % 12 % 12 % 12;
```

**70.** Що буде виведено за виконання фрагменту коду?

```cpp
if (7 == 7)
    cout << "h";
else
    cout << "w";
```

**71.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 8;
    y+= 9;
    return x;
}

int main(){
    int a = 4, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 3;
        cout << ((a<5) && ((b+=1) < 5))
             << a << ":" << b << ":";
    }
    {
        inta = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**72.** Вкажіть значення та тип виразу: 8/8*8*8

**73.** Що буде виведено за виконання фрагменту коду? try: print(7, end=';') print(8j==7j, end=';') print(5, end=';') except TypeError: print(9, end=';') except KeyboardInterrupt: print(0, end=';') except: print('Z', end=';') else: print(3, end=';') finally: print(4)

**74.** Що буде виведено за виконання фрагменту коду?

```cpp
"8.0"==True
```

**75.** Що буде виведено за виконання фрагменту коду?

```cpp
h=[10,11,12,13]
del h[-2:]
print(h)
```

**76.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 7
b = 8
c = 5

def h(a):
global c    a=3
    b*=5
    c=4
    return a+b+c

a, b, c = 9, 0, 3
try:
    print(h(b), a, b, c, sep=';')
except:
    print('Z', a, b, c, sep=';')
```

**77.** Вкажіть значення та тип виразу: "8.0"==True

**78.** Що буде виведено за виконання фрагменту коду?

```cpp
for e in range(13,13,-3):
    if e<7:
        break
        print(e,end=' ')
    if e<7:
        break
else:
    print(e, end=' ')
print(e, end=' ')
```

**79.** Що буде виведено за виконання фрагменту коду?

```cpp
print(9 != 4 == True >= 9.0)
```

**80.** a є цілочисловим масивом типу numpy.ndarray розмірів 22. Сума елементів масиву a дорівнює 48. Чому дорівнює сума елементів масиву a після виконання a += 48 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**81.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!9==4 and !true> 9.0 and 7!=4.0);
```

**82.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 8;
    y+= 9;
    return x;
}

int main(){
    int a = 4, b = 7;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 3;
        cout << ((a<5) && ((b+=1) < 5)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        inta = 1;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**83.** Що буде виведено за виконання фрагменту коду? try: res = not9==4 and notTrue>9.0 and 7!=4.0 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**84.** Задано тип вузла списку struct Node \; У списку зберігаються послідовні цілі числа від -35 до 50. Вказівник p встановлено на вузол, в якому зберігається число 9. Чому дорівнює значення p->prev->prev->prev->prev->prev->n ?

**85.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
h=[10,11,12,13,14]
del h[-2:]
print(h)
```

**86.** Записати ВИРАЗ, значенням якого є список, що складається з цілих чисел від 17 до 2018 (включно), причому спочатку за зростанням записано всі, що не діляться на 2, а потім решту за зростанням.

**87.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') h=[0,1,2,3,4,5,6,7,8,9] print(h[13::-3])

**88.** Що буде виведено за виконання фрагменту коду?

```cpp
m=7
while m<12:
    m+=1
print(m, end=' ')
```

**89.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (12 % 12 % 12 % 12);
```

**90.** Що буде виведено за виконання фрагменту коду?

```cpp
print("8.0" == True)
```

**91.** Записати ВИРАЗ, значенням якого є множина, що складається з цілих чисел від 17 до 2018 (включно), що не діляться на 2.

**92.** Що буде виведено за виконання фрагменту коду? a,b,c=6,8,9 def h(a,b,c): print(a,b,c,end="") h(c=4,b=2,a=5) print(a,b,c)

**93.** Що буде виведено за виконання фрагменту коду?

```cpp
print(not9==4 and notTrue>9.0 and 7!=4.0)
```

**94.** Що буде виведено за виконання фрагменту коду?

```cpp
m=12
while m>7:
    m+=-3
print(m, end=' ')
```

**95.** Що буде виведено за виконання фрагменту коду? try: for e in range(13, 13, -3): if e<7: break print(e, end=';') if e<7: break else: print(e,end=';') print(e) except: print('Z')

**96.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення. Оцінюється правильність та якість коду.

**97.** Що буде виведено за виконання фрагменту коду?

```cpp
h=[10,11,12,13]
h.extend([4,5])
print(h)
```

**98.** Що буде виведено за виконання фрагменту коду? h=[10,11,12,13,14]; del h[-2:]; print(h)

**99.** Що буде виведено за виконання фрагменту коду?

```cpp
print(9**0.5*True)
```

**100.** Що буде виведено за виконання фрагменту коду?

```cpp

def f(n):
    print("f", end="");
    return n

print(f(9) and f(4))
```
