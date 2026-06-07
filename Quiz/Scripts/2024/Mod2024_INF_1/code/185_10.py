try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 7, c = 2;
    
    int f(int b){
        int c;
        a -= 2;
        b = 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 9;
        c = 0;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
