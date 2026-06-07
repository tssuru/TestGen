try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y-= 2;
        return x;
    }
    
    int main(){
        int a = 7, b = 5;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 8;
            cout << ((a<3) && ((b+=2) < 3)) << ':';
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
