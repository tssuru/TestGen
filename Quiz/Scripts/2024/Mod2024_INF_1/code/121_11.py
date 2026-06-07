try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 3, c = 4;
    
    int h(){
        int a = 0;
        b = 6;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 8;
        c = 9;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
