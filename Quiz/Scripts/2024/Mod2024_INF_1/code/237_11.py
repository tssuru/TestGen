try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 1, c = 0;
    
    int f(){
        int a = 7;
        b = 5;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 7;
        int c = 4;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
