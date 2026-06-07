try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 7, c = 7;
    
    int h(){
        int a = 8;
        b = 2;
        c = 6;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        b = 9;
        int c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
