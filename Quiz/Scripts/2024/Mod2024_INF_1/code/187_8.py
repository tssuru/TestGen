try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 1;
        return x;
    }
    
    int main(){
        int a = 8, b = 1;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 6;
            cout << ((b<7) || ((a-=2) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
