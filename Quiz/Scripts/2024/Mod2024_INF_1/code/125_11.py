try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 9, c = 7;
    
    int h(){
        a = 1;
        int b = 4;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 6;
        int c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
