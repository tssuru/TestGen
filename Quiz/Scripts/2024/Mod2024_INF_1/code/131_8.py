try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 9;
        return y;
    }
    
    int main(){
        int a = 4, b = 3;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 8;
            cout << ((a>6) || ((b-=2) >= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
