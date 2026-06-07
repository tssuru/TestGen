try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 4, c = 7;
    
    int f(){
        int a = 0;
        b = 1;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        int b = 6;
        c = 5;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
