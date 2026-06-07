try:
    #include <iostream>
    using namespace std;
    
    int a = 8, b = 3, c = 0;
    
    int h(){
        a = 8;
        int b = 5;
        c = 1;
        return a + b + c;
    }
    
    int main(){
        int a = 6;
        int b = 4;
        c = 7;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
