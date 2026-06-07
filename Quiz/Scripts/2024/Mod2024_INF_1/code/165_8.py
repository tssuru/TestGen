try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 6, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 8;
            cout << ((b<7) || ((a-=2) < 7)) << ':';
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
