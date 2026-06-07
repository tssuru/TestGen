try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 1, c = 9;
    
    int g(){
        int a = 6;
        b = 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 8;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
