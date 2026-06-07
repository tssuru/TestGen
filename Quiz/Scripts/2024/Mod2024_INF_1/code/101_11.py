try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 8, c = 7;
    
    int g(){
        int a = 4;
        b = 9;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 0;
        int c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
