try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 7, c = 0;
    
    int g(){
        a = 5;
        int b = 4;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 1;
        int c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
