try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 6;
        return x;
    }
    
    int main(){
        int a = 5, b = 4;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 9;
            cout << ((a<=5) || ((b+=2) < 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
