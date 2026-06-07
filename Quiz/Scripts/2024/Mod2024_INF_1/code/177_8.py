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
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 1;
            cout << ((b<=5) || ((a-=2) > 5)) << ':';
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
