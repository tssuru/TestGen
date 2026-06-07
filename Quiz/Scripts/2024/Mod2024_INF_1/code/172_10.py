try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 0, c = 3;
    
    int f(int b){
        int c;
        a += 2;
        b -= 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 2;
        int c = 5;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
