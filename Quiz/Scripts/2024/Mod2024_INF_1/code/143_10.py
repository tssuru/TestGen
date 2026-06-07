try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 6, c = 9;
    
    int h(int &b){
        a = 3;
        b += 2;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 6;
        int c = 8;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
