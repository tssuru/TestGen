try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 0, c = 2;
    
    int f(int a){
        int c;
        a = 1;
        b -= 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 9;
        int c = 5;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
