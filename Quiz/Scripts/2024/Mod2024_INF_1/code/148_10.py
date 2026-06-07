try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 7;
    
    int h(int a){
        int c;
        a = 3;
        b += 3;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 9;
        c = 2;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
