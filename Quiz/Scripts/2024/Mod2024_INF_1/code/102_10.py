try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 4;
    
    int h(int &b){
        int c;
        a += 2;
        b *= 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 6;
        int c = 0;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
