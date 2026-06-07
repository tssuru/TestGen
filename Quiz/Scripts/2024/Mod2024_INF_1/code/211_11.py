try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 3, c = 4;
    
    int f(){
        a = 6;
        int b = 6;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 8;
        c = 0;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
