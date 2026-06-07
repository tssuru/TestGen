try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 7;
    
    int h(int b){
        int c;
        a = 2;
        b = 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 8;
        int c = 9;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
