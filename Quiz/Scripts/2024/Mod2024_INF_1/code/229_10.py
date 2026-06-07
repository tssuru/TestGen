try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 6, c = 8;
    
    int f(int a){
        a -= 1;
        b = 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 9;
        c = 1;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
