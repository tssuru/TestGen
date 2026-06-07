try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 9;
        return x;
    }
    
    int main(){
        int a = 6, b = 4;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 5;
            cout << ((b<=5) || ((a-=2) >= 6)) << ':';
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
