try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 0, c = 1;
    
    int f(int a){
        int c;
        a += 3;
        b -= 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 5;
        c = 8;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
