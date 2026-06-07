try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 2, c = 7;
    
    int h(int &a){
        a = 2;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        int b = 4;
        c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
