try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 0, c = 3;
    
    int f(int b){
        int c;
        a += 5;
        b = 4;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 0;
        c = 6;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
