try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 3, c = 4;
    
    int h(){
        int a = 1;
        b = 0;
        c = 8;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        b = 9;
        int c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
