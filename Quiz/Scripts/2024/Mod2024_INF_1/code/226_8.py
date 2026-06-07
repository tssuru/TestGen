try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 6;
        return y;
    }
    
    int main(){
        int a = 4, b = 9;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 7;
            cout << ((b<=7) || ((a+=2) > 6)) << ':';
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
