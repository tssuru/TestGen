try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 3, b = 6;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 4;
            cout << ((a<3) && ((b-=1) < 3)) << ':';
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
