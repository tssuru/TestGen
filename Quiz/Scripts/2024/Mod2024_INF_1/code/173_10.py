try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 7, c = 0;
    
    int h(int &a){
        a = 1;
        b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 2;
        c = 4;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
