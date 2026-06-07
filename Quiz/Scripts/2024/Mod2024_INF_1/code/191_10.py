try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 2, c = 5;
    
    int h(int b){
        int c;
        a += 4;
        b *= 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 8;
        int c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
