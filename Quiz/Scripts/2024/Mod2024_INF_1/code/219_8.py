try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 2;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 1;
            cout << ((a>7) || ((b-=2) > 4)) << ':';
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
