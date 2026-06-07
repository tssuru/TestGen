try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 5, c = 4;
    
    int g(){
        int a = 7;
        b = 2;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        int b = 9;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
