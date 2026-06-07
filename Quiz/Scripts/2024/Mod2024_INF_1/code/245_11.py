try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 6, c = 9;
    
    int h(){
        int a = 1;
        b = 4;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 7;
        c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
