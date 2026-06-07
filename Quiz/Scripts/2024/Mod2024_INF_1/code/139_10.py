try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 0, c = 5;
    
    int g(int &b){
        int c;
        a = 5;
        b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 7;
        c = 9;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
