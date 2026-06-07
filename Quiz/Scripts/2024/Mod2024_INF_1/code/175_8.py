try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 9;
            cout << ((b>=3) || ((a-=1) < 3)) << ':';
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
