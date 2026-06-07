try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 4, c = 5;
    
    int h(int &a){
        int c;
        a = 1;
        b += 2;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 3;
        int c = 2;
        cout << h(a) << ':';
        cout << a << ':' << b << ':' << c;
        return 0; 
    }
    
except: print('error')
