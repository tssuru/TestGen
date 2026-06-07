try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 6, c = 3;
    
    int h(int b){
        a += 5;
        b = 3;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 8;
        int c = 3;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
