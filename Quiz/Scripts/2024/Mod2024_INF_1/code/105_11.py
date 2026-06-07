try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 5;
    
    int g(){
        int a = 1;
        b = 7;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 6;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
