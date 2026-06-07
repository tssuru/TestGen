try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 6, c = 7;
    
    int g(int a){
        a = 4;
        b = 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 2;
        int c = 3;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
