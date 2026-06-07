try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 7, c = 6;
    
    int h(){
        a = 8;
        int b = 5;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 0;
        int c = 3;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
