try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 3, c = 5;
    
    int f(){
        int a = 2;
        b = 7;
        int c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 6;
        int c = 0;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
