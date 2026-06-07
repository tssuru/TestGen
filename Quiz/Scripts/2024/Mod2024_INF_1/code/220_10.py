try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 7, c = 3;
    
    int f(int &a){
        int c;
        a *= 1;
        b = 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 0;
        c = 6;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
