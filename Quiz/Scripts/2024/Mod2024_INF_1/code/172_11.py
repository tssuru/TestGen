try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 7, c = 2;
    
    int g(){
        int a = 3;
        b = 6;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 9;
        int c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
