try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 7, c = 4;
    
    int f(){
        a = 9;
        int b = 3;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 9;
        int c = 2;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
