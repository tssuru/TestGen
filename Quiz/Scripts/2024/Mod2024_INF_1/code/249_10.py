try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 4;
    
    int h(int a){
        int c;
        a -= 1;
        b *= 3;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        b = 3;
        int c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
