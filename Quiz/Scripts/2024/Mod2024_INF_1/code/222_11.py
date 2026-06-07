try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 5, c = 3;
    
    int f(){
        a = 8;
        int b = 9;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 9;
        c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
