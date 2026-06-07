try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 7, c = 4;
    
    int g(){
        int a = 6;
        b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        int b = 0;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
