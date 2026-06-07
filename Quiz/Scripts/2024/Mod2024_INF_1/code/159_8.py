try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 3, b = 7;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 5;
            cout << ((b<7) || ((a-=1) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
