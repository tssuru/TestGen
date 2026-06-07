try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 7, c = 9;
    
    int g(int &b){
        int c;
        a = 3;
        b -= 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 5;
        c = 0;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
