try:
    #include <iostream>
    using namespace std;
    
    int a = 4, b = 3, c = 7;
    
    int h(){
        a = 4;
        int b = 9;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 0;
        int b = 5;
        c = 8;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
