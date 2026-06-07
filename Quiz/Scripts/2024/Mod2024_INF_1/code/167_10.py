try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 6, c = 5;
    
    int h(int &b){
        int c;
        a = 3;
        b = 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 7;
        c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
