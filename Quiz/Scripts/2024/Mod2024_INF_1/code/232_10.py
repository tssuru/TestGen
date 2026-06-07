try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 9, c = 6;
    
    int f(int a){
        int c;
        a += 1;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 8;
        int c = 0;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
