try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 6;
    
    int g(){
        int a = 1;
        b = 5;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 6;
        int c = 7;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
