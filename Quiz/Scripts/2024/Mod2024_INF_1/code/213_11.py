try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 0, c = 7;
    
    int h(){
        a = 2;
        int b = 4;
        int c = 1;
        return a + b + c;
    }
    
    int main(){
        a = 3;
        int b = 2;
        c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
