try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 8, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 3;
            cout << ((a>4) && ((b+=2) <= 3)) << ':';
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
