try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 8;
        return x;
    }
    
    int main(){
        int a = 3, b = 1;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 7;
            cout << ((b>=7) && ((a-=2) >= 3)) << ':';
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
