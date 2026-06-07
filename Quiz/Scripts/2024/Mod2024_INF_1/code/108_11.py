try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 8, c = 2;
    
    int h(){
        a = 5;
        int b = 1;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        b = 8;
        int c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
