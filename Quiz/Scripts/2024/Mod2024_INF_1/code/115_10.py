try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 6, c = 9;
    
    int h(int &a){
        int c;
        a *= 1;
        b = 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        int b = 7;
        c = 4;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
