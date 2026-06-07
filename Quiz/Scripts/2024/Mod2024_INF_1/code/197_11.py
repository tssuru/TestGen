try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 8, c = 9;
    
    int f(){
        a = 7;
        int b = 2;
        c = 0;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 3;
        int c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
