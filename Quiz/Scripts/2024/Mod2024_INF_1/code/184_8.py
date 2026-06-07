try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 4;
        return y;
    }
    
    int main(){
        int a = 9, b = 8;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 6;
            cout << ((b<=6) || ((a-=2) >= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
