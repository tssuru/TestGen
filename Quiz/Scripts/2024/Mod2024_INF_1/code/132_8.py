try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 9;
        return x;
    }
    
    int main(){
        int a = 2, b = 8;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((a<=4) || ((b+=2) >= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
