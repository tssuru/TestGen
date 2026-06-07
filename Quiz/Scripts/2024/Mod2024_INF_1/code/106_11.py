try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 2, c = 5;
    
    int g(){
        a = 3;
        int b = 7;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 0;
        int c = 1;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
