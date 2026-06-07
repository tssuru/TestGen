try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 5;
    
    int f(int &a){
        int c;
        a = 4;
        b = 5;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        int b = 3;
        c = 4;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
