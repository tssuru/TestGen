try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 7, c = 1;
    
    int f(int &a){
        int c;
        a = 1;
        b = 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 1;
        c = 4;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
