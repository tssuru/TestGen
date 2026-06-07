try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 0, c = 5;
    
    int g(){
        a = 2;
        int b = 7;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 8;
        int c = 5;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
