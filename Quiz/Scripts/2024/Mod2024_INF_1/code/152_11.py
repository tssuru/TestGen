try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 0, c = 4;
    
    int f(){
        a = 3;
        int b = 9;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 5;
        int c = 3;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
