try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 9, b = 7;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 2;
            cout << ((a<=6) && ((b-=1) <= 6)) << ':';
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
