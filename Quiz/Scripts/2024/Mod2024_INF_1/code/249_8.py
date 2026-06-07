try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 6;
        return x;
    }
    
    int main(){
        int a = 9, b = 4;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 7;
            cout << ((b<4) && ((a+=2) >= 5)) << ':';
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
