try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 6;
        return x;
    }
    
    int main(){
        int a = 8, b = 2;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 5;
            cout << ((a>=3) || ((b-=1) < 5)) << ':';
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
