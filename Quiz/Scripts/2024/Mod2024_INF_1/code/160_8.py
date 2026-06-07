try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 8;
        return x;
    }
    
    int main(){
        int a = 6, b = 7;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((a>=5) && ((b+=2) >= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
