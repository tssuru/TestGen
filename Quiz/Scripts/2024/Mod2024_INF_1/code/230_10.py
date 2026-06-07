try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 4, c = 1;
    
    int h(int &a){
        int c;
        a *= 2;
        b += 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 0;
        c = 3;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
