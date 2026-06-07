try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 5;
        return x;
    }
    
    int main(){
        int a = 4, b = 7;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 6;
            cout << ((a>5) || ((b+=2) > 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
