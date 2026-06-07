try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 7, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 2;
            cout << ((b<3) && ((a+=2) > 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
