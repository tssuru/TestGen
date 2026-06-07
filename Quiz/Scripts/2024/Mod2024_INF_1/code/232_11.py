try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 0, c = 8;
    
    int g(){
        a = 1;
        int b = 2;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 7;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
