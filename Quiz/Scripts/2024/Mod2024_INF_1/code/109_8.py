try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 9;
        return x;
    }
    
    int main(){
        int a = 6, b = 3;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 2;
            cout << ((a>=6) || ((b+=1) >= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
