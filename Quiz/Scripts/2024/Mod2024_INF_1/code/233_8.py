try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 9;
        return x;
    }
    
    int main(){
        int a = 4, b = 8;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 4;
            cout << ((a>4) || ((b+=2) > 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
