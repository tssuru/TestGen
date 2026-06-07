try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 4, b = 6;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 9;
            cout << ((b>=5) || ((a+=1) <= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
