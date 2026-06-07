try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 2;
        return x;
    }
    
    int main(){
        int a = 6, b = 9;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 5;
            cout << ((b>=6) && ((a-=1) >= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
