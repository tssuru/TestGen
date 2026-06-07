try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 8, c = 6;
    
    int g(int a){
        a = 3;
        b = 2;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 4;
        int c = 7;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
