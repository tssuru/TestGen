try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 1, c = 1;
    
    int g(int a){
        a *= 5;
        b += 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 8;
        int c = 5;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
