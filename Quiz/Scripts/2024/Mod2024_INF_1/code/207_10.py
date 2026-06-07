try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 0, c = 8;
    
    int f(int &b){
        int c;
        a += 4;
        b -= 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 7;
        c = 5;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
