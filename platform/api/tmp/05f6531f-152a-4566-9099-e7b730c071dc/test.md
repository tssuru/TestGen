# Контрольна робота

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
not2<2.0 and not5.0>=5 and True<=3
```

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) (x<3 || y<7)
- ( 2 ) int n; bool n;
- ( 3 ) x<y<z
- ( 4 ) int x*y=3;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(1) and f(-6));
    return 0;
}
```

**4.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int f(int a){
    int u = 47;
    if (a < 5) 
        return 0;
    if (a >= -2)
         u = 3;
    else
         u = 8;
    return u;
}

int main(){
    std::cout << f(1);
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
    std::cout<<(f(1) and f(-6));
    return 0;
}
```

**6.** Що буде виведено за виконання фрагменту коду? try: i = 0 while i<5: i += 1 print(i, end=';') except: print('ERR')

**7.** В умовах попередньої задачі було виконано p->prev=p->next->prev; Чому дорівнює значення p->prev->prev->prev->prev->n ?

**8.** Що буде виведено за виконання фрагменту коду? try: res = -1**True+-2 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**9.** Що буде виведено за виконання фрагменту коду? try: res = 1<"4j" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**10.** Що буде виведено за виконання фрагменту коду?

```cpp

x,y,z=0,3,1
x,x,y,y=x,y,6,z
print(x,y,z)
```

**11.** Що буде виведено за виконання фрагменту коду? a = 0 b = 3 c = 8 def f(a): global c    a = 1 b += 4 c = 3 return a + b + c a = 7 b = 5 c = 6 try: print(f(a), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**12.** Що буде виведено за виконання фрагменту коду?

```cpp
def f(a,b):
    c=47
    if a<5:
        return 0
    if b>=-2:
         c=3
    else: 
        c=8
    return c

print(f(1,1))
```

**13.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -33 до 15. Нехай змінна p позначає вузол, що зберігає значення 1. Яке число зберігається у вузлі p.prev.prev.prev.prev.prev ?

**14.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -33 до 15. Нехай змінна p позначає вузол, що зберігає значення 1. Яке значення зберігається у вузлі p.prev.prev.prev.prev.prev ?

**15.** Що буде виведено за виконання фрагменту коду?

```cpp
a = ('a','b','c','d','e',0,1)
print(a[0])
```

**16.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int f(int a, int b){
    int c = 47;
    if (a < 5)
        return 0;
    if (b >= -2)
         c = 3;
    else 
        c = 8;
    return c;
}

int main(){
    std::cout << f(1, 1);
    return 0;
}
```

**17.** Що буде виведено за виконання фрагменту коду? def f(a,b): c=47 if a<5: return 0 if b>=-2: c=3 else: c=8 return c print(f(1,1))

**18.** Що буде виведено за виконання фрагменту коду?

```cpp
-1**True+-2
```

**19.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Обхід дерева починається з кореня (на рис. це верхня вершина).

**20.** Що буде виведено за виконання фрагменту коду? try: res = -1**True+-2 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a, int b){
    int c = 47;
    if (a < 5)
        return 0;
    if (b >= -2)
         c = 3;
    else 
        c = 8;
    return c;
}

int main(){
    cout << f(1, 1);
    return 0;
}
```

**22.** Що буде виведено за виконання фрагменту коду? def f(a): u=47 if a<5: return 0 if a>=-2: u=3 else: u=8 return u print(f(1))

**23.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
for a in range(0,0,-1):
    if a<3:
        continue
        print(a, end=' ')
    if a<3:
        break
    else:
        print('end', end=' ')
    print(a, end=' ')
```

**24.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Алгоритм починає роботу з кореня (на рис. це верхня вершина).

**25.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') for a in range(-5,-5,-1): if a<3: continue print(a, end=' ') if a<3: break else: print('end', end=' ') print(a)

**26.** Що буде виведено за виконання фрагменту коду? for a in range(-5,-5,-1): if a<3: continue print(a,end=' ') if a<3: break else: print('end', end=' ') print(a, end=' ')

**27.** Що буде виведено за виконання фрагменту коду? def f(arg, n): n = 0 tmp = arg tmp[-9:-9] = [4,5] return len(tmp)>3 try: a = [10,11,12,13,14] n = 3 f(a, n) print(n, end=';') for el in a: print(el, end=';') except: print('Z')

**28.** Що буде виведено за виконання фрагменту коду? try: res = 1<"4j" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**29.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 0
h = 1

class A:
    a = 2
    
    def __init__(self):
global a        self.a = 3
        a = 4
        A.a = 5

obj = A()
print(a, h, A.a, obj.a, sep=' ')
```

**30.** Що буде виведено за виконання фрагменту коду? def f(arg, n): n = 0 tmp = arg tmp[-9:-9] = [4,5] return len(tmp)>3 try: a = [10,11,12,13,14] n = 3 f(a, n) print(n, end=';') for el in a: print(el, end=';') except: print('ERR')

**31.** Що буде виведено за виконання фрагменту коду? try: i = 15 while i>0: i += -3 print(i, end=';') except: print('Z')

**32.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 0, b = 3, c = 8;

int f(int &a){
int c;    a += 1;
    b = 4;
    c = 3;
    return a + b + c;
}

int main(){
    inta = 7;
    intb = 5;
    intc = 6;
    cout << f(a) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**33.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') a=[10,11,12,13,14] a.remove('10') print(a)

**34.** Що буде виведено за виконання фрагменту коду? a = 0 b = 3 c = 8 def f(a): global c    a = 1 b = 4 c = 3 return a + b + c a = 7 b = 5 c = 6 try: print(f(a), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**35.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    i = 0
    while i<5:
        i += 1
    print(i, end=';')
except:
    print('Z')

```

**36.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=0,3,8
def f(a):
    a=1
    b=4
    c=3
    return a+b+c

a,b,c=7,5,6
print(f(a),a,b,c)
```

**37.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
i=0
while i<5:
    i+=1
print(i)
```

**38.** Що буде виведено за виконання фрагменту коду? try: res = 3/3*3*3 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**39.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=0,3,8
def f(a):
    a=1
    b+=4
    c=3
    return a+b+c

a,b,c=7,5,6
print(f(a),a,b,c)
```

**40.** Що буде виведено за виконання фрагменту коду?

```cpp
for a in range(0,0+2,-3):
    if a<3:
        continue
    print(a, end=' ')
    a=0
    if a<3:
        break
else:
    print(13, end=' ')
print(a, end=' ')
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

- ( 1 ) x<y and y>0
- ( 2 ) y=3^^2;
- ( 3 ) x<3 or y<7
- ( 4 ) print(end="1","qwe")

**44.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -33 до 15. Нехай змінна p позначає вузол, що зберігає значення 1. Яке значення зберігається у вузлі p.prev.prev.prev.prev.prev ?

**45.** Що буде виведено за виконання фрагменту коду? try: res = 3/3*3*3 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**46.** Значенням змінної a є цілочисловий масив типу numpy.ndarray розмірів 33. На скільки збільшиться сума елементів масиву a після виконання a[-3, -4] += 1 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**47.** Що буде виведено за виконання фрагменту коду? def f(n): print('f', end='') return n try: print(f(1) and f(-6)) except: print('ERR')

**48.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
a=[10,11,12,13,14]
a.remove('10')
print(a)
```

**49.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
a='0123456789'
print(a[-5:-5:-1])
```

**50.** Що буде виведено за виконання фрагменту коду? try: for a in range(-5, -5, -1): if a<3: continue print(a, end=';') if a<3: break else: print('end',end=';') print(a) except: print('ERR')

**51.** Що буде виведено за виконання фрагменту коду? try: print(0,end="") print(3/1,end="") print(8,end="") except Exception: print(7,end="") except TypeError: print(5,end="") else: print(6,end="") finally: print(2,end="")

**52.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a){
    int u = 47;
    if (a < 5) 
        return 0;
    if (a >= -2)
         u = 3;
    else
         u = 8;
    return u;
}

int main(){
    cout << f(1);
    return 0;
}
```

**53.** Що буде виведено за виконання фрагменту коду? x,y,z=0,3,1 x,x,y,y=x,y,6,z print(x,y,z)

**54.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=0,3,8
def f(a):
global c    a=1
    b+=4
    c=3
    return a+b+c

a,b,c=7,5,6
print(f(a),a,b,c)
```

**55.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') i=15 while i>0: i+=-3 print(i)

**56.** Що буде виведено за виконання фрагменту коду? a,b,c=0,3,8 def f(a): global c    a=1 b=4 c=3 return a+b+c a,b,c=7,5,6 print(f(a),a,b,c)

**57.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**58.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) %
- ( 2 ) 1_2_
- ( 3 ) **
- ( 4 ) -56

**59.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**60.** Що буде виведено за виконання фрагменту коду?

```cpp
print(3/3*3*3)
```

**61.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=6,9,7
def f(a,b,c):
    print(a,b,c,end=" ")

f(0,3)
print(a,b,c)
```

**62.** Що буде виведено за виконання фрагменту коду?

```cpp
if (0 < 0)
    cout << "a";
else
    cout << "a";
```

**63.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) &&
- ( 2 ) 923q
- ( 3 ) ||
- ( 4 ) ()

**64.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') i=0 while i<5: i+=1 print(i)

**65.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    i = 15
    while i>0:
        i += -3
    print(i, end=';')
except:
    print('Z')

```

**66.** Що буде виведено за виконання фрагменту коду? try: res = not2<2.0 and not5.0>=5 and True<=3 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**67.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (15 * 15 * 15 * 15);
```

**68.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 15 * 15 * 15 * 15;
```

**69.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 3 * 3 * 3 * 3;
```

**70.** Що буде виведено за виконання фрагменту коду?

```cpp
if (0 < 0)
    cout << "a";
else
    cout << "s";
```

**71.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 1;
    y+= 4;
    return x;
}

int main(){
    int a = 9, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((a<3) && ((b+=1) < 3))
             << a << ":" << b << ":";
    }
    {
        inta = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**72.** Вкажіть значення та тип виразу: 3/3*3*3

**73.** Що буде виведено за виконання фрагменту коду? try: print(0, end=';') print(3/1, end=';') print(8, end=';') except Exception: print(7, end=';') except ZeroDivisionError: print(5, end=';') except: print('Z', end=';') else: print(6, end=';') finally: print(2)

**74.** Що буде виведено за виконання фрагменту коду?

```cpp
1<"4"
```

**75.** Що буде виведено за виконання фрагменту коду?

```cpp
a=[10,11,12,13]
a[-9:-9]=[4,5]
print(a)
```

**76.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 0
b = 3
c = 8

def f(a):
global c    a=1
    b+=4
    c=3
    return a+b+c

a, b, c = 7, 5, 6
try:
    print(f(a), a, b, c, sep=';')
except:
    print('Z', a, b, c, sep=';')
```

**77.** Вкажіть значення та тип виразу: 1<"4"

**78.** Що буде виведено за виконання фрагменту коду?

```cpp
for a in range(-5,-5,-1):
    if a<3:
        continue
        print(a,end=' ')
    if a<3:
        break
else:
    print('end', end=' ')
print(a, end=' ')
```

**79.** Що буде виведено за виконання фрагменту коду?

```cpp
print(2 < 2.0 >= 5.0 > 5)
```

**80.** a є цілочисловим масивом типу numpy.ndarray розмірів 22. Сума елементів масиву a дорівнює 30. Чому дорівнює сума елементів масиву a після виконання a += 30 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**81.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!2<2.0 and !5.0>= 5 and true<=3);
```

**82.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 1;
    y+= 4;
    return x;
}

int main(){
    int a = 9, b = 5;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 7, b = 2;
        cout << ((a<3) && ((b+=1) < 3)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        inta = 8;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**83.** Що буде виведено за виконання фрагменту коду? try: res = not2<2.0 and not5.0>=5 and True<=3 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**84.** Задано тип вузла списку struct Node \; У списку зберігаються послідовні цілі числа від -33 до 15. Вказівник p встановлено на вузол, в якому зберігається число 1. Чому дорівнює значення p->prev->prev->prev->prev->prev->n ?

**85.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
a=[10,11,12,13,14]
a[-9:-9]=()
print(a)
```

**86.** Записати ВИРАЗ, значенням якого є список, що складається з цілих чисел від 20 до 2010 (включно), причому спочатку за зростанням записано всі, що не діляться на 2, а потім решту за зростанням.

**87.** Що буде виведено за виконання фрагменту коду? print('R', end=' ') a='0123456789' print(a[-5:-5:-1])

**88.** Що буде виведено за виконання фрагменту коду?

```cpp
i=0
while i<5:
    i+=1
print(i, end=' ')
```

**89.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (3 * 3 * 3 * 3);
```

**90.** Що буде виведено за виконання фрагменту коду?

```cpp
print(1 < "4")
```

**91.** Записати ВИРАЗ, значенням якого є множина, що складається з цілих чисел від 20 до 2010 (включно), що не діляться на 2.

**92.** Що буде виведено за виконання фрагменту коду? a,b,c=6,9,7 def f(a,b,c): print(a,b,c,end="") f(0,3) print(a,b,c)

**93.** Що буде виведено за виконання фрагменту коду?

```cpp
print(not2<2.0 and not5.0>=5 and True<=3)
```

**94.** Що буде виведено за виконання фрагменту коду?

```cpp
i=15
while i>0:
    i+=-3
print(i, end=' ')
```

**95.** Що буде виведено за виконання фрагменту коду? try: for a in range(-5, -5, -1): if a<3: continue print(a, end=';') if a<3: break else: print('end',end=';') print(a) except: print('Z')

**96.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення. Оцінюється правильність та якість коду.

**97.** Що буде виведено за виконання фрагменту коду?

```cpp
a=[10,11,12,13]
a.remove('10')
print(a)
```

**98.** Що буде виведено за виконання фрагменту коду? a=[10,11,12,13,14]; a[-9:-9]=(); print(a)

**99.** Що буде виведено за виконання фрагменту коду?

```cpp
print(-1**True+-2)
```

**100.** Що буде виведено за виконання фрагменту коду?

```cpp

def f(n):
    print("f", end="");
    return n

print(f(1) and f(-6))
```
