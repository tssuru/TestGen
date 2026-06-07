try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 6;
    
    int g(){
        int a = 0;
        b = 8;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        b = 2;
        int c = 4;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
