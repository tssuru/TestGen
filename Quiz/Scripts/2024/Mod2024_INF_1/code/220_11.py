try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 8, c = 0;
    
    int g(){
        a = 4;
        int b = 3;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 2;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
