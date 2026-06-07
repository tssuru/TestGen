try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 3;
        return x;
    }
    
    int main(){
        int a = 1, b = 4;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 8;
            cout << ((a<=3) && ((b+=2) >= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
