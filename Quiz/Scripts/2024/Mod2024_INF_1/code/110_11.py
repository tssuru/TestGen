try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 3, c = 5;
    
    int h(){
        a = 4;
        int b = 2;
        int c = 7;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 0;
        int c = 6;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
