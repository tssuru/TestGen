try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 6;
        return x;
    }
    
    int main(){
        int a = 7, b = 2;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 9;
            cout << ((b<=5) && ((a-=1) >= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
