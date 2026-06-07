try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 3, c = 9;
    
    int h(){
        int a = 2;
        b = 1;
        c = 7;
        return a + b + c;
    }
    
    int main(){
        int a = 5;
        b = 6;
        int c = 8;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
