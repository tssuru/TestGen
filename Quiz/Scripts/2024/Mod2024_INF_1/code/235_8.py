try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 2, b = 8;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 1;
            cout << ((b>=7) || ((a-=1) >= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
