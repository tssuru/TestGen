try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 4, c = 3;
    
    int g(){
        int a = 0;
        b = 7;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 5;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
