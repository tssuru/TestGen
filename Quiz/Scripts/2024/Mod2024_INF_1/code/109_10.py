try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 6;
    
    int f(int a){
        a = 4;
        b -= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 3;
        int c = 5;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
