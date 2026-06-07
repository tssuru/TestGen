try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 2;
        return x;
    }
    
    int main(){
        int a = 4, b = 8;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 7;
            cout << ((b<6) || ((a-=1) < 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
