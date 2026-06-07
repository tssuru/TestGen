try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 6, c = 4;
    
    int g(int a){
        int c;
        a = 5;
        b = 3;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        int b = 7;
        c = 9;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
