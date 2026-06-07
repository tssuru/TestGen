try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 2, b = 3;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 5;
            cout << ((b>3) && ((a-=2) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
