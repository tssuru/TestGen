try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 7, b = 4;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 3;
            cout << ((a<=3) && ((b-=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
