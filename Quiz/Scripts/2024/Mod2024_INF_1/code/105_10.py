try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 9, c = 0;
    
    int f(int &a){
        int c;
        a = 4;
        b -= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 3;
        c = 1;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
