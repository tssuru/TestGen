try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 8, c = 9;
    
    int g(int &a){
        a = 4;
        b *= 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 0;
        c = 3;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
