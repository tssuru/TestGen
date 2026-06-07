try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 4, c = 0;
    
    int g(){
        int a = 9;
        b = 1;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 7;
        int c = 4;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
