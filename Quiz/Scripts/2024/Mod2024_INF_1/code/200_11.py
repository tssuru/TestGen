try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 9, c = 4;
    
    int f(){
        a = 7;
        int b = 3;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 5;
        int c = 8;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
