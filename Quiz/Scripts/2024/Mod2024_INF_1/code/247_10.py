try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 4;
    
    int f(int &b){
        a += 3;
        b = 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 9;
        c = 5;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
