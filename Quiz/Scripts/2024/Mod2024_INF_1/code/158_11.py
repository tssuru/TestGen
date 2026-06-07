try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 9, c = 5;
    
    int h(){
        a = 0;
        int b = 8;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 4;
        int c = 8;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
