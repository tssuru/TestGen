try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 6, b = 9;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 2;
            cout << ((b>4) && ((a+=2) > 7)) << ':';
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
