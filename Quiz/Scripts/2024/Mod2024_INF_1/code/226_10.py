try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 9, c = 7;
    
    int f(int &a){
        int c;
        a -= 3;
        b *= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 5;
        int c = 4;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
