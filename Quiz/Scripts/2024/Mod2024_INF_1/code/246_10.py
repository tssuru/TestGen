try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 5, c = 6;
    
    int g(int a){
        int c;
        a += 5;
        b = 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        b = 3;
        int c = 0;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
