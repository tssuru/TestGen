try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 8;
        return y;
    }
    
    int main(){
        int a = 2, b = 4;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 9;
            cout << ((a<6) && ((b+=2) > 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
