try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y-= 8;
        return y;
    }
    
    int main(){
        int a = 1, b = 9;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 5;
            cout << ((b>3) || ((a+=1) >= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
