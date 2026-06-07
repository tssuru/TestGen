try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 1, c = 6;
    
    int h(){
        int a = 9;
        b = 7;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        int b = 1;
        c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
