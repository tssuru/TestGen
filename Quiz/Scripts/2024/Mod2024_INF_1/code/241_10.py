try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 7, c = 1;
    
    int f(int &b){
        a = 4;
        b -= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 9;
        c = 4;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
