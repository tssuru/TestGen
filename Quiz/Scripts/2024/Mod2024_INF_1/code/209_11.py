try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 0, c = 5;
    
    int h(){
        a = 2;
        int b = 8;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 7;
        b = 3;
        int c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
