try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 9, c = 1;
    
    int h(int a){
        a *= 2;
        b = 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 3;
        int c = 5;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
