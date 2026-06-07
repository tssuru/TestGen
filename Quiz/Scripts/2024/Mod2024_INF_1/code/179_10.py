try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 1, c = 7;
    
    int f(int b){
        a += 1;
        b = 2;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 4;
        int c = 9;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
