try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 9, c = 7;
    
    int f(int &b){
        a = 1;
        b *= 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 5;
        int c = 0;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
