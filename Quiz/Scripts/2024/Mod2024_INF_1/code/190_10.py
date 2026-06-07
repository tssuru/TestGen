try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 8, c = 6;
    
    int g(int &a){
        a = 5;
        b = 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 3;
        c = 9;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
