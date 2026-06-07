try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 4;
    
    int f(){
        int a = 5;
        b = 7;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        int b = 3;
        c = 0;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
