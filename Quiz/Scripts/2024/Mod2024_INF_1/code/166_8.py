try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 2;
        return y;
    }
    
    int main(){
        int a = 1, b = 5;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 3;
            cout << ((b>4) && ((a-=1) > 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
