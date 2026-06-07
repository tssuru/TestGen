try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 5;
    
    int f(int &b){
        a = 4;
        b = 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 0;
        int c = 8;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
