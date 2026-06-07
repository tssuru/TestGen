try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 3, c = 5;
    
    int h(int b){
        a *= 1;
        b -= 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 8;
        c = 6;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
