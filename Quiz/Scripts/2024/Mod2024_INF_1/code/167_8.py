try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y+= 7;
        return x;
    }
    
    int main(){
        int a = 8, b = 4;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 2;
            cout << ((a>=3) || ((b+=2) >= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
