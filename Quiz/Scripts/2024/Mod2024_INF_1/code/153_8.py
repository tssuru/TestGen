try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 6;
        return y;
    }
    
    int main(){
        int a = 1, b = 7;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((b<4) && ((a-=1) > 4)) << ':';
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
