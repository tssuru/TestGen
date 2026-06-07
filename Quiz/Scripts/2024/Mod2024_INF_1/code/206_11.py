try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 0, c = 4;
    
    int h(){
        a = 7;
        int b = 7;
        int c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 8;
        b = 0;
        int c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
