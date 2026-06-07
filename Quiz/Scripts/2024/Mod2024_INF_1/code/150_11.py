try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 1, c = 0;
    
    int h(){
        a = 3;
        int b = 9;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 4;
        int c = 7;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
