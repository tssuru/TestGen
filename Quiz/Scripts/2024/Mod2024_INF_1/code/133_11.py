try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 2, c = 8;
    
    int f(){
        a = 0;
        int b = 4;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        b = 7;
        int c = 5;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
