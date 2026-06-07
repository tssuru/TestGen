try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 4, c = 1;
    
    int f(){
        int a = 9;
        b = 6;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 0;
        c = 2;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
