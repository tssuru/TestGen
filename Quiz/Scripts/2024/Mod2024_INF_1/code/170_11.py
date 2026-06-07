try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 0;
    
    int g(){
        a = 4;
        int b = 3;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 2;
        c = 1;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
