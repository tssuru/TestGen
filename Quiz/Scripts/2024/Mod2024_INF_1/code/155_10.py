try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 1, c = 7;
    
    int h(int &a){
        int c;
        a = 2;
        b += 1;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        b = 2;
        int c = 4;
        cout << h(b) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
