try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 8, c = 7;
    
    int g(){
        a = 2;
        int b = 4;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 5;
        c = 1;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
