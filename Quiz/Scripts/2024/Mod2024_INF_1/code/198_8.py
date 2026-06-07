try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 4;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 1;
            cout << ((b<=7) || ((a-=1) >= 3)) << ':';
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
