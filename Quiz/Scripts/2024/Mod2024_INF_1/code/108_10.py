try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 6, c = 8;
    
    int h(int &b){
        int c;
        a = 2;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 2;
        c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
