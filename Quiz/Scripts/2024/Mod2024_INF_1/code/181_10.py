try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 2, c = 6;
    
    int f(int &b){
        int c;
        a = 3;
        b = 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 5;
        c = 0;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
