try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 8;
    
    int f(int &b){
        int c;
        a = 2;
        b += 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 2;
        c = 1;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
