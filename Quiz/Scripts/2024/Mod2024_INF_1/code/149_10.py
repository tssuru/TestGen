try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 0, c = 8;
    
    int g(int &b){
        a = 2;
        b *= 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 1;
        c = 3;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
