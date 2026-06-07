try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y-= 5;
        return y;
    }
    
    int main(){
        int a = 1, b = 6;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 2;
            cout << ((b>3) && ((a+=1) > 4)) << ':';
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
