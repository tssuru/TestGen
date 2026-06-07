try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 8;
        return x;
    }
    
    int main(){
        int a = 3, b = 1;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 2;
            cout << ((b<7) || ((a-=1) < 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
