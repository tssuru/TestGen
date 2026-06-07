try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y-= 1;
        return x;
    }
    
    int main(){
        int a = 8, b = 9;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 2;
            cout << ((b<=6) || ((a+=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
