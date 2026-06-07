try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 0, c = 9;
    
    int f(){
        int a = 7;
        b = 3;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 1;
        int c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
