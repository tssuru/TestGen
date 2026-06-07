try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 4, c = 2;
    
    int f(int &a){
        int c;
        a = 4;
        b += 2;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        b = 6;
        int c = 7;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
