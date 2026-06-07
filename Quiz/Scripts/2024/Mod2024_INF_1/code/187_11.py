try:
    #include <iostream>
    using namespace std;
    
    int a = 3, b = 8, c = 2;
    
    int h(){
        int a = 3;
        b = 4;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        int b = 4;
        c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
