try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 3;
        return x;
    }
    
    int main(){
        int a = 8, b = 6;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 2;
            cout << ((b>5) && ((a-=1) < 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
