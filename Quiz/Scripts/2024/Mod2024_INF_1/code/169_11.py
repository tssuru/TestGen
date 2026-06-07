try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 8, c = 4;
    
    int f(){
        a = 0;
        int b = 9;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 5;
        int c = 7;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
