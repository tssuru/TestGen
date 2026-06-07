try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 8;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 2;
            cout << ((a>=4) && ((b+=1) < 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
