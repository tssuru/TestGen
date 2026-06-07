try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 9, c = 3;
    
    int h(int a){
        int c;
        a *= 4;
        b = 2;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        int b = 4;
        c = 6;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
