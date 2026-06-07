try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 7;
    
    int g(int b){
        a -= 5;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 8;
        int c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
