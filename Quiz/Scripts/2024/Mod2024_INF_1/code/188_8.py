try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 5;
        return y;
    }
    
    int main(){
        int a = 4, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 3;
            cout << ((b<3) && ((a-=2) <= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
