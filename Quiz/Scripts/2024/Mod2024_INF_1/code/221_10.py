try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 4, c = 2;
    
    int h(int b){
        a = 3;
        b -= 5;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 3;
        c = 8;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
