try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 7, c = 1;
    
    int h(){
        int a = 2;
        b = 8;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 5;
        c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
