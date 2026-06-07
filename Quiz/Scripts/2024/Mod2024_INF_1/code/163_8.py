try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 6;
        return x;
    }
    
    int main(){
        int a = 1, b = 5;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 2;
            cout << ((a<4) || ((b-=2) <= 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
