try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 9;
    
    int h(){
        a = 1;
        int b = 0;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 2;
        b = 4;
        int c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
