try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 5, c = 1;
    
    int h(){
        a = 2;
        int b = 4;
        int c = 6;
        return a + b + c;
    }
    
    int main(){
        a = 0;
        int b = 2;
        c = 4;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
