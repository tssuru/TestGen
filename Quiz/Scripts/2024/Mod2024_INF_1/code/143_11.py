try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 4, c = 6;
    
    int f(){
        int a = 8;
        b = 0;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        b = 6;
        int c = 5;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
