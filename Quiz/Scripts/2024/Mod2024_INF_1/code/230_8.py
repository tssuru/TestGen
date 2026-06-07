try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 5;
        return y;
    }
    
    int main(){
        int a = 1, b = 6;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 3;
            cout << ((a>5) && ((b+=2) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
