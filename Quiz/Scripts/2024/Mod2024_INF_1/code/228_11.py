try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 3, c = 4;
    
    int h(){
        a = 9;
        int b = 2;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 6;
        c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
