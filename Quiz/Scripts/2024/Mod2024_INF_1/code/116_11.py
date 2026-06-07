try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 5, c = 3;
    
    int h(){
        int a = 8;
        b = 9;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        b = 8;
        int c = 1;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
