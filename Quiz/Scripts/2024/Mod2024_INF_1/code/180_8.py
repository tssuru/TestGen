try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 7, b = 1;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 8;
            cout << ((b>=7) || ((a-=1) < 5)) << ':';
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
