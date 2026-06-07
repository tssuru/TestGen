try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 6;
        return x;
    }
    
    int main(){
        int a = 9, b = 1;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((b<=4) || ((a-=1) <= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
