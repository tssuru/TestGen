try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 8, c = 0;
    
    int h(int &b){
        int c;
        a += 3;
        b = 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 7;
        int c = 1;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
