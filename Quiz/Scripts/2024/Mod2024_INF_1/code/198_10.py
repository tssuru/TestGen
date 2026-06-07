try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 8;
    
    int f(int a){
        int c;
        a = 3;
        b = 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 2;
        int c = 6;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
