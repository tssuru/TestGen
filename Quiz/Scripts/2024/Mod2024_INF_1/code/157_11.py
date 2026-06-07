try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 6, c = 5;
    
    int f(){
        a = 2;
        int b = 7;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 2;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
