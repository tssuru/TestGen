try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 6, c = 3;
    
    int f(int b){
        int c;
        a = 5;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 8;
        c = 1;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
