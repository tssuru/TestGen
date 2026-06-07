try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 3;
    
    int f(int &b){
        int c;
        a *= 1;
        b += 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 0;
        int c = 9;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
