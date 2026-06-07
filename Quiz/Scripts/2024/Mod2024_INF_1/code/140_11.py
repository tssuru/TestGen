try:
    #include <iostream>
    using namespace std;
    
    int a = 0, b = 7, c = 9;
    
    int h(){
        a = 0;
        int b = 1;
        c = 2;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        int b = 4;
        c = 5;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
