try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 5;
        return x;
    }
    
    int main(){
        int a = 8, b = 5;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 4;
            cout << ((a<3) && ((b-=1) > 5)) << ':';
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
