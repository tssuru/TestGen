try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 3;
    
    int g(int &b){
        int c;
        a = 4;
        b += 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 2;
        int c = 0;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
