try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 9, b = 2;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 8;
            cout << ((a<=3) || ((b-=2) >= 3)) << ':';
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
