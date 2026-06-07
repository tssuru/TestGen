try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 2;
    
    int g(){
        int a = 0;
        b = 6;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 2;
        c = 9;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
