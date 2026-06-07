try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 8;
        return y;
    }
    
    int main(){
        int a = 9, b = 4;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 9;
            cout << ((a<7) && ((b-=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
