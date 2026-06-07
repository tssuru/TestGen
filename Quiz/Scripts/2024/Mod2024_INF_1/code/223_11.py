try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 8, c = 4;
    
    int g(){
        a = 7;
        int b = 1;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        int b = 9;
        c = 2;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
