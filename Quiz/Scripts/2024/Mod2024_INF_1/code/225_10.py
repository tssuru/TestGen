try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 5;
    
    int h(int b){
        int c;
        a = 1;
        b *= 4;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 3;
        c = 4;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
