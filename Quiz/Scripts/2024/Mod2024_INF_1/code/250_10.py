try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 5;
    
    int h(int a){
        a = 1;
        b += 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 2;
        c = 3;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
