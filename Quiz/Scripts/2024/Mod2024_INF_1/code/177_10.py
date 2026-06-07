try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 8, c = 5;
    
    int g(int &a){
        a = 3;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 4;
        int c = 6;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
