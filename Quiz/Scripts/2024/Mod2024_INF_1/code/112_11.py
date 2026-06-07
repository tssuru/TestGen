try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 6, c = 9;
    
    int g(){
        int a = 3;
        b = 1;
        c = 0;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 4;
        c = 1;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
