try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 5;
    
    int g(){
        int a = 2;
        b = 7;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 5;
        int c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
