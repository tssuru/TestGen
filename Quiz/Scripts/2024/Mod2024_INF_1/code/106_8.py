try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 2;
        return y;
    }
    
    int main(){
        int a = 1, b = 3;
        b = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 4;
            cout << ((a<4) && ((b+=1) <= 3)) << ':';
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
