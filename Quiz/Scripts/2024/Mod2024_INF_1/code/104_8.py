try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 4;
        return y;
    }
    
    int main(){
        int a = 6, b = 8;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 9;
            cout << ((b>=6) && ((a-=1) >= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
