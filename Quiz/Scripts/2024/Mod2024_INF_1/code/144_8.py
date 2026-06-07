try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 7, b = 8;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 3;
            cout << ((b>4) || ((a-=2) > 3)) << ':';
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
