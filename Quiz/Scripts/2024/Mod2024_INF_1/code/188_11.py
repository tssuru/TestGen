try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 5, c = 0;
    
    int f(){
        int a = 7;
        b = 6;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        int b = 2;
        c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
