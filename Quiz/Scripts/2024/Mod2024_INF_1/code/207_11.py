try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 6, c = 2;
    
    int g(){
        int a = 5;
        b = 9;
        int c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 8;
        c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
