try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 4, c = 6;
    
    int g(){
        a = 2;
        int b = 5;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 7;
        c = 3;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
