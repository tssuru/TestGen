try:
    #include <iostream>
    using namespace std;
    
    int a = 2, b = 3, c = 1;
    
    int h(){
        a = 2;
        int b = 2;
        int c = 5;
        return a + b + c;
    }
    
    int main(){
        a = 7;
        int b = 6;
        c = 9;
        cout << h() << ':';
        cout << a << ':' << b << ':' << c;
        return 0;
    }
    
except: print('error')
