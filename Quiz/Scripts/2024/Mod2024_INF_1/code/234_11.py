try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 2;
    
    int f(){
        a = 9;
        int b = 7;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 3;
        c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
