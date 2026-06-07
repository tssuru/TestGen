try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 6, c = 6;
    
    int h(){
        a = 2;
        int b = 7;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 5;
        c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
