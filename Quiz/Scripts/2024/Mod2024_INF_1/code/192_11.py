try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 6, c = 5;
    
    int h(){
        int a = 1;
        b = 8;
        c = 3;
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
