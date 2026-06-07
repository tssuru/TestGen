try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y-= 1;
        return x;
    }
    
    int main(){
        int a = 9, b = 6;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 4;
            cout << ((a>4) && ((b+=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
