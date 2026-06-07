try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 8, c = 4;
    
    int h(int a){
        int c;
        a -= 2;
        b = 1;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 5;
        int c = 6;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
