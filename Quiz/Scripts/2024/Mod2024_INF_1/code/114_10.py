try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 7, c = 4;
    
    int g(int b){
        a = 1;
        b -= 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 1;
        c = 8;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
