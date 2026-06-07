try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 4;
        return y;
    }
    
    int main(){
        int a = 6, b = 2;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 1;
            cout << ((b<=6) && ((a+=2) <= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
