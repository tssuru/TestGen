try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 0, c = 4;
    
    int g(){
        int a = 8;
        b = 3;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 1;
        c = 5;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
