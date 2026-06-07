try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 6, c = 9;
    
    int g(){
        int a = 8;
        b = 7;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 4;
        int c = 0;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
