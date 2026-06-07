try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 4, c = 8;
    
    int f(int b){
        int c;
        a *= 1;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 2;
        int c = 0;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
