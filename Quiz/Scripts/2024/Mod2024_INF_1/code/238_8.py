try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 2, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 8;
            cout << ((b>=4) || ((a+=1) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
