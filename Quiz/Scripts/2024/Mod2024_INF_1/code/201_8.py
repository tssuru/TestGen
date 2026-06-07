try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 2;
        return x;
    }
    
    int main(){
        int a = 1, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((b>=5) || ((a-=2) >= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
