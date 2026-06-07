try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 6, c = 1;
    
    int f(int &b){
        int c;
        a = 5;
        b -= 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 5;
        int c = 0;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
