try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 4, c = 9;
    
    int f(){
        int a = 2;
        b = 6;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 1;
        int c = 0;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
