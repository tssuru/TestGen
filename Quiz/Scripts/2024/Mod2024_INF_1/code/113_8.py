try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 9;
        return y;
    }
    
    int main(){
        int a = 8, b = 5;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 1;
            cout << ((b<=6) || ((a+=2) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
