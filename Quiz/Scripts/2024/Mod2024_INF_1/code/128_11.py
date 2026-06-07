try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 7, c = 5;
    
    int f(){
        a = 2;
        int b = 3;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 5;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
