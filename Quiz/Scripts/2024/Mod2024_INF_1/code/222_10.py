try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 6;
    
    int g(int b){
        a += 4;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 7;
        c = 5;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
