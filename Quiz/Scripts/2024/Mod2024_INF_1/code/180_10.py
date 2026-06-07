try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 3;
    
    int g(int a){
        a = 2;
        b -= 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 4;
        c = 9;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
