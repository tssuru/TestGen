# Контрольна робота

## Варіант 1

**1.** Що буде виведено за виконання фрагменту коду?

```cpp
a = 4
b = 5
c = 2

def g(b):
global c    a-=2
    b=1
    c=4
    return a+b+c

a, b, c = 9, 8, 7
try:
    print(g(b), a, b, c, sep=';')
except:
    print('Z', a, b, c, sep=';')
```

**2.** Відмітити все, що є коректним оператором С++:

- ( 1 ) cout<<(3=!5);
- ( 2 ) x=int(4);
- ( 3 ) if ('x'<>'y') a=6;
- ( 4 ) x+=y;

**3.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 8 / 8 / 8 / 8;
```

**4.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -66 до 19. Нехай змінна p позначає вузол, що зберігає значення 9. Яке значення зберігається у вузлі p.next.next.next.next.next ?

**5.** Що буде виведено за виконання фрагменту коду?

```cpp
def g(a,b):
    c=14
    if b:
        c=4
    elif b==0:
         return 5
    else: 
        c=2
    return c

print(g(9,9))
```

**6.** def f(n): print("f", end=""); return n==1 print(f(9) or f(-3))

**7.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=9,6,8
def g(a,b=7,c=6):
    print(a,b,c,end=" ")

g(a=4,5,b=2)
print(a,b,c)
```

**8.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
for e in range(8,8,3):
    if e>=7:
        continue
        print(e, end=' ')
        e=8
    if e>=7:
        break
    else:
        print(e, end=' ')
    print(e, end=' ')
```

**9.** Рядки журналу через двокрапку містять ім'я користувача (ідентифікатор), час події,тип події, код події, наприклад s="username : 2022-05-05 13:26 : ERROR : 404" у коді res = re.fullmatch('???', s) s = '' code_str = ??? чим треба замінити кожен з ???, щоб значенням code_str був код події?

**10.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
e = (0,1,2,3,4,5,6,7,8,9)
print(e[13:13:-2])
```

**11.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
m=4
while m<=10:
    m+=2
print(m)
```

**12.** a,b,c=4,5,2 def g(b): global c    a-=2 b=1 c=4 return a+b+c a,b,c=9,8,7 print(g(b),a,b,c)

**13.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int a = 4, b = 5, c = 2;

int g(int &b){
int c;    a = 2;
    b = 1;
    c = 4;
    return a + b + c;
}

int main(){
    inta = 9;
    intb = 8;
    intc = 7;
    cout << g(b) << ':';
    cout << a << ':' << b << ':' << c;
    return 0; 
}
```

**14.** def f(arg, n): n = 4 tmp = arg tmp[:-5] = 'bd' return len(tmp)>3 try: e = ['0','1','2','3','4'] n = 5 f(e, n) print(n, end=';') for el in e: print(el, end=';') except: print('Z')

**15.** print('R', end=' ') e=(0,1,2,3,4,5,6,7,8,9) print(e[13:13:-2])

**16.** Записати ВИРАЗ, значенням якого є словник, ключами якого є цілі числа від 15 до 2018 (включно), що діляться на 7, а ключам відповідають їх куби

**17.** def g(a,b): c=14 if b: c=4 elif b==0: return 5 else: c=2 return c print(g(9,9))

**18.** Значенням змінної a є цілочисловий масив типу numpy.ndarray розмірів 44. На скільки збільшиться сума елементів масиву a після виконання a.T[1] += 2 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**19.** Що буде виведено за виконання фрагменту коду?

```cpp
if (4 == 4)
    cout << "e";
else
    cout << "f";
```

**20.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
e=['0','1','2','3','4']
e.extend([1,2])
print(e)
```

**21.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 6;
    y-= 7;
    return y;
}

int main(){
    int a = 9, b = 3;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 8;
        cout << ((b>=4) || ((a-=2) >= 4)) << ':';
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

**22.** try: res = "6.0j"=="False" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**23.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

bool f(int n){
    std::cout<<"f";
    return n==1;
}

int main(){
    std::cout<<(f(9) || f(-3));
    return 0;
}
```

**24.** Що буде виведено за виконання фрагменту коду?

```cpp
for e in range(8,8+3,3):
    if e>=7:
        pass
    print(e, end=' ')
    e=8
    if e>=7:
        break
else:
    print(e, end=' ')
print(e, end=' ')
```

**25.** Що буде виведено за виконання фрагменту коду?

```cpp
m=10
while m>=4:
    m+=-2
print(m, end=' ')
```

**26.** Що буде виведено за виконання фрагменту коду?

```cpp

def f(n):
    print("f", end="");
    return n==1

print(f(9) or f(-3))
```

**27.** not6==False or not7!=6.0 or 7.0>4

**28.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
m=10
while m>=4:
    m+=-2
print(m)
```

**29.** x,y,z=4,5,2 y,z,z,y=y,x,9,z print(x,y,z)

**30.** def g(d): y=14 if d: y=4 elif d==0: return 5 else: y=2 return y print(g(9))

**31.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    m = 10
    while m>=4:
        m += -2
    print(m, end=';')
except:
    print('Z')

```

**32.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення. Оцінюється правильність та якість коду.

**33.** a = 4 b = 5 c = 2 def g(b): global c    a = 2 b = 1 c = 4 return a + b + c a = 9 b = 8 c = 7 try: print(g(b), a, b, c, sep=';') except: print('Z', a, b, c, sep=';')

**34.** Що буде виведено за виконання фрагменту коду?

```cpp
e = ('a','b','c','d','e',0,1,2)
print(e[-8])
```

**35.** try: print(4, end=';') print(5//0.0, end=';') print(2, end=';') except ValueError: print(9, end=';') except Exception: print(8, end=';') except: print('Z', end=';') else: print(7, end=';') finally: print(3)

**36.** print('R', end=' ') m=10 while m>=4: m+=-2 print(m)

**37.** def f(n): print('f', end='') return n==1 try: print(f(9) or f(-3)) except: print('ERR')

**38.** a є цілочисловим масивом типу numpy.ndarray розмірів 55. Сума елементів масиву a дорівнює 48. Чому дорівнює сума елементів масиву a після виконання a -= 48 Якщо код некоректний, то в якості відповіді зазначити ERROR.

**39.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int d){
    int y = 14;
    if (d) 
        y = 4;
    else if (d == 0)
         return 5;
    else
         y = 2;
    return y;
}

int main(){
    cout << g(9);
    return 0;
}
```

**40.** Задано тип вузла списку struct Node \; У списку зберігаються послідовні цілі числа від -66 до 19. Вказівник p встановлено на вузол, в якому зберігається число 9. Чому дорівнює значення p->next->next->next->next->next->n ?

**41.** Що буде виведено за виконання фрагменту коду?

```cpp
m=4
while m<=10:
    m+=2
print(m, end=' ')
```

**42.** Що буде виведено за виконання фрагменту коду?

```cpp
m=10
while m>=4:
    m+=-2
print(m)
```

**43.** Відмітити все, що є коректним оператором С++:

- ( 1 ) x=*2
- ( 2 ) x,y,z=z,z,y
- ( 3 ) x not is y
- ( 4 ) "\n" is not '\n'

**44.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в оберненому порядку. Мітки записувати через пробіл. Обхід дерева починається з кореня (на рис. це верхня вершина).

**45.** Що буде виведено за виконання фрагменту коду?

```cpp
a,b,c=4,5,2
def g(b):
    a-=2
    b=1
    c=4
    return a+b+c

a,b,c=9,8,7
print(g(b),a,b,c)
```

**46.** a,b,c=9,6,8 def g(a,b=7,c=6): print(a,b,c,end="") g(a=4,5,b=2) print(a,b,c)

**47.** print('R', end=' ') m=4 while m<=10: m+=2 print(m)

**48.** Що буде виведено за виконання фрагменту коду?

```cpp
8//8%8*8
```

**49.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
e=(0,1,2,3,4,5,6,7,8,9)
print(e[13:13:-2])
```

**50.** print('R', end=' ') e=['0','1','2','3','4'] e[:-5]='13' print(e)

**51.** try: res = not6==False or not7!=6.0 or 7.0>4 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**52.** Кожен рядок текстового файлу містить по два дійсних числа, розділені білими символами. Написати функцію, що для заданого текстового файлу будує новий текстовий файл, рядки якого крім зображень дйсних чисел ще містять результат обчислення на них функції f. У вихідному файлі зображення чисел мають розділятися пробілами. Якість коду також оцінюється.

**53.** Що буде виведено за виконання фрагменту коду?

```cpp
print('R', end=' ')
e = ('a','b','c','d','e',0,1,2)
print(e[-8])
```

**54.** Що буде виведено за виконання фрагменту коду?

```cpp
e=['0','1','2','3']
e.extend([1,2])
print(e)
```

**55.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int g(int a, int b){
    int c = 14;
    if (b)
        c = 4;
    else if (b == 0)
         return 5;
    else 
        c = 2;
    return c;
}

int main(){
    cout << g(9, 9);
    return 0;
}
```

**56.** 8//8%8*8

**57.** Що буде виведено за виконання фрагменту коду?

```cpp
__d = 0

class D:
    __d = 1
    
    def __init__(self):
        self.__d = 2
        __d = 3
        D.__d = 4

obj = D()
D.__d = 5
try:
    print(__d, end=' ')
    print(obj.__d, end=' ')
    print(D.__d, end=' ')
    print(obj.__d, end=' ')
    print(obj._D__d)
except:
    print('ERR')
```

**58.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) ++
- ( 2 ) fop
- ( 3 ) throw
- ( 4 ) true

**59.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

int f(int &x, int &y){
    x = 6;
    y-= 7;
    return y;
}

int main(){
    int a = 9, b = 3;
    b = f(b, b);
    cout << a << ":" << b <<':';
    {
        int a = 5, b = 8;
        cout << ((b>=4) || ((a-=2) >= 4))
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

**60.** Що буде виведено за виконання фрагменту коду?

```cpp
print(not6==False or not7!=6.0 or 7.0>4)
```

**61.** a = 4 b = 5 c = 2 def g(b): global c    a = 2 b = 1 c = 4 return a + b + c a = 9 b = 8 c = 7 try: print(g(b), a, b, c, sep=';') except: print('ERR', a, b, c, sep=';')

**62.** Записати ВИРАЗ, значенням якого є список, що складається з цілих чисел від 15 до 2018 (включно), причому спочатку за спаданням записано всі, що діляться на 7, а потім решту за спаданням.

**63.** Відмітити все, що є однією правильною лексемою:

- ( 1 ) **
- ( 2 ) /
- ( 3 ) (1)
- ( 4 ) "1.1.1"

**64.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (8 / 8 / 8 / 8);
```

**65.** Що буде виведено за виконання фрагменту коду?

```cpp
if (4 == 4)
    cout << "e";
else
    cout << "e";
```

**66.** Що буде виведено за виконання фрагменту коду?

```cpp
try:
    m = 4
    while m<=10:
        m += 2
    print(m, end=';')
except:
    print('Z')

```

**67.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>
using namespace std;

bool f(int n){
    cout<<"f";
    return n==1;
}

int main(){
    cout<<(f(9) || f(-3));
    return 0;
}
```

**68.** Що буде виведено за виконання фрагменту коду?

```cpp
d = 0
j = 1

class D:
    j = 2
    
    def __init__(self):
global j        self.j = 3
        j = 4
        D.j = 5

obj = D()
print(d, j, D.j, obj.j, sep=' ')
```

**69.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int g(int d){
    int y = 14;
    if (d) 
        y = 4;
    else if (d == 0)
         return 5;
    else
         y = 2;
    return y;
}

int main(){
    std::cout << g(9);
    return 0;
}
```

**70.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (9 / 9 / 9 / 9);
```

**71.** Що буде виведено за виконання фрагменту коду?

```cpp

x,y,z=4,5,2
y,z,z,y=y,x,9,z
print(x,y,z)
```

**72.** try: res = 8//8%8*8 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**73.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << (!6==false || !7!= 6.0 || 7.0>4);
```

**74.** Записати ВИРАЗ, значенням якого є множина, що складається з квадратних коренівцілих чисел від 15 до 2018 (включно), що діляться на 7.

**75.** print('R', end=' ') e=['0','1','2','3','4'] e.extend([1,2]) print(e)

**76.** try: res = "6.0j"=="False" if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('ERR')

**77.** try: print(4, end=';') print(5//0.0, end=';') print(2, end=';') except ValueError: print(9, end=';') except Exception: print(8, end=';') except: print('ERR', end=';') else: print(7, end=';') finally: print(3)

**78.** Що буде виведено за виконання фрагменту коду?

```cpp
not6==False or not7!=6.0 or 7.0>4
```

**79.** 4**-1.0*True

**80.** try: res = not6==False or not7!=6.0 or 7.0>4 if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**81.** Указати послідовність міток вершин дерева, зображеного на рис., що утвориться в результаті обходу дерева в оберненому порядку. Мітки записувати через пробіл. Алгоритм починає роботу з кореня (на рис. це верхня вершина).

**82.** Що буде виведено за виконання фрагменту коду?

```cpp
4**-1.0*True
```

**83.** try: res = 4**-1.0*True if isinstance(res, bool): print(f'bool;') elif isinstance(res, int): print(f'int;') elif isinstance(res, float): print(f'float;') else: print('???') except: print('Z')

**84.** Що буде виведено за виконання фрагменту коду?

```cpp
"6.0j"=="False"
```

**85.** e=['0','1','2','3','4']; e[:-5]='13'; print(e)

**86.** Що буде виведено за виконання фрагменту коду?

```cpp
print(6 != False is 7 >= 6.0)
```

**87.** Що буде виведено за виконання фрагменту коду?

```cpp
cout << 9 / 9 / 9 / 9;
```

**88.** Що буде виведено за виконання фрагменту коду?

```cpp
d = 0
j = 1

class D:
    j = 2
    
    def __init__(self):
global j        self.j = 3
        j = 4
        D.j = 5

obj = D()
try:
    print(d, end=' ')
    print(j, end=' ')
    print(D.j, end=' ')
    print(obj.j)
except:
    print('ERR')
```

**89.** Що буде виведено за виконання фрагменту коду?

```cpp
for e in range(13,13,-2):
    if e>=7:
        continue
        print(e,end=' ')
        e=8
    if e>=7:
        break
else:
    print(e, end=' ')
print(e, end=' ')
```

**90.** Змінні next та prev вузла списку позначають наступний та попередній за ним вузол відповідно. Починаючи з голови, у список записано послідовні цілі числа від -66 до 19. Нехай змінна p позначає вузол, що зберігає значення 9. Яке число зберігається у вузлі p.next.next.next.next.next ?

**91.** Що буде виведено за виконання фрагменту коду?

```cpp
a, b, c = 9, 6, 8
def g(a, b=7, c=6):
    print(a, b, c, end=" ")

g(a=4, 5, b=2)
print(a, b, c)
```

**92.** Написати програму, що запитує у користувача значення дійсних параметрів x та y, обчислює для них значення виразу та повiдомляє введенi данi та результат обчислення.

**93.** Що буде виведено за виконання фрагменту коду?

```cpp
#include <iostream>

int g(int a, int b){
    int c = 14;
    if (b)
        c = 4;
    else if (b == 0)
         return 5;
    else 
        c = 2;
    return c;
}

int main(){
    std::cout << g(9, 9);
    return 0;
}
```

**94.** В умовах попередньої задачі було виконано p->next=p->prev->next; Чому дорівнює значення p->next->next->next->next->n ?

**95.** def f(n): print('f', end=';') return n==1 try: print(f(9) or f(-3)) except: print('Z')

**96.** try: for e in range(13, 13, -2): if e>=7: continue print(e, end=';');e = 8 if e>=7: break else: print(e,end=';') print(e) except: print('Z')

**97.** print('R', end=' ') for e in range(13,13,-2): if e>=7: continue print(e, end=' ') e=8 if e>=7: break else: print(e, end=' ') print(e)

**98.** try: m = 4 while m<=10: m += 2 print(m, end=';') except: print('Z')

**99.** Що буде виведено за виконання фрагменту коду?

```cpp
print(8//8%8*8)
```

**100.** Що буде виведено за виконання фрагменту коду?

```cpp
print("6.0j" == "False")
```
