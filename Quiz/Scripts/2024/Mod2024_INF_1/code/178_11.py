try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 7;
    
    int h(){
        int a = 9;
        b = 6;
        int c = 8;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 2;
        c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
