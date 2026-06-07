try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 9, c = 4;
    
    int f(){
        int a = 3;
        b = 7;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 0;
        int c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
