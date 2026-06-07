try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 8, c = 7;
    
    int g(){
        a = 0;
        int b = 3;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 5;
        int c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
