try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 9, c = 4;
    
    int f(){
        int a = 1;
        b = 5;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 7;
        int c = 6;
        cout << f() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
