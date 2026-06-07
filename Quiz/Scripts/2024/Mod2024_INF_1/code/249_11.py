try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 4, c = 3;
    
    int h(){
        int a = 0;
        b = 9;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        b = 7;
        int c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
