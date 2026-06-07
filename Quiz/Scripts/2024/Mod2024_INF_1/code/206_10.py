try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 5;
    
    int g(int a){
        a = 4;
        b *= 1;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 4;
        int c = 6;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
