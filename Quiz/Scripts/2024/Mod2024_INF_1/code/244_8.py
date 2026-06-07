try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y+= 3;
        return x;
    }
    
    int main(){
        int a = 2, b = 5;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 6;
            cout << ((b>6) || ((a+=2) > 4)) << ':';
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
