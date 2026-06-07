try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 4, c = 9;
    
    int g(){
        a = 5;
        int b = 1;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 8;
        c = 6;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
