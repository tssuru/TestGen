try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 7;
        return x;
    }
    
    int main(){
        int a = 6, b = 9;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 4;
            cout << ((a<=4) || ((b-=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
