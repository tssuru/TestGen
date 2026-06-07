try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 4, c = 8;
    
    int h(){
        a = 1;
        int b = 2;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 9;
        c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
