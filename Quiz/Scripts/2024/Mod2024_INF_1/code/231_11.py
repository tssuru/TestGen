try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 3, c = 7;
    
    int f(){
        int a = 7;
        b = 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 9;
        c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
