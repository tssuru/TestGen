try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 4, c = 3;
    
    int h(int &a){
        a = 1;
        b -= 5;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        int b = 4;
        c = 0;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
