try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 2;
        return y;
    }
    
    int main(){
        int a = 6, b = 4;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 3;
            cout << ((a>5) || ((b+=1) < 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
