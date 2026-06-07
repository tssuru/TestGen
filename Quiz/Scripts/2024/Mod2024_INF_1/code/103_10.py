try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 3, c = 2;
    
    int g(int a){
        a = 4;
        b *= 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 8;
        c = 7;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
