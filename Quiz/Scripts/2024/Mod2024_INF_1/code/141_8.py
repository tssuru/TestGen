try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 9, b = 1;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((b>7) || ((a-=1) > 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
