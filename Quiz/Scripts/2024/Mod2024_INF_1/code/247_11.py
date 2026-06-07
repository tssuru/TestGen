try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 2, c = 0;
    
    int g(){
        int a = 7;
        b = 9;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 3;
        int c = 0;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
