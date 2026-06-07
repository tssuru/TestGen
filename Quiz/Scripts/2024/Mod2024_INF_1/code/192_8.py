try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 2;
        return y;
    }
    
    int main(){
        int a = 9, b = 5;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 6;
            cout << ((b<6) || ((a-=2) < 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
