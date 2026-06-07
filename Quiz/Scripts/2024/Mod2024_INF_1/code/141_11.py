try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 6, c = 9;
    
    int f(){
        a = 8;
        int b = 1;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 7;
        c = 8;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
