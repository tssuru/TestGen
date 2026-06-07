try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 7, c = 8;
    
    int h(){
        int a = 9;
        b = 4;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 6;
        int b = 2;
        c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
