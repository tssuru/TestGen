try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 3, c = 0;
    
    int h(int b){
        a = 2;
        b = 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 9;
        b = 6;
        int c = 8;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
