try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 2, c = 8;
    
    int h(){
        a = 9;
        int b = 1;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 4;
        int b = 5;
        c = 6;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
