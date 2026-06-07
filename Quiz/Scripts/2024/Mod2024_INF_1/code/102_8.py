try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 1, b = 2;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 5;
            cout << ((a>4) || ((b-=1) < 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
