try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 8;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 2;
            cout << ((b>=3) && ((a-=2) >= 5)) << ':';
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
