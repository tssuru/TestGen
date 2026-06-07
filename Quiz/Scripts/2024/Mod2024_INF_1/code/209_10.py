try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 5;
    
    int f(int &a){
        int c;
        a = 5;
        b *= 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        b = 2;
        int c = 6;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
