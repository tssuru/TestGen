try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 6, c = 2;
    
    int g(int b){
        a *= 4;
        b += 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 2;
        c = 7;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
