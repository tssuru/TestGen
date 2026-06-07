try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 8, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 6;
            cout << ((b>=5) || ((a+=2) <= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
