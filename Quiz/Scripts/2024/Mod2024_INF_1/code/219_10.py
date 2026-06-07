try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 6, c = 4;
    
    int h(int a){
        a = 1;
        b += 3;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 2;
        int c = 3;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
