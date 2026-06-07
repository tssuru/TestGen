try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 1;
    
    int h(int &b){
        a = 2;
        b *= 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 2;
        c = 5;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
