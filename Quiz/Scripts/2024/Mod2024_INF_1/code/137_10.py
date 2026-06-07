try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 3, c = 8;
    
    int h(int b){
        int c;
        a += 2;
        b = 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        b = 0;
        int c = 5;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
