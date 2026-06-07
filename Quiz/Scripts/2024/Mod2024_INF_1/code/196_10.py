try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 0;
    
    int g(int a){
        int c;
        a += 1;
        b -= 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 9;
        c = 5;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
