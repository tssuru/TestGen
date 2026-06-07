try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 4;
    
    int h(){
        int a = 2;
        b = 1;
        c = 0;
        return a + b + c;
    }
    
    int main(){
        int a = 2;
        int b = 5;
        c = 6;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
