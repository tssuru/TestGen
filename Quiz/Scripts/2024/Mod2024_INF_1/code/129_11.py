try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 7, c = 2;
    
    int g(){
        a = 0;
        int b = 1;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 9;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
