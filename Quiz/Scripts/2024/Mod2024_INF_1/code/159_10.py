try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 7;
    
    int f(int &b){
        a *= 3;
        b += 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 5;
        c = 6;
        cout << f(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
