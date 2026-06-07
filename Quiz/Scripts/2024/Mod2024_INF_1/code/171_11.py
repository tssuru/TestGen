try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 5, c = 8;
    
    int h(){
        a = 6;
        int b = 4;
        c = 5;
        return a + b + c;
    }
    
    int main(){
        int a = 1;
        int b = 0;
        c = 9;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
