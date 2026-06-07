try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 7;
    
    int h(int &a){
        a += 4;
        b *= 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 9;
        c = 4;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
