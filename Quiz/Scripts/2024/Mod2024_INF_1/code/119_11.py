try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 0, c = 2;
    
    int h(){
        int a = 1;
        b = 5;
        c = 3;
        return a + b + c;
    }
    
    int main(){
        int a = 9;
        int b = 6;
        c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
