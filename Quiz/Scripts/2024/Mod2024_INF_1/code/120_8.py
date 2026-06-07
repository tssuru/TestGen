try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 7, b = 4;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((b>=5) && ((a-=2) <= 3)) << ':';
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
