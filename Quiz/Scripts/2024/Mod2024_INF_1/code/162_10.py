try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 7, c = 5;
    
    int h(int &b){
        a -= 1;
        b *= 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 0;
        int c = 4;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
