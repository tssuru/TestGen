try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 5;
        return x;
    }
    
    int main(){
        int a = 6, b = 9;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 7;
            cout << ((b<=6) && ((a+=2) < 6)) << ':';
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
