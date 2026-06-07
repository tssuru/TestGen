try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 0, c = 5;
    
    int g(){
        a = 4;
        int b = 7;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 9;
        c = 2;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
