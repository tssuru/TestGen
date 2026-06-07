try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y-= 8;
        return x;
    }
    
    int main(){
        int a = 3, b = 4;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 2;
            cout << ((a>4) && ((b+=1) >= 6)) << ':';
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
