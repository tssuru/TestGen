try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 7;
    
    int f(int b){
        int c;
        a -= 3;
        b = 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 0;
        int c = 8;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
