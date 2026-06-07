try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 3;
        return y;
    }
    
    int main(){
        int a = 4, b = 9;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 5;
            cout << ((a>3) && ((b+=1) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
