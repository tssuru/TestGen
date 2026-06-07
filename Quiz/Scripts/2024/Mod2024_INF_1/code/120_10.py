try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 4, c = 3;
    
    int h(int a){
        int c;
        a = 2;
        b += 4;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        b = 9;
        int c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
