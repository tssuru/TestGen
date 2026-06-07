try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 5;
        return x;
    }
    
    int main(){
        int a = 9, b = 8;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 4;
            cout << ((b<=5) || ((a-=1) <= 6)) << ':';
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
