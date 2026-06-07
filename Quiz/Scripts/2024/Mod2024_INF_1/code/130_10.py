try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 9;
    
    int h(int &a){
        int c;
        a = 1;
        b -= 3;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        int b = 8;
        int c = 4;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
