try:
    #include <iostream>
    using namespace std;
    
    int a = 7, b = 1, c = 3;
    
    int h(){
        a = 7;
        int b = 2;
        int c = 0;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        int b = 1;
        c = 9;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
