try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 5;
        return y;
    }
    
    int main(){
        int a = 4, b = 3;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 9;
            cout << ((b<=4) && ((a-=1) <= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
