try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 2, c = 0;
    
    int g(){
        int a = 8;
        b = 6;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 8;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
