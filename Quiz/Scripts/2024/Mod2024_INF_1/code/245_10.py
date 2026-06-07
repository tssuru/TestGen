try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 2, c = 3;
    
    int h(int a){
        int c;
        a = 2;
        b -= 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 1;
        int c = 9;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
