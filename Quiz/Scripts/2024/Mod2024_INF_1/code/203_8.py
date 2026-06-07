try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 1;
        return y;
    }
    
    int main(){
        int a = 3, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 2;
            cout << ((b<7) || ((a-=2) <= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
