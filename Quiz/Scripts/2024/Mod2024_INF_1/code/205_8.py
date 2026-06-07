try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 8;
        return x;
    }
    
    int main(){
        int a = 4, b = 6;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 1;
            cout << ((a<=4) || ((b-=2) <= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
