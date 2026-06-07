try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 6, c = 4;
    
    int g(int &a){
        a = 1;
        b = 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 2;
        c = 7;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
