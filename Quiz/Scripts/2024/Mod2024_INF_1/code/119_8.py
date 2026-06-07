try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 2, b = 1;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((a>=4) && ((b-=2) >= 3)) << ':';
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
