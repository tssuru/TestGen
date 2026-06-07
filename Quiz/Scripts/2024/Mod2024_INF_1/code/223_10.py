try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 0, c = 6;
    
    int g(int &a){
        int c;
        a = 3;
        b = 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 1;
        c = 9;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
