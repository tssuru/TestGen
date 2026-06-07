try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 7, c = 8;
    
    int f(int &a){
        int c;
        a += 2;
        b = 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 7;
        int c = 8;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
