try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 6;
    
    int f(){
        int a = 9;
        b = 0;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 2;
        c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
