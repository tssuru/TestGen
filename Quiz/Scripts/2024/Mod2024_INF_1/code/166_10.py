try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 2, c = 6;
    
    int f(int a){
        a = 4;
        b *= 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 9;
        c = 8;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
