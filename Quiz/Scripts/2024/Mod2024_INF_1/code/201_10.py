try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 8, c = 5;
    
    int g(int &b){
        a -= 1;
        b = 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 9;
        c = 0;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
