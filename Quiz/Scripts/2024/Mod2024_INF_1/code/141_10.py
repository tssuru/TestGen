try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 5, c = 7;
    
    int f(int &b){
        a *= 5;
        b = 2;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        int b = 8;
        c = 0;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
