try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 9, c = 2;
    
    int h(int &a){
        a += 2;
        b = 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 7;
        c = 4;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
