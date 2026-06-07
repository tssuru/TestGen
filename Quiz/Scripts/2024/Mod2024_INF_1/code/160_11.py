try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 0, c = 4;
    
    int f(){
        a = 6;
        int b = 8;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 9;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
