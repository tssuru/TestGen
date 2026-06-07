try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 5;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 8;
            cout << ((b>=5) || ((a-=1) <= 6)) << ':';
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
