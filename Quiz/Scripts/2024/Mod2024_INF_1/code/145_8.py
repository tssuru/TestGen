try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 4;
        y+= 8;
        return y;
    }
    
    int main(){
        int a = 2, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 6;
            cout << ((b>=6) && ((a+=1) <= 6)) << ':';
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
