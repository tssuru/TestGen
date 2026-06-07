try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 6, c = 9;
    
    int g(){
        int a = 0;
        b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 8;
        c = 7;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
