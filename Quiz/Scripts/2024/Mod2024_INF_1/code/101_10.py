try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 6, c = 7;
    
    int f(int a){
        a = 3;
        b = 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 2;
        c = 7;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
