try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 6, b = 8;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 1;
            cout << ((a<=7) || ((b-=1) < 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
