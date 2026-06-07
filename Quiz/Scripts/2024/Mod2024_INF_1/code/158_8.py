try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 8, b = 5;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 1;
            cout << ((b>=3) && ((a+=2) >= 3)) << ':';
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
