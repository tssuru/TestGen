try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 1, c = 6;
    
    int h(int &a){
        int c;
        a = 4;
        b *= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 3;
        int c = 2;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
