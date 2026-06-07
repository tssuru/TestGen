try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 2, b = 6;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 2;
            cout << ((b<=5) || ((a-=1) > 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
