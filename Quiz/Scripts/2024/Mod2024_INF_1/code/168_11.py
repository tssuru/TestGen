try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 8, c = 6;
    
    int g(){
        a = 0;
        int b = 5;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 6;
        int c = 2;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
