try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 4, c = 6;
    
    int h(int b){
        a = 4;
        b += 5;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 9;
        int c = 1;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
