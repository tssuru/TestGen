try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 6, b = 1;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 3;
            cout << ((a<=7) && ((b-=1) <= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
