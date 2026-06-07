try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 5, c = 0;
    
    int g(int a){
        int c;
        a -= 5;
        b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 9;
        c = 4;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
