try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 5, c = 8;
    
    int g(int a){
        int c;
        a = 5;
        b += 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 7;
        int c = 6;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
