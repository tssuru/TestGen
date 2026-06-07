try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 4;
    
    int h(int a){
        int c;
        a -= 1;
        b += 4;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 9;
        c = 8;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
