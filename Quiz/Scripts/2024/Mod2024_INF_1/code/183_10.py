try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 6, c = 4;
    
    int g(int &a){
        a += 4;
        b *= 3;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 2;
        int c = 1;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
