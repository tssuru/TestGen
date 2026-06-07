try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 0;
    
    int h(){
        int a = 9;
        b = 2;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 4;
        int b = 4;
        c = 8;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
