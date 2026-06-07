try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 7;
        return y;
    }
    
    int main(){
        int a = 3, b = 8;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 7;
            cout << ((a>=3) && ((b-=2) <= 7)) << ':';
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
