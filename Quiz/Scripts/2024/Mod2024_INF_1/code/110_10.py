try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 3, c = 0;
    
    int h(int &b){
        a += 4;
        b *= 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 8;
        c = 7;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
