try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 3;
    
    int g(int b){
        a = 4;
        b -= 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 8;
        int c = 4;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
