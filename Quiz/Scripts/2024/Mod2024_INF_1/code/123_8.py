try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 3;
        return x;
    }
    
    int main(){
        int a = 7, b = 8;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 2;
            cout << ((b<4) && ((a-=2) > 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
