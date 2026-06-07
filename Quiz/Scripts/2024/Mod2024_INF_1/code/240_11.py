try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 7, c = 6;
    
    int h(){
        a = 4;
        int b = 2;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        int b = 9;
        c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
