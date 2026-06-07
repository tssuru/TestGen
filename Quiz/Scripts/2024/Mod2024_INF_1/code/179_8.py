try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 8, b = 5;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 6;
            cout << ((b>=7) || ((a-=2) >= 7)) << ':';
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
