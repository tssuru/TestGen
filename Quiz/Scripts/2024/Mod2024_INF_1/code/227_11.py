try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 0, c = 8;
    
    int f(){
        a = 5;
        int b = 2;
        c = 0;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 8;
        int c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
