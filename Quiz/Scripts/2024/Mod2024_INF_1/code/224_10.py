try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 5, c = 2;
    
    int f(int &a){
        a += 4;
        b -= 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 4;
        c = 7;
        cout << f(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
