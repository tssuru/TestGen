try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 2;
    
    int g(){
        int a = 1;
        b = 8;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 2;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
