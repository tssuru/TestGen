try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 1;
        return y;
    }
    
    int main(){
        int a = 9, b = 4;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 6;
            cout << ((b<=4) || ((a+=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
