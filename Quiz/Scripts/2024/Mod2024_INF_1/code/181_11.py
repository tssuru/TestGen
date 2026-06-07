try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 0;
    
    int f(){
        int a = 6;
        b = 9;
        int c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 3;
        c = 2;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
