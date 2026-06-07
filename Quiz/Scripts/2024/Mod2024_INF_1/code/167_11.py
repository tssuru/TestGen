try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 8;
    
    int f(){
        int a = 0;
        b = 4;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 9;
        int c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
