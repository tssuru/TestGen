try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 2, c = 9;
    
    int g(int b){
        a *= 4;
        b -= 1;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 5;
        int c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
