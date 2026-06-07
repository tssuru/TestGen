try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y-= 2;
        return y;
    }
    
    int main(){
        int a = 1, b = 8;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 9;
            cout << ((b>3) || ((a-=1) <= 5)) << ':';
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
