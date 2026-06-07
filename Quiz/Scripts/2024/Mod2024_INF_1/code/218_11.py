try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 4;
    
    int f(){
        a = 9;
        int b = 7;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 2;
        int c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
