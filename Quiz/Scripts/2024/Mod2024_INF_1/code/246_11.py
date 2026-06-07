try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 5;
    
    int f(){
        a = 2;
        int b = 3;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 1;
        c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
