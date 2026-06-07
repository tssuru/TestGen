try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 5, c = 0;
    
    int g(int b){
        int c;
        a -= 2;
        b *= 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 7;
        c = 6;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
