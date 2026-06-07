try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 4;
        return x;
    }
    
    int main(){
        int a = 8, b = 2;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 7;
            cout << ((a>6) || ((b+=1) > 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 5;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
