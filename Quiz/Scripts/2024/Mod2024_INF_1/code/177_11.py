try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 7;
    
    int f(){
        int a = 8;
        b = 3;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 0;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
