try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 4, c = 3;
    
    int h(int a){
        int c;
        a *= 5;
        b = 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 2;
        int c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
