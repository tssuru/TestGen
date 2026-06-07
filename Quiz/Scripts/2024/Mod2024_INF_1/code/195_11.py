try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 5, c = 9;
    
    int g(){
        a = 0;
        int b = 3;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        b = 8;
        int c = 2;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
