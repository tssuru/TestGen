try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 8;
        return x;
    }
    
    int main(){
        int a = 2, b = 7;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 8;
            cout << ((a<6) && ((b-=1) <= 3)) << ':';
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
