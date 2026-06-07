try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 9;
    
    int f(int &b){
        a = 4;
        b -= 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 4;
        int c = 2;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
