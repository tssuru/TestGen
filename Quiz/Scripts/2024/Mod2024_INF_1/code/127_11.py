try:
    #include <iostream>
    using namespace std;
    
    int a = 1, b = 8, c = 3;
    
    int h(){
        a = 1;
        int b = 9;
        int c = 9;
        return a + b + c;
    }
    
    int main(){
        a = 1;
        b = 4;
        int c = 0;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
