try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 2, b = 5;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 6;
            cout << ((b>6) && ((a-=2) > 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
