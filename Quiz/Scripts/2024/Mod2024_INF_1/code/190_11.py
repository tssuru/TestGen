try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 2, c = 7;
    
    int g(){
        int a = 8;
        b = 4;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 0;
        int c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
