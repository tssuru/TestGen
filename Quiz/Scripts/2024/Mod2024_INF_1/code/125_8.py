try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 9;
        return y;
    }
    
    int main(){
        int a = 4, b = 8;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 9;
            cout << ((b<=6) && ((a-=2) < 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
