try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 2, c = 6;
    
    int g(){
        a = 5;
        int b = 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 7;
        int c = 0;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
