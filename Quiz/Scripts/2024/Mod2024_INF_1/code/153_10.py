try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 4, c = 9;
    
    int h(int &a){
        int c;
        a = 4;
        b *= 1;
        c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 1;
        int c = 7;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
