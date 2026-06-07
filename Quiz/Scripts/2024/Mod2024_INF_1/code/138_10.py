try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 4, c = 2;
    
    int f(int a){
        a *= 3;
        b -= 3;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 3;
        c = 8;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
