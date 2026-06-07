try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 1, c = 7;
    
    int h(int &b){
        a *= 5;
        b = 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 0;
        int c = 2;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
