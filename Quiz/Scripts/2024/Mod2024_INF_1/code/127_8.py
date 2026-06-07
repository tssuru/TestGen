try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 2;
        return y;
    }
    
    int main(){
        int a = 4, b = 6;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 9;
            cout << ((b<7) || ((a-=2) <= 5)) << ':';
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
