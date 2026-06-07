try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 2, c = 3;
    
    int h(int a){
        int c;
        a = 4;
        b *= 3;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        b = 2;
        c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
