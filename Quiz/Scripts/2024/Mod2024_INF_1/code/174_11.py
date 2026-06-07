try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 9, c = 8;
    
    int h(){
        int a = 5;
        b = 1;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 2;
        int c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
