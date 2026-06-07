try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 2;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 9;
            cout << ((a>=5) || ((b+=2) >= 5)) << ':';
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
