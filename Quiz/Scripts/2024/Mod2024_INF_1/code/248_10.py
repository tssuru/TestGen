try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 8, c = 5;
    
    int g(int &b){
        a = 2;
        b = 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 6;
        c = 8;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
