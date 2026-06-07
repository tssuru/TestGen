try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 9, c = 7;
    
    int h(int b){
        int c;
        a = 4;
        b *= 5;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 2;
        c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
