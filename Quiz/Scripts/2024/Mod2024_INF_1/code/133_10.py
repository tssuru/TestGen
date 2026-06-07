try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 3, c = 8;
    
    int f(int a){
        int c;
        a = 2;
        b += 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        b = 1;
        int c = 5;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
