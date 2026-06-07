try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 9;
        return x;
    }
    
    int main(){
        int a = 4, b = 5;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 2;
            cout << ((b>5) || ((a-=2) < 4)) << ':';
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
