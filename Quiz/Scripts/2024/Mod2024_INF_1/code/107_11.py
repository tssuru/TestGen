try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 9, c = 3;
    
    int f(){
        int a = 6;
        b = 2;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        b = 6;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
