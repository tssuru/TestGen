try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 3;
        return y;
    }
    
    int main(){
        int a = 3, b = 6;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 8;
            cout << ((b>5) || ((a+=2) <= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
