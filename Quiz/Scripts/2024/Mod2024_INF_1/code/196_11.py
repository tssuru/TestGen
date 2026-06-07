try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 6, c = 3;
    
    int h(){
        a = 1;
        int b = 0;
        int c = 4;
        return a + b + c;
    }
    
    int main(){
        a = 5;
        b = 6;
        int c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
