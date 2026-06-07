try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 9;
        return x;
    }
    
    int main(){
        int a = 4, b = 7;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 6;
            cout << ((a>=5) && ((b+=2) >= 7)) << ':';
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
