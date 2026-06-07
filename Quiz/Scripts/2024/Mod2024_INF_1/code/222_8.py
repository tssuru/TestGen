try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 7;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 9;
            cout << ((b<4) && ((a+=2) >= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
