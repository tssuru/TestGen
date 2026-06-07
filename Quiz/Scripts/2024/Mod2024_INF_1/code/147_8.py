try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 1, b = 8;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 5;
            cout << ((b<7) && ((a+=2) >= 5)) << ':';
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
