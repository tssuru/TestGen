try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 2, b = 3;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 9;
            cout << ((a<3) || ((b+=2) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
