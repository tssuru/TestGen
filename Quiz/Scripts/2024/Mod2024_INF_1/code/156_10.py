try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 0, c = 6;
    
    int f(int &a){
        a -= 3;
        b *= 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 2;
        c = 5;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
