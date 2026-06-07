try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 7;
    
    int f(){
        a = 5;
        int b = 2;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 4;
        int c = 8;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
