try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 5, b = 4;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((a>6) || ((b-=2) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
