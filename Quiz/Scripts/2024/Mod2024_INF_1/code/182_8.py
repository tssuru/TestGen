try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 2, b = 8;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 3;
            cout << ((a>4) || ((b+=1) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
