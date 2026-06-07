try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 2, c = 8;
    
    int g(int &b){
        a *= 5;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 7;
        int c = 9;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
