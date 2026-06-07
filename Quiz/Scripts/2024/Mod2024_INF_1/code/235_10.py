try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 6;
    
    int f(int &a){
        int c;
        a -= 5;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 9;
        int c = 0;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
