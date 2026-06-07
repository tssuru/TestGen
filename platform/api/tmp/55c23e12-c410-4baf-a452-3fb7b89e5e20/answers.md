# Ключ відповідей

**Контрольна робота**
Створено: 2026-03-03T14:50:28.638Z

## Варіант 1

1. Що буде виведено за виконання фрагменту коду? if (2 > 2) cout << "c"; else cout << "v";
   Тип: відкрита відповідь

2. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; bool f(int n){ cout<<"f"; return n; } int main(){ cout<<(f(-6) && f(0)); return 0; }
   Тип: відкрита відповідь

3. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; int f(int &x, int &y){ x = 4; y+= 3; return x; } int main(){ int a = 5, b = 7; a = f(a, a); cout << a << ":" << b <<':'; { int a = 2, b = 6; cout << ((a>6) && ((b+=1) > 6)) << a << ":" << b << ":"; } { inta = 9; cout << a << ':'; } cout << a << ":" << b << endl; return 0; }
   Тип: відкрита відповідь

## Варіант 2

1. Що буде виведено за виконання фрагменту коду? if (9 >= 9) cout << "u"; else cout << "o";
   Тип: відкрита відповідь

2. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; bool f(int n){ cout<<"f"; return n>-1; } int main(){ cout<<(f(1) || f(6)); return 0; }
   Тип: відкрита відповідь

3. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; int f(int &x, int &y){ x = 1; y-= 8; return y; } int main(){ int a = 5, b = 1; b = f(b, b); cout << a << ":" << b <<':'; { int a = 3, b = 9; cout << ((b>=5) || ((a-=2) >= 5)) << a << ":" << b << ":"; } { inta = 2; cout << a << ':'; } cout << a << ":" << b << endl; return 0; }
   Тип: відкрита відповідь

## Варіант 3

1. Що буде виведено за виконання фрагменту коду? if (0 < 0) cout << "e"; else cout << "s";
   Тип: відкрита відповідь

2. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; bool f(int n){ cout<<"f"; return n>=-2; } int main(){ cout<<(f(-8) and f(-4)); return 0; }
   Тип: відкрита відповідь

3. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; int f(int &x, int &y){ x = 6; y-= 8; return y; } int main(){ int a = 4, b = 7; b = f(b, b); cout << a << ":" << b <<':'; { int a = 6, b = 2; cout << ((b<7) || ((a-=2) < 7)) << a << ":" << b << ":"; } { inta = 5; cout << a << ':'; } cout << a << ":" << b << endl; return 0; }
   Тип: відкрита відповідь

## Варіант 4

1. Що буде виведено за виконання фрагменту коду? if (14 != 14) cout << "y"; else cout << "l";
   Тип: відкрита відповідь

2. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; bool f(int n){ cout<<"f"; return n; } int main(){ cout<<(f(-1) or f(9)); return 0; }
   Тип: відкрита відповідь

3. Що буде виведено за виконання фрагменту коду? #include <iostream> using namespace std; int f(int &x, int &y){ x = 7; y+= 4; return x; } int main(){ int a = 3, b = 9; a = f(a, a); cout << a << ":" << b <<':'; { int a = 8, b = 1; cout << ((b<=3) && ((a+=1) <= 3)) << a << ":" << b << ":"; } { inta = 7; cout << a << ':'; } cout << a << ":" << b << endl; return 0; }
   Тип: відкрита відповідь
