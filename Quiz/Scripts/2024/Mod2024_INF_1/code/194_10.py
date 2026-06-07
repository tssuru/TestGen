try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 1;
    
    int h(int a){
        int c;
        a += 5;
        b = 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 4;
        int c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
