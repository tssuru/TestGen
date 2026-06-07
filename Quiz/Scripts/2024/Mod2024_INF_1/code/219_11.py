try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 9, c = 3;
    
    int h(){
        a = 6;
        int b = 8;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        b = 5;
        int c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
