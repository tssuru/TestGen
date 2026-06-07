try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 3;
    
    int g(int b){
        int c;
        a = 3;
        b -= 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 5;
        int c = 4;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
