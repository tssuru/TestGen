# Контрольна робота

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 5
b = 4
c = 0

def f(a):
global c    a=4
    b+=5
    c=3
    return a+b+c

a, b, c = 1, 6, 9
try:
    print(f(b), a, b, c, sep=';')
except:
    print('Z', a, b, c, sep=';')
```

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) 'a'=3;
- ( 2 ) int f(int a, int 4);
- ( 3 ) bool r=('N'>'5');
- ( 4 ) int f(int &n, int m);

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**4.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -19 до 39. Нехай змінна p позначає вузол, що зберігає значення -6. Яке значення зберігається у вузлі p.prev.prev.prev.prev.prev ?

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
def f(a,b):
    c=61
    if b!=-2:
        return 5
    if b==5:
         c=4
    else: 
        c=0
    return c

print(f(-6,-6))
```

**6.** def f(n): print("f", end=""); return n print(f(-6) and f(7))

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=8,9,6
def f(a,b=7,c):
    print(a,b,c,end=" ")

f(5,c=4,b=0)
print(a,b,c)
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
for f in range(-7,-7,2):
    if f>8:
        continue
        print(f, end=' ')
    if f>8:
        break
    else:
        print(f, end=' ')
    print(f, end=' ')
```

**9.** Рядки журналу через двокрапку містять ім'я користувача (ідентифікатор), час події,тип події, код події, наприклад s="username : 2022-05-05 13:26 : ERROR : 404" у коді res = re.fullmatch('???', s) s = '' code_str = ??? чим треба замінити кожен з ???, щоб значенням code_str був код події?

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
f = ('0','1','2','3','4','5','6','7','8','9')
print(f[:10:2])
```

**11.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
t=5
while t<8:
    t+=1
print(t)
```

**12.** a,b,c=5,4,0 def f(a): global c    a=4 b+=5 c=3 return a+b+c a,b,c=1,6,9 print(f(b),a,b,c)

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 5, b = 4, c = 0;

int f(int &a){
int c;    a = 4;
    b = 5;
    c = 3;
    return a + b + c;
}

int main(){
    inta = 1;
    intb = 6;
    intc = 9;
    cout << f(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**14.** def f(arg, n): n = 5 tmp = arg tmp[-4:-4] = 'ac' return len(tmp)>3 try: f = [10,11,12,13,14] n = 4 f(f, n) print(n, end=';') for el in f: print(el, end=';') except: print('Z')

**15.** print('R', end=' ') f=('0','1','2','3','4','5','6','7','8','9') print(f[:10:2])

**16.** Записати ВИРАЗ, значенням якого є словник, ключами якого є цілі числа від 13 до 2003 (включно), що не діляться на 5, а ключам відповідають їх квадрати

**17.** def f(a,b): c=61 if b!=-2: return 5 if b==5: c=4 else: c=0 return c print(f(-6,-6))

**18.** Значенням змінної a є цілочисловий масив типу numpy.ndarray розмірів 66. На скільки збільшиться сума елементів масиву a після виконання a[2] += 1 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**19.** Що буде виведено за виконання фрагменту коду?

```cpp
if (5 != 5)
    cout << "y";
else
    cout << "w";
```

**20.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
f=[10,11,12,13,14]
f.insert(-4, '12')
print(f)
```

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 4;
    y+= 6;
    return x;
}

int main(){
    int a = 7, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 8;
        cout << ((a>6) && ((b+=1) > 6)) << ':';
        cout << a << ":" << b << ':';
    }
    {
        inta = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**22.** try: res = "True"!="4.0" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**23.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

bool f(int n){
    std::cout<<"f";
    return n;
}

int main(){
    std::cout<<(f(-6) && f(7));
    return 0;
}
```

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
for f in range(-7,-7+5,2):
    if f>8:
        break
    print(f, end=' ')
    f=-7
    if f>8:
        break
else:
    print(f, end=' ')
print(f, end=' ')
```

**25.** Що буде виведено за виконання фрагменту коду?

```cpp
t=8
while t>5:
    t+=-3
print(t, end=' ')
```

**26.** Що буде виведено за виконання фрагменту коду?

```cpp

def f(n):
    print("f", end="");
    return n

print(f(-6) and f(7))
```

**27.** notTrue!=7 and not6==7.0 and 6.0<2

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
t=8
while t>5:
    t+=-3
print(t)
```

**29.** x,y,z=5,4,0 z,y,x,y=x,y,8,9 print(x,y,z)

**30.** def f(c): z=61 if c!=-2: return 5 if c==5: z=4 else: z=0 return z print(f(-6))

**31.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    t = 8
    while t>5:
        t += -3
    print(t, end=';')
except:
    print('Z')

```

**32.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення. Оцінюється правильність та якість коду.

**33.** a = 5 b = 4 c = 0 def f(a): global c    a = 4 b = 5 c = 3 return a + b + c a = 1 b = 6 c = 9 try: print(f(b), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**34.** Що буде виведено за виконання фрагменту коду?

```cpp
f = ('a','b','c','d','e',0,1,2,4)
print(f[12])
```

**35.** try: print(5, end=';') print(int('c4'), end=';') print(0, end=';') except ZeroDivisionError: print(1, end=';') except KeyboardInterrupt: print(6, end=';') except: print('Z', end=';') else: print(9, end=';') finally: print(3)

**36.** print('R', end=' ') t=8 while t>5: t+=-3 print(t)

**37.** def f(n): print('f', end='') return n try: print(f(-6) and f(7)) except: print('ERR')

**38.** a є цілочисловим масивом типу numpy.ndarray розмірів 44. Сума елементів масиву a дорівнює 45. Чому дорівнює сума елементів масиву a після виконання a += 45 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**39.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int c){
    int z = 61;
    if (c != -2) 
        return 5;
    if (c == 5)
         z = 4;
    else
         z = 0;
    return z;
}

int main(){
    cout << f(-6);
    return 0;
}
```

**40.** Задано тип вузла списку struct Node \; У списку зберігаються послідовні цілі числа від -19 до 39. Вказівник p встановлено на вузол, в якому зберігається число -6. Чому дорівнює значення p->prev->prev->prev->prev->prev->n ?

**41.** Що буде виведено за виконання фрагменту коду?

```cpp
t=5
while t<8:
    t+=1
print(t, end=' ')
```

**42.** Що буде виведено за виконання фрагменту коду?

```cpp
t=8
while t>5:
    t+=-3
print(t)
```

**43.** Відмітити все, що є коректним оператором С++:

- ( 1 ) (2+2j)//2
- ( 2 ) input()*1.2
- ( 3 ) 3.14%2
- ( 4 ) x=1%3

**44.** max size= Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Обхід дерева починається з кореня (на рис. це верхня вершина).

**45.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=5,4,0
def f(a):
    a=4
    b+=5
    c=3
    return a+b+c

a,b,c=1,6,9
print(f(b),a,b,c)
```

**46.** a,b,c=8,9,6 def f(a,b=7,c): print(a,b,c,end="") f(5,c=4,b=0) print(a,b,c)

**47.** print('R', end=' ') t=5 while t<8: t+=1 print(t)

**48.** Що буде виведено за виконання фрагменту коду?

```cpp
6/6//6*6
```

**49.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
f=('0','1','2','3','4','5','6','7','8','9')
print(f[:10:2])
```

**50.** print('R', end=' ') f=[10,11,12,13,14] f[-4:-4]='11' print(f)

**51.** try: res = notTrue!=7 and not6==7.0 and 6.0<2 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**52.** Кожен рядок текстового файлу містить по два дійсних числа, розділені білими символами. Написати функцію, що для заданого текстового файлу будує новий текстовий файл, рядки якого крім зображень дйсних чисел ще містять результат обчислення на них функції f. У вихідному файлі зображення чисел мають розділятися пробілами. Якість коду також оцінюється.

**53.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
f = ('a','b','c','d','e',0,1,2,4)
print(f[12])
```

**54.** Що буде виведено за виконання фрагменту коду?

```cpp
f=[10,11,12,13]
f.insert(-3, '12')
print(f)
```

**55.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int a, int b){
    int c = 61;
    if (b != -2)
        return 5;
    if (b == 5)
         c = 4;
    else 
        c = 0;
    return c;
}

int main(){
    cout << f(-6, -6);
    return 0;
}
```

**56.** 6/6//6*6

**57.** Що буде виведено за виконання фрагменту коду?

```cpp
_c = 0

class C:
    _c = 1
    
    def __init__(self):
        self._c = 2
        _c = 3
        C._c = 4

obj = C()
obj._c = 5
try:
    print(_c, end=' ')
    print(obj._c, end=' ')
    print(C._c, end=' ')
    print(obj._c, end=' ')
    print(obj._C__c)
except:
    print('ERR')
```

**58.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) [1]
- ( 2 ) 2int
- ( 3 ) False
- ( 4 ) *

**59.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 4;
    y+= 6;
    return x;
}

int main(){
    int a = 7, b = 9;
    a = f(a, a);
    cout << a << ":" << b <<':';
    {
        int a = 2, b = 8;
        cout << ((a>6) && ((b+=1) > 6))
             << a << ":" << b << ":";
    }
    {
        inta = 3;
        cout << a << ':';
    }
    cout << a << ":" << b << endl;
    return 0;
}
```

**60.** Що буде виведено за виконання фрагменту коду?

```cpp
print(notTrue!=7 and not6==7.0 and 6.0<2)
```

**61.** a = 5 b = 4 c = 0 def f(a): global c    a = 4 b = 5 c = 3 return a + b + c a = 1 b = 6 c = 9 try: print(f(b), a, b, c, sep=';') except: print('ERR', a, b, c, sep=';')

**62.** Записати ВИРАЗ, значенням якого є список, що складається з цілих чисел від 13 до 2003 (включно), причому спочатку за зростанням записано всі, що не діляться на 5, а потім решту за зростанням.

**63.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) x*y
- ( 2 ) 83x
- ( 3 ) +
- ( 4 ) for

**64.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 * 6 * 6 * 6);
```

**65.** Що буде виведено за виконання фрагменту коду?

```cpp
if (5 != 5)
    cout << "y";
else
    cout << "y";
```

**66.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    t = 5
    while t<8:
        t += 1
    print(t, end=';')
except:
    print('Z')

```

**67.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n;
}

int main(){
    cout<<(f(-6) && f(7));
    return 0;
}
```

**68.** Що буде виведено за виконання фрагменту коду?

```cpp
c = 0
n = 1

class C:
    c = 2
    
    def __init__(self):
global c        self.c = 3
        c = 4
        C.c = 5

obj = C()
print(c, n, C.c, obj.c, sep=' ')
```

**69.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int f(int c){
    int z = 61;
    if (c != -2) 
        return 5;
    if (c == 5)
         z = 4;
    else
         z = 0;
    return z;
}

int main(){
    std::cout << f(-6);
    return 0;
}
```

**70.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (6 * 6 * 6 * 6);
```

**71.** Що буде виведено за виконання фрагменту коду?

```cpp

x,y,z=5,4,0
z,y,x,y=x,y,8,9
print(x,y,z)
```

**72.** try: res = 6/6//6*6 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**73.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!true!=7 && !6== 7.0 && 6.0<2);
```

**74.** Записати ВИРАЗ, значенням якого є множина, що складається з квадратівцілих чисел від 13 до 2003 (включно), що не діляться на 5.

**75.** print('R', end=' ') f=[10,11,12,13,14] f.insert(-4, '12') print(f)

**76.** try: res = "True"!="4.0" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**77.** try: print(5, end=';') print(int('c4'), end=';') print(0, end=';') except ZeroDivisionError: print(1, end=';') except KeyboardInterrupt: print(6, end=';') except: print('ERR', end=';') else: print(9, end=';') finally: print(3)

**78.** Що буде виведено за виконання фрагменту коду?

```cpp
notTrue!=7 and not6==7.0 and 6.0<2
```

**79.** 1**1.0*False

**80.** try: res = notTrue!=7 and not6==7.0 and 6.0<2 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**81.** max size= Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в прямому порядку. Мітки записувати через пробіл. Алгоритм починає роботу з кореня (на рис. це верхня вершина).

**82.** Що буде виведено за виконання фрагменту коду?

```cpp
1**1.0*False
```

**83.** try: res = 1**1.0*False if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**84.** Що буде виведено за виконання фрагменту коду?

```cpp
"True"!="4.0"
```

**85.** f=[10,11,12,13,14]; f[-4:-4]='11'; print(f)

**86.** Що буде виведено за виконання фрагменту коду?

```cpp
print(True >= 7 != 6 is 7.0)
```

**87.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 6 * 6 * 6 * 6;
```

**88.** Що буде виведено за виконання фрагменту коду?

```cpp
c = 0
n = 1

class C:
    c = 2
    
    def __init__(self):
global c        self.c = 3
        c = 4
        C.c = 5

obj = C()
try:
    print(c, end=' ')
    print(n, end=' ')
    print(C.c, end=' ')
    print(obj.c)
except:
    print('ERR')
```

**89.** Що буде виведено за виконання фрагменту коду?

```cpp
for f in range(10,10,2):
    if f>8:
        continue
        print(f,end=' ')
    if f>8:
        break
else:
    print(f, end=' ')
print(f, end=' ')
```

**90.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -19 до 39. Нехай змінна p позначає вузол, що зберігає значення -6. Яке число зберігається у вузлі p.prev.prev.prev.prev.prev ?

**91.** Що буде виведено за виконання фрагменту коду?

```cpp
a, b, c = 8, 9, 6
def f(a, b=7, c):
    print(a, b, c, end=" ")

f(5, c=4, b=0)
print(a, b, c)
```

**92.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**93.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int f(int a, int b){
    int c = 61;
    if (b != -2)
        return 5;
    if (b == 5)
         c = 4;
    else 
        c = 0;
    return c;
}

int main(){
    std::cout << f(-6, -6);
    return 0;
}
```

**94.** В умовах попередньої задачі було виконано p->prev=p->prev->prev; Чому дорівнює значення p->prev->prev->prev->prev->n ?

**95.** def f(n): print('f', end=';') return n try: print(f(-6) and f(7)) except: print('Z')

**96.** try: for f in range(10, 10, 2): if f>8: continue print(f, end=';') if f>8: break else: print(f,end=';') print(f) except: print('Z')

**97.** print('R', end=' ') for f in range(10,10,2): if f>8: continue print(f, end=' ') if f>8: break else: print(f, end=' ') print(f)

**98.** try: t = 5 while t<8: t += 1 print(t, end=';') except: print('Z')

**99.** Що буде виведено за виконання фрагменту коду?

```cpp
print(6/6//6*6)
```

**100.** Що буде виведено за виконання фрагменту коду?

```cpp
print("True" != "4.0")
```
