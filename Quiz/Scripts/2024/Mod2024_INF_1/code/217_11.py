try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 0, c = 3;
    
    int g(){
        int a = 8;
        b = 5;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 0;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
