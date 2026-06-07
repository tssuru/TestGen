try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 1, c = 8;
    
    int h(int b){
        int c;
        a -= 5;
        b = 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 2;
        c = 9;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
