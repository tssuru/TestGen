try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 2;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 8, b = 5;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 7;
            cout << ((a>=6) && ((b+=1) > 3)) << ':';
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
