try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 2, b = 7;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((a<5) && ((b+=2) >= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
