try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 3;
        return y;
    }
    
    int main(){
        int a = 4, b = 8;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 5;
            cout << ((a>=5) || ((b-=1) <= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
