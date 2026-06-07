try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 7;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 9;
            cout << ((a>6) || ((b-=1) < 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
