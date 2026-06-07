try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 0, c = 5;
    
    int g(int &b){
        int c;
        a -= 1;
        b *= 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 2;
        c = 6;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
