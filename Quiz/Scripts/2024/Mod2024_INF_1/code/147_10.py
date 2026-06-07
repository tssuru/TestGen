try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 8, c = 9;
    
    int f(int &a){
        a = 4;
        b += 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 0;
        int c = 3;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
