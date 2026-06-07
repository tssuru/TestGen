try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 4;
        return y;
    }
    
    int main(){
        int a = 6, b = 8;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 9;
            cout << ((b>7) && ((a+=2) <= 5)) << ':';
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
