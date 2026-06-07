try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 0;
    
    int g(int &b){
        a *= 3;
        b += 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        b = 2;
        int c = 7;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
