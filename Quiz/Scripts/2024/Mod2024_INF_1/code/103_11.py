try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 3;
    
    int f(){
        int a = 8;
        b = 7;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 3;
        c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
