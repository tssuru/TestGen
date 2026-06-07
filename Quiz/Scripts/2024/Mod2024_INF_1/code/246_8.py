try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 6;
        return y;
    }
    
    int main(){
        int a = 2, b = 5;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 3;
            cout << ((b>=7) && ((a+=1) >= 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
