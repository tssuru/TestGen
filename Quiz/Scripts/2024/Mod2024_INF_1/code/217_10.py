try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 2;
    
    int f(int b){
        a *= 4;
        b = 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 8;
        int c = 9;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
