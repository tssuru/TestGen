try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 0, c = 2;
    
    int f(){
        int a = 3;
        b = 6;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 0;
        int c = 5;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
