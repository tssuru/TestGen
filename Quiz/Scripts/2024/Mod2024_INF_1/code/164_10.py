try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 2, c = 5;
    
    int f(int &b){
        a += 4;
        b = 1;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 8;
        int c = 7;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
