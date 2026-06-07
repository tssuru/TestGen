try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 6;
        return x;
    }
    
    int main(){
        int a = 5, b = 9;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 2;
            cout << ((a<5) || ((b-=2) <= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
