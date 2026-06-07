try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 5;
    
    int g(int &b){
        a = 3;
        b *= 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 8;
        c = 7;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
