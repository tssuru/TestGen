try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 9, c = 8;
    
    int h(){
        int a = 2;
        b = 6;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 4;
        int c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
