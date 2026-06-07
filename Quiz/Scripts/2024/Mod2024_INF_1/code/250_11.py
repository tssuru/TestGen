try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 5;
    
    int g(){
        int a = 9;
        b = 1;
        c = 0;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 2;
        c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
