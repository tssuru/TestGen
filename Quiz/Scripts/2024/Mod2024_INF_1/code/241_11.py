try:
    #include <iostream>
    using namespace std;
    
    int a = 5, b = 1, c = 4;
    
    int h(){
        a = 5;
        int b = 3;
        int c = 2;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 1;
        c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
