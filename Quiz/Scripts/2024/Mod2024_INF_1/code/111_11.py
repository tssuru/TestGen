try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 0;
    
    int g(){
        int a = 9;
        b = 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        b = 7;
        int c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
