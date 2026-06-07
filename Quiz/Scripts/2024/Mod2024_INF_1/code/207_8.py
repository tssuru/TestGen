try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 5;
        return x;
    }
    
    int main(){
        int a = 1, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 4;
            cout << ((b>=7) && ((a-=1) > 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
