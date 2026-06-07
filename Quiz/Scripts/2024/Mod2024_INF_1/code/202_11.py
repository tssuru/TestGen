try:
    #include <iostream>
    using namespace std;
    
    int a = 9, b = 2, c = 0;
    
    int h(){
        a = 9;
        int b = 5;
        c = 9;
        return a + b + c;
    }
    
    int main(){
        int a = 3;
        b = 0;
        int c = 7;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
