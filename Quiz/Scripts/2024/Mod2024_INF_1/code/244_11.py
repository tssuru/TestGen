try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 7, c = 3;
    
    int g(){
        a = 6;
        int b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 8;
        c = 9;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
