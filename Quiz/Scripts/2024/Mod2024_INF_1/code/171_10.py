try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 4;
    
    int g(int a){
        a -= 2;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 9;
        int c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
