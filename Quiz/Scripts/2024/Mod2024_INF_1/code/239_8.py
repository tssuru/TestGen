try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 9;
        return y;
    }
    
    int main(){
        int a = 7, b = 8;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 4;
            cout << ((a>6) && ((b-=2) >= 5)) << ':';
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
