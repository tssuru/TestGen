try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 9, c = 2;
    
    int g(int a){
        a *= 5;
        b = 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        b = 7;
        int c = 0;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
