try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 7;
        return y;
    }
    
    int main(){
        int a = 4, b = 8;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 3;
            cout << ((a<4) && ((b+=1) < 4)) << ':';
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
