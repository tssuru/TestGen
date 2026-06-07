try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 5;
        return x;
    }
    
    int main(){
        int a = 7, b = 4;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 9;
            cout << ((b<4) && ((a-=1) < 7)) << ':';
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
