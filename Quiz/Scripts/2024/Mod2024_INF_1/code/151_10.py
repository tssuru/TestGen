try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 7, c = 8;
    
    int g(int a){
        a = 3;
        b -= 2;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 2;
        int c = 0;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
