try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 9, c = 1;
    
    int h(int b){
        a = 4;
        b = 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 9;
        int c = 2;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
