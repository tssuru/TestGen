try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 6;
        return x;
    }
    
    int main(){
        int a = 1, b = 7;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 4;
            cout << ((b>=4) || ((a+=2) >= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
