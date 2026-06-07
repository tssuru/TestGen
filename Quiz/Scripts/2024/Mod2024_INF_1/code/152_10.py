try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 9;
    
    int f(int b){
        a += 2;
        b = 1;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 6;
        int c = 7;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
