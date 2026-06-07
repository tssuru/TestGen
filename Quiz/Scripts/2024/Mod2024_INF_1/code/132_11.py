try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 6;
    
    int f(){
        int a = 5;
        b = 3;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 1;
        int c = 5;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
