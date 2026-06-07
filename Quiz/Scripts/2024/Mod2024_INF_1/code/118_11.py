try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 0, c = 5;
    
    int g(){
        int a = 3;
        b = 1;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        b = 8;
        int c = 7;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
