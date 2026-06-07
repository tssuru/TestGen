try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 4, c = 1;
    
    int g(int &b){
        a = 4;
        b = 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 4;
        c = 9;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
