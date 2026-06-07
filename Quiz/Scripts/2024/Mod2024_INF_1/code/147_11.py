try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 8, c = 5;
    
    int f(){
        a = 6;
        int b = 9;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 1;
        c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
