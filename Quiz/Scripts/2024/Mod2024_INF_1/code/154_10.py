try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 6, c = 8;
    
    int g(int b){
        a = 5;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 3;
        int c = 4;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
