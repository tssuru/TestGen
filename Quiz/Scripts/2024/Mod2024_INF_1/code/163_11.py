try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 5, c = 4;
    
    int f(){
        a = 0;
        int b = 6;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 7;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
