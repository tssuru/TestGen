try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 3, c = 9;
    
    int g(int a){
        int c;
        a = 1;
        b *= 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        int b = 5;
        c = 4;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
