try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y+= 1;
        return y;
    }
    
    int main(){
        int a = 5, b = 4;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 1;
            cout << ((b<=3) && ((a-=1) <= 7)) << ':';
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
