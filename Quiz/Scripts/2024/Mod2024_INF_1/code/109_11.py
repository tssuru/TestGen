try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 4, c = 9;
    
    int f(){
        a = 5;
        int b = 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        int b = 2;
        c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
