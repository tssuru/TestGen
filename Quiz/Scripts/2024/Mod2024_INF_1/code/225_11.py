try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 4, c = 9;
    
    int f(){
        a = 7;
        int b = 0;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 1;
        c = 8;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
