try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 3, c = 8;
    
    int f(int &b){
        int c;
        a -= 4;
        b = 1;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 0;
        int c = 6;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
