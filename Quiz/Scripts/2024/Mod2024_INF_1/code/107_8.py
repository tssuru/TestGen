try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 6;
        return x;
    }
    
    int main(){
        int a = 5, b = 7;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 4;
            cout << ((b>7) || ((a-=2) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
