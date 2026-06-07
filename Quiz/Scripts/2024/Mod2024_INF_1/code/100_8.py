try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 1, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 2;
            cout << ((b<=7) || ((a+=2) <= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
