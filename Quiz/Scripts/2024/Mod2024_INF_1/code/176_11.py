try:
    #include <iostream>
    using namespace std;
    
    int a = 6, b = 7, c = 5;
    
    int h(){
        int a = 6;
        b = 6;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 2;
        int c = 9;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
