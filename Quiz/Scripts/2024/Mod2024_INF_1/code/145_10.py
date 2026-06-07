try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 4, c = 3;
    
    int h(int &a){
        int c;
        a = 1;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        int b = 2;
        c = 8;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
