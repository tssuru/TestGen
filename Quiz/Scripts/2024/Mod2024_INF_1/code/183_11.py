try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 6, c = 1;
    
    int g(){
        a = 7;
        int b = 2;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 5;
        int c = 4;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
