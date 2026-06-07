try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 3, c = 4;
    
    int g(int a){
        int c;
        a = 4;
        b -= 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 2;
        int c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
