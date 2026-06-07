try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 3, c = 5;
    
    int h(){
        a = 9;
        int b = 0;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 8;
        int b = 4;
        c = 2;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
