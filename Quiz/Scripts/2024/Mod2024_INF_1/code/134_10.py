try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 0, c = 3;
    
    int g(int &b){
        int c;
        a = 1;
        b -= 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 4;
        int c = 2;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
