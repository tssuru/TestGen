try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 7;
        y+= 6;
        return x;
    }
    
    int main(){
        int a = 9, b = 3;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 8;
            cout << ((b<6) || ((a-=2) >= 5)) << ':';
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
