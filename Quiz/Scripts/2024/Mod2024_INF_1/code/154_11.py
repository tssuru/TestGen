try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 1;
    
    int f(){
        a = 0;
        int b = 5;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        int b = 4;
        c = 2;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
