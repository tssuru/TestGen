try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 7;
    
    int g(){
        int a = 3;
        b = 9;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 9;
        int c = 8;
        cout << g() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
