try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 2, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 8;
            cout << ((a>=3) || ((b+=2) >= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
