try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 1, b = 7;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 7;
            cout << ((a<5) && ((b-=2) <= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
