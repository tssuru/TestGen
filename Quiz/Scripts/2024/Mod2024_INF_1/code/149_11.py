try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 6, c = 8;
    
    int f(){
        a = 1;
        int b = 3;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 0;
        c = 7;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
