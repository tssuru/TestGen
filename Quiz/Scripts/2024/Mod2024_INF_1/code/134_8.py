try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 3;
        return x;
    }
    
    int main(){
        int a = 9, b = 1;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 3;
            cout << ((a>7) && ((b-=1) > 4)) << ':';
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
