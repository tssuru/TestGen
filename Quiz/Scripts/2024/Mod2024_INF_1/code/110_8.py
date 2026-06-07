try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 7, b = 2;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 8;
            cout << ((b<7) || ((a+=2) < 6)) << ':';
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
