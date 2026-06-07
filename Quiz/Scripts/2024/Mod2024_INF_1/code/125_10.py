try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 4, c = 5;
    
    int g(int &a){
        a *= 3;
        b -= 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 7;
        c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
