try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 2, c = 1;
    
    int g(int b){
        a += 4;
        b -= 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 9;
        c = 5;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
