try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 3, c = 9;
    
    int g(){
        int a = 5;
        b = 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 6;
        int c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
