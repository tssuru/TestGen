try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 2;
    
    int g(){
        a = 3;
        int b = 0;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        int b = 9;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
