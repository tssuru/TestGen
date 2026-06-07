try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 7, c = 1;
    
    int f(){
        int a = 4;
        b = 9;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 8;
        c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
