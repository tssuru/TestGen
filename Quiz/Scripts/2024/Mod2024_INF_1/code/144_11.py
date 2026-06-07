try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 7, c = 8;
    
    int h(){
        a = 2;
        int b = 1;
        int c = 3;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 9;
        int c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
