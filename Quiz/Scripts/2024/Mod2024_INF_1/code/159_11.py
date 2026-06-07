try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 7;
    
    int g(){
        a = 6;
        int b = 1;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 3;
        int c = 0;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
