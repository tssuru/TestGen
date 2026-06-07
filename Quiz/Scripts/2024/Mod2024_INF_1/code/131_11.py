try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 8, c = 8;
    
    int h(){
        a = 1;
        int b = 9;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 4;
        int c = 2;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
