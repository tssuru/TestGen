try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 1;
    
    int h(int a){
        a = 1;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 7;
        c = 9;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
