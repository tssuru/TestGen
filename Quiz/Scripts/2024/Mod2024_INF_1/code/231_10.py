try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 7, c = 9;
    
    int g(int b){
        a = 4;
        b = 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 2;
        c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
