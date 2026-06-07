try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 4, c = 1;
    
    int g(int &a){
        a -= 2;
        b += 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 5;
        c = 9;
        cout << g(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
