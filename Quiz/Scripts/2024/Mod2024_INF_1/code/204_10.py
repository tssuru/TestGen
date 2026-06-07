try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 1, c = 5;
    
    int h(int b){
        int c;
        a = 5;
        b += 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 0;
        c = 6;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
