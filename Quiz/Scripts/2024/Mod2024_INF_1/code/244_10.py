try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 9, c = 7;
    
    int f(int &b){
        a *= 4;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 6;
        int c = 4;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
