try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 7;
    
    int g(){
        int a = 1;
        b = 0;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 5;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
