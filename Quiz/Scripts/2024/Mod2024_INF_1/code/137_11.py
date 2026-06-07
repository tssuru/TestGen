try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 3, c = 0;
    
    int f(){
        int a = 6;
        b = 2;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 4;
        int c = 8;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
