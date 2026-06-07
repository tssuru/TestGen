try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 0, c = 1;
    
    int g(){
        int a = 6;
        b = 7;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 0;
        int c = 5;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
