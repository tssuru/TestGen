try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 6;
        return y;
    }
    
    int main(){
        int a = 1, b = 4;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 7;
            cout << ((b<=5) && ((a-=2) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
