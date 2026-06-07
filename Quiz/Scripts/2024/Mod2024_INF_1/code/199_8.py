try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 7, b = 8;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 2;
            cout << ((b<6) && ((a+=2) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
