try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 9, c = 4;
    
    int g(int &b){
        a = 3;
        b += 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 0;
        int c = 1;
        cout << g(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
