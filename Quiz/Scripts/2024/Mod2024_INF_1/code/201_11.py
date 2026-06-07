try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 3;
    
    int g(){
        a = 1;
        int b = 4;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 1;
        c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
