try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 7, c = 2;
    
    int f(int b){
        a = 3;
        b -= 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 1;
        c = 4;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
