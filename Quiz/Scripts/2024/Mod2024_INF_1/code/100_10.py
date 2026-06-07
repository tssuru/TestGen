try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 3, c = 9;
    
    int g(int &b){
        int c;
        a = 2;
        b -= 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 1;
        int c = 8;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
