try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 5, c = 9;
    
    int f(int &b){
        a = 2;
        b += 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 2;
        c = 3;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
