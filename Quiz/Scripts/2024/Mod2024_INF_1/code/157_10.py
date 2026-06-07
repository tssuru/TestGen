try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 9, c = 8;
    
    int h(int b){
        int c;
        a = 5;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 6;
        int c = 7;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
