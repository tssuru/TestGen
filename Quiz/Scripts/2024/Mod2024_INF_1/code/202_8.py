try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 7;
        return x;
    }
    
    int main(){
        int a = 1, b = 9;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 4;
            cout << ((a>3) && ((b+=1) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 8;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
