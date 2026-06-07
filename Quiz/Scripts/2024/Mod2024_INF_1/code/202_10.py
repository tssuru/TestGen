try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 4, c = 8;
    
    int f(int &a){
        int c;
        a *= 2;
        b = 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 3;
        c = 6;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
