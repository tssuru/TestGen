try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 2, c = 7;
    
    int f(){
        a = 8;
        int b = 0;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 5;
        c = 1;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
