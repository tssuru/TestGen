try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 0, c = 3;
    
    int g(int &a){
        a *= 3;
        b = 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 6;
        c = 5;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
