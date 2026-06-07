try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 8;
        return x;
    }
    
    int main(){
        int a = 2, b = 1;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 7;
            cout << ((b<=3) && ((a+=2) > 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
