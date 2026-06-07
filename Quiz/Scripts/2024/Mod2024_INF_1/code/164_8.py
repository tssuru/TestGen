try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y-= 9;
        return y;
    }
    
    int main(){
        int a = 8, b = 4;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 5;
            cout << ((a<=6) && ((b+=1) <= 7)) << ':';
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
