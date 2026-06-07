try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 7;
        return x;
    }
    
    int main(){
        int a = 9, b = 6;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 1;
            cout << ((b<7) && ((a-=2) <= 5)) << ':';
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
