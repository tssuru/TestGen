try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 1;
        return y;
    }
    
    int main(){
        int a = 4, b = 3;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 9;
            cout << ((a>7) && ((b-=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
