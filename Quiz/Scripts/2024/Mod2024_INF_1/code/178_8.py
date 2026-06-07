try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 5;
        return x;
    }
    
    int main(){
        int a = 9, b = 9;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((a>6) && ((b+=1) <= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
