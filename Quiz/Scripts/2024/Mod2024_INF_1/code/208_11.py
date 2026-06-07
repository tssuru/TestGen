try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 5, c = 2;
    
    int f(){
        int a = 4;
        b = 0;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 1;
        c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
