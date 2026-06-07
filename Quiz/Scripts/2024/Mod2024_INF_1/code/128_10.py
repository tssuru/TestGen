try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 3, c = 3;
    
    int f(int &b){
        int c;
        a = 3;
        b -= 2;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 8;
        c = 6;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
