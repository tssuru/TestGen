try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 7;
        return x;
    }
    
    int main(){
        int a = 6, b = 2;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 9;
            cout << ((a<=3) || ((b+=2) < 6)) << ':';
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
