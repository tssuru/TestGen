try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 5, c = 6;
    
    int f(){
        int a = 4;
        b = 2;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 7;
        c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
