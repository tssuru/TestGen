try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 7;
        return x;
    }
    
    int main(){
        int a = 2, b = 9;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 5;
            cout << ((b>=4) || ((a-=2) >= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
