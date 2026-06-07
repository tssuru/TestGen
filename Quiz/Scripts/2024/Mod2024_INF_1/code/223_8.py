try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 8;
        return y;
    }
    
    int main(){
        int a = 6, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 5;
            cout << ((a<=3) || ((b-=1) < 5)) << ':';
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
