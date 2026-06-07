try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 3, c = 4;
    
    int g(){
        int a = 5;
        b = 8;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 9;
        int c = 1;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
