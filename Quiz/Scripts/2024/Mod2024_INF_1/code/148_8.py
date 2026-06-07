try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 6, b = 2;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 7;
            cout << ((b>=3) || ((a+=2) <= 4)) << ':';
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
