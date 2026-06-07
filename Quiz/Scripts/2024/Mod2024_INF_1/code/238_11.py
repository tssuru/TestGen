try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 0;
    
    int f(){
        a = 8;
        int b = 6;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 5;
        c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
