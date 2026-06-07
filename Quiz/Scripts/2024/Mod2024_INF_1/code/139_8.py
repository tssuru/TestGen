try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 5;
        return y;
    }
    
    int main(){
        int a = 8, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 7;
            cout << ((a>6) || ((b+=2) > 6)) << ':';
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
