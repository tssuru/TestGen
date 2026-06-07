try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 5;
    
    int f(){
        int a = 2;
        b = 9;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 3;
        c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
