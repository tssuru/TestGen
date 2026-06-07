try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 7, c = 9;
    
    int h(int a){
        int c;
        a += 3;
        b = 2;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 4;
        int c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
